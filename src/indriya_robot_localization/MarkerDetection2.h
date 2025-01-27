#ifndef __MARKER_DETECTION2_H__
#define __MARKER_DETECTION2_H__

#ifndef NOMINMAX
	#define NOMINMAX
#endif

#include "Marker.h"
#include "MarkerDetector.h"

#include <opencv/cv.h>

#include "TransformationHelper.h"
#include "NaoHeadTransformHelper.h"
#include "Indriya\Common\Common.h"

#include "bullet\Bullet3Common\b3Quaternion.h"

#include "Indriya\Common\ParameterHelper.h"

using namespace alvar;
using namespace std;

class MarkerDetection2;

#define PRINT_MSG 0

//#define TOP_MARKER_ID 14

#define MATH_PI_4 OpenRAVE::PI/4

#define ROT_DIST_THRES 10

typedef boost::shared_ptr<MarkerDetection2> MarkerDetection2Ptr;

class MarkerDetection2{

public:
	MarkerDetection2(std::string& calibFile, int markerSize, int cubeSize) :m_strCalibFile(calibFile), m_nMarkerSize(markerSize), m_nCubeSize(cubeSize)
	{
		max_error = std::numeric_limits<double>::max();
		init_detection = 0;

		m_nFrontMarkerId = FRONT_MARKER_ID;
		m_nLeftMarkerId = LEFT_MARKER_ID;
		m_nRightMarkerId = RIGHT_MARKER_ID;
		m_nRearMarkerId = REAR_MARKER_ID;
		m_nTopMarkerId = TOP_MARKER_ID;
		m_nWorldMarkerId = WORLD_MARKER_ID;
		m_nWorldMarkerSize = WORLD_MARKER_SIZE;
		m_nCubeSize = CUBE_SIZE;
		m_nMarkerSize = MARKER_SIZE;
		m_strCalibFile = CALIB_FILE;
		_init();
	}

	MarkerDetection2(Indriya::Core::Msgs::NodePtr& pNode){
		max_error = std::numeric_limits<double>::max();
		init_detection = 0;
		m_nCubeSize = ParameterHelper::GetParam<int>(pNode->param(), "cube_size", CUBE_SIZE);
		m_nMarkerSize = ParameterHelper::GetParam<int>(pNode->param(), "marker_size", MARKER_SIZE);
		m_nWorldMarkerSize = ParameterHelper::GetParam<int>(pNode->param(), "world_marker_size", WORLD_MARKER_SIZE);
		m_strCalibFile = ParameterHelper::GetParam<std::string>(pNode->param(), "calib_file", CALIB_FILE);
		m_bFlip = ParameterHelper::GetParam<bool>(pNode->param(), "flip_image", false);
		if (m_bFlip){
			m_nFrontMarkerId = ParameterHelper::GetParam<int>(pNode->param(), "front_marker_flip_id", FRONT_MARKER_FLIP_ID);
			m_nLeftMarkerId = ParameterHelper::GetParam<int>(pNode->param(), "left_marker_flip_id", LEFT_MARKER_FLIP_ID);
			m_nRightMarkerId = ParameterHelper::GetParam<int>(pNode->param(), "right_marker_flip_id", RIGHT_MARKER_FLIP_ID);
			m_nRearMarkerId = ParameterHelper::GetParam<int>(pNode->param(), "rear_marker_flip_id", REAR_MARKER_FLIP_ID);
			m_nTopMarkerId = ParameterHelper::GetParam<int>(pNode->param(), "top_marker_flip_id", TOP_MARKER_FLIP_ID);
			m_nWorldMarkerId = ParameterHelper::GetParam<int>(pNode->param(), "world_marker_id", WORLD_MARKER_FLIP_ID);
		}
		else{
			m_nFrontMarkerId = ParameterHelper::GetParam<int>(pNode->param(), "front_marker_id", FRONT_MARKER_ID);
			m_nLeftMarkerId = ParameterHelper::GetParam<int>(pNode->param(), "left_marker_id", LEFT_MARKER_ID);
			m_nRightMarkerId = ParameterHelper::GetParam<int>(pNode->param(), "right_marker_id", RIGHT_MARKER_ID);
			m_nRearMarkerId = ParameterHelper::GetParam<int>(pNode->param(), "rear_marker_id", REAR_MARKER_ID);
			m_nTopMarkerId = ParameterHelper::GetParam<int>(pNode->param(), "top_marker_id", TOP_MARKER_ID);
			m_nWorldMarkerId = ParameterHelper::GetParam<int>(pNode->param(), "world_marker_id", WORLD_MARKER_ID);
		}
		_init();
	}

	~MarkerDetection2(){}

	static void VisualizeMarkerPose(IplImage *image, Camera *cam, double visualize2d_points[12][2], CvScalar color) {
		// Cube
		for (int i = 0; i < 4; i++) {
			cvLine(image, cvPoint((int)visualize2d_points[i][0], (int)visualize2d_points[i][1]), cvPoint((int)visualize2d_points[(i + 1) % 4][0], (int)visualize2d_points[(i + 1) % 4][1]), color);
			cvLine(image, cvPoint((int)visualize2d_points[i][0], (int)visualize2d_points[i][1]), cvPoint((int)visualize2d_points[4 + i][0], (int)visualize2d_points[4 + i][1]), color);
			cvLine(image, cvPoint((int)visualize2d_points[4 + i][0], (int)visualize2d_points[4 + i][1]), cvPoint((int)visualize2d_points[4 + ((i + 1) % 4)][0], (int)visualize2d_points[4 + ((i + 1) % 4)][1]), color);
		}
		// Coordinates
		cvLine(image, cvPoint((int)visualize2d_points[8][0], (int)visualize2d_points[8][1]), cvPoint((int)visualize2d_points[9][0], (int)visualize2d_points[9][1]), CV_RGB(255, 0, 0));
		cvLine(image, cvPoint((int)visualize2d_points[8][0], (int)visualize2d_points[8][1]), cvPoint((int)visualize2d_points[10][0], (int)visualize2d_points[10][1]), CV_RGB(0, 255, 0));
		cvLine(image, cvPoint((int)visualize2d_points[8][0], (int)visualize2d_points[8][1]), cvPoint((int)visualize2d_points[11][0], (int)visualize2d_points[11][1]), CV_RGB(0, 0, 255));
	}

	static void Visualize(IplImage *image, Camera *cam, double edge_length, Pose& pose, CvScalar color) {
		double visualize3d_points[12][3] = {
			// cube
			{ -(edge_length / 2), -(edge_length / 2), 0 },
			{ -(edge_length / 2), (edge_length / 2), 0 },
			{ (edge_length / 2), (edge_length / 2), 0 },
			{ (edge_length / 2), -(edge_length / 2), 0 },
			{ -(edge_length / 2), -(edge_length / 2), edge_length },
			{ -(edge_length / 2), (edge_length / 2), edge_length },
			{ (edge_length / 2), (edge_length / 2), edge_length },
			{ (edge_length / 2), -(edge_length / 2), edge_length },
			//coordinates
			{ 0, 0, 0 },
			{ edge_length, 0, 0 },
			{ 0, edge_length, 0 },
			{ 0, 0, edge_length },
		};
		double visualize2d_points[12][2];
		CvMat visualize3d_points_mat;
		CvMat visualize2d_points_mat;
		cvInitMatHeader(&visualize3d_points_mat, 12, 3, CV_64F, visualize3d_points);
		cvInitMatHeader(&visualize2d_points_mat, 12, 2, CV_64F, visualize2d_points);
		cam->ProjectPoints(&visualize3d_points_mat, &pose, &visualize2d_points_mat);

		VisualizeMarkerPose(image, cam, visualize2d_points, color);
	}

	bool TransformToTopFrame(std::map<int, Pose>& poseMap, Transform& outTf){
		std::vector<Transform> tfs;
		FOREACH(it, poseMap){
			Transform tf;
			TransformationHelper::PoseToTransform(it->second, tf);
			int factor = -1;
			Transform tf2(geometry::quatFromAxisAngle(RaveVector<dReal>(1, 0, 0), factor*((alvar::PI) / 2)), Vector(0, (double)m_nCubeSize / 2, -(double)m_nCubeSize / 2));
			if (it->first == TOP_MARKER_ID){
				//tfs.push_back(tf*m_MarkerTransformMapping[it->first]); // 20150410
				tfs.push_back(tf);
			}
			else{
				tfs.push_back(tf*tf2*m_MarkerTransformMapping[it->first]);
			}
		}
		outTf.identity();
		if (tfs.size() > 0){
			if (tfs.size() > 1){
				Transform tf1 = tfs[0];
				Transform tf2 = tfs[1];
				outTf.rot = geometry::quatSlerp(tf1.rot, tf2.rot, 0.5);
				outTf.trans = 0.5*(tf1.trans + tf2.trans);
			}
			else{
				outTf = tfs[0];
			}
			return true;
#if PRINT_MSG
			Transform disp;
			TransformationHelper::PoseToTransform(poseMap.at(7), disp);
			cout << "First marker: " << disp << "; Top marker: " << outTf << std::endl;
#endif
		}
		return false;
	}

	bool ComputeOtherMarkers(const std::map<int, Transform>& poseMap, std::map<int, Transform>& outMap){
		if (poseMap.size() > 0){
			std::vector<std::map<int, Transform>> allMap;
			allMap.resize(poseMap.size());
			int i = 0;
			FOREACHC(it, poseMap){
				Transform topFrame;
				TransformToTopFrame(it->first, it->second, topFrame);
				//allMap[i].insert(std::pair<int, Transform>(TOP_MARKER_ID, topFrame));
				FOREACH(itt, m_MarkerTransformMapping){
					int factor = -1;
					Transform tf1(geometry::quatFromAxisAngle(RaveVector<dReal>(1, 0, 0), factor*((alvar::PI) / 2)), Vector(0, (double)m_nCubeSize / 2, -(double)m_nCubeSize / 2));
					Transform tf2 = m_MarkerTransformMapping[itt->first];

					Transform frameN = topFrame* tf2.inverse() * tf1.inverse();

					allMap[i].insert(std::pair<int, Transform>(itt->first, frameN));
					//outTf = pose*tf2*m_MarkerTransformMapping[id];
				}
				i++;
			}
		}
		return false;
	}

	void TransformToTopFrame(const int id, const Transform& pose, Transform& outTf){
		if (id == TOP_MARKER_ID){
			outTf = pose;
		}
		else{
			int factor = -1;
			Transform tf2(geometry::quatFromAxisAngle(RaveVector<dReal>(1, 0, 0), factor*((alvar::PI) / 2)), Vector(0, (double)m_nCubeSize / 2, -(double)m_nCubeSize / 2));
			outTf = pose*tf2*m_MarkerTransformMapping[id];
		}
	}

	bool TransformToTopFrame(std::map<int, Transform>& poseMap, const Transform& prevTfm, Transform& outTf, bool init_frames){
		bool ret = false;
		std::vector<Transform> tfs;
		double dist_threshold = 500;
		FOREACH(it, poseMap){
			if (it->first == TOP_MARKER_ID){
				//tfs.push_back(it->second*m_MarkerTransformMapping[it->first]); // 20150410
				tfs.push_back(it->second);
			}
			else{
				int factor = -1;
				Transform tf2(geometry::quatFromAxisAngle(RaveVector<dReal>(1, 0, 0), factor*((alvar::PI) / 2)), Vector(0, (double)m_nCubeSize / 2, -(double)m_nCubeSize / 2));
				tfs.push_back(it->second*tf2*m_MarkerTransformMapping[it->first]);
			}
		}
		outTf.identity();
		b3Quaternion q(prevTfm.rot[1], prevTfm.rot[2], prevTfm.rot[3], prevTfm.rot[0]);
		if (tfs.size() > 0){
			if (tfs.size() > 1){
				//TODO Error based weighting of the rotation and translation
				Transform tf1 = tfs[0];
				Transform tf2 = tfs[1];
				outTf.rot = geometry::quatSlerp(tf1.rot, tf2.rot, 0.5);
				outTf.trans = 0.5*(tf1.trans + tf2.trans);

				b3Quaternion q1(tf1.rot[1], tf1.rot[2], tf1.rot[3], tf1.rot[0]);
				b3Quaternion q2(tf2.rot[1], tf2.rot[2], tf2.rot[3], tf2.rot[0]);

#if 0
				double angle1 = q.angle(q1);
				double angle2 = q.angle(q2);


				if (fabs(angle1) < fabs(angle2)){
					if (fabs(angle1) < MATH_PI_4){
						outTf = tf1;
						ret = true;
					}
				}
				else{
					if (fabs(angle2) < MATH_PI_4){
						outTf = tf2;
						ret = true;
					}
				}
#else
				dReal euc_dist1 = (prevTfm.trans - tf1.trans).lengthsqr3();
				dReal euc_dist2 = (prevTfm.trans - tf2.trans).lengthsqr3();
				dReal dist1 = (prevTfm.rot - tf1.rot).lengthsqr4();
				dReal dist2 = (prevTfm.rot - tf2.rot).lengthsqr4();
				if (init_frames){
					ret = true;
				}
				else{
					/*if (dist1 < 3.0 && euc_dist1 < dist_threshold && dist2 < 3.0 && euc_dist2 < dist_threshold){
						ret = true;
					}
					else if (dist1 < 3.0 && euc_dist1 < dist_threshold){
						outTf = tf1;
						ret = true;
					}
					else if (dist2 < 3.0 && euc_dist2 < dist_threshold){
						outTf = tf2;
						ret = true;
					}*/
					if (dist1 < ROT_DIST_THRES  && dist2 < ROT_DIST_THRES){
						ret = true;
					}
					else if (dist1 < ROT_DIST_THRES){
						outTf = tf1;
						ret = true;
					}
					else if (dist2 < ROT_DIST_THRES){
						outTf = tf2;
						ret = true;
					}
				}
#endif
			}
			else{
				outTf = tfs[0];
				if (init_frames){
					ret = true;
				}
				else{
					b3Quaternion q1(outTf.rot[1], outTf.rot[2], outTf.rot[3], outTf.rot[0]);
					dReal dist = (prevTfm.rot - outTf.rot).lengthsqr4();
					dReal euc_dist = (prevTfm.trans - outTf.trans).lengthsqr3();
					/*if (dist < 3.0 && euc_dist < dist_threshold){
						ret = true;
					}*/
					if (dist < ROT_DIST_THRES){
						ret = true;
					}
				}
				/*double angle = q.angle(q1);
				if (fabs(angle) < MATH_PI_4){
					ret = true;
				}*/
			}

			if(!ret){
				outTf = prevTfm;
				ret = true;
			}
#if PRINT_MSG
			Transform disp;
			TransformationHelper::PoseToTransform(poseMap.at(7), disp);
			cout << "First marker: " << disp << "; Top marker: " << outTf << std::endl;
#endif
		}
		return ret;
	}

	void CorrectZAxisInversion(Pose& p){
#if 0
		double ext_rodriques[3];
		double ext_translate[3];
		CvMat ext_rodriques_mat = cvMat(3, 1, CV_64F, ext_rodriques);
		CvMat ext_translate_mat = cvMat(3, 1, CV_64F, ext_translate);
		p.GetRodriques(&ext_rodriques_mat);
		p.GetTranslation(&ext_translate_mat);

		if (ext_rodriques[2] < 0){
			p.Mirror(true, false, false);
			p.SetTranslation(ext_translate[0], ext_translate[1], ext_translate[2]);
		}
#endif
	}

	bool CheckIfValidMarker(int markerId){
		if (markerId == m_nFrontMarkerId ||
			markerId == m_nLeftMarkerId ||
			markerId == m_nRightMarkerId ||
			markerId == m_nRearMarkerId ||
			markerId == m_nTopMarkerId){
			return true;
		}
		return false;
	}

	bool CheckIfWorldMarker(int markerId){
		if (markerId == m_nWorldMarkerId){
			return true;
		}
		return false;
	}

	void SetMarkerSizesForIds(MarkerDetector<MarkerData>& marker_detector){
		marker_detector.SetMarkerSizeForId(m_nFrontMarkerId, m_nMarkerSize);
		marker_detector.SetMarkerSizeForId(m_nLeftMarkerId, m_nMarkerSize);
		marker_detector.SetMarkerSizeForId(m_nRightMarkerId, m_nMarkerSize);
		marker_detector.SetMarkerSizeForId(m_nRearMarkerId, m_nMarkerSize);
		marker_detector.SetMarkerSizeForId(m_nTopMarkerId, m_nMarkerSize);
		marker_detector.SetMarkerSizeForId(m_nWorldMarkerId, m_nWorldMarkerSize);
	}

	bool GetWorldTransform(Transform& worldTransform) const{
		worldTransform = m_WorldTransform;
		return m_bWorldMarkerExists;
	}

	bool Videocallback(const Transform& prev_tfm, IplImage *image, Transform& localTfm, Transform& out_tfm, std::vector<double>& q, bool drawTorso = false)
	{
		bool ret = false;
		bool showCorners = true;
		bool visualize = true;
		static IplImage *rgba;
		//bool flip_image = (image->origin ? true : false);
		//bool flip_image = true;
		if (m_bFlip) {
			cvFlip(image);
			image->origin = !image->origin;
		}

		static MarkerDetector<MarkerData> marker_detector;
		//marker_detector.SetMarkerSize(m_nMarkerSize); // for marker ids larger than 255, set the content resolution accordingly
		//marker_detector.SetMarkerSize(m_nWorldMarkerSize); // for marker ids larger than 255, set the content resolution accordingly
		SetMarkerSizesForIds(marker_detector);

		marker_detector.Detect(image, &m_camera, true, visualize);

		double error = max_error;
		int best_marker = -1;
		std::map<int, Pose> markerPoses;
		std::map<int, Transform> markerTfs;
		if (marker_detector.markers->size() >= 1){
			
			//cout << "Marker detected" << endl;
			for (size_t i = 0; i < marker_detector.markers->size(); i++) {
				if (i >= 32) break;
				
				alvar::MarkerData mData = marker_detector.markers->operator[](i);
				Pose p = mData.pose;

				int resol = mData.GetRes();
				int id = mData.GetId();

#if PRINT_MSG
				cout << "******* ID: " << id << "; Resolution: " << resol << endl;
#endif
				if (CheckIfWorldMarker(id)){
					m_bWorldMarkerExists = true;
					TransformMatrix world_rave;
					double world_gl_mat[16];
					p.GetMatrixGL(world_gl_mat, false);
					TransformationHelper::OpenGLToOpenRAVE(world_gl_mat, world_rave);
					m_WorldTransform = Transform(world_rave);
					Visualize(image, &m_camera, m_nWorldMarkerSize, p, CV_RGB(127, 127, 127));
					continue;
				}
				else{
					if (!CheckIfValidMarker(id)){
						continue;
					}
				}
				init_detection++;
				PointDouble pt1, pt2, pt3, pt4;
				pt4 = mData.experimot_marker_points_img[0];
				pt3 = mData.experimot_marker_points_img[resol - 1];
				pt1 = mData.experimot_marker_points_img[(resol*resol) - resol];
				pt2 = mData.experimot_marker_points_img[(resol*resol) - 1];

				if (showCorners) {
#if PRINT_MSG
					cout << "Showing Corners " << endl;
#endif
					cvCircle(image, cvPoint(int(pt1.x), int(pt1.y)), 5, CV_RGB(255, 255, 255));
					cvCircle(image, cvPoint(int(pt2.x), int(pt2.y)), 5, CV_RGB(255, 0, 0));
					cvCircle(image, cvPoint(int(pt3.x), int(pt3.y)), 5, CV_RGB(0, 255, 0));
					cvCircle(image, cvPoint(int(pt4.x), int(pt4.y)), 5, CV_RGB(0, 0, 255));
				}

				// Check Z-Axis inversion
				CorrectZAxisInversion(p);

				markerPoses.insert(std::pair<int, Pose>(id, p));

				double temp_error = (*(marker_detector.markers))[i].GetError(alvar::Marker::TRACK_ERROR | alvar::Marker::DECODE_ERROR | alvar::Marker::MARGIN_ERROR);
				if (temp_error < error){
					error = temp_error;
					best_marker = i;
				}
				//int id = (*(marker_detector.markers))[i].GetId();
				double r = 1.0 - double(id + 1) / 32.0;
				double g = 1.0 - double(id * 3 % 32 + 1) / 32.0;
				double b = 1.0 - double(id * 7 % 32 + 1) / 32.0;

				TransformMatrix rave;
				double gl_mat[16];

				p.GetMatrixGL(gl_mat, false);
				TransformationHelper::OpenGLToOpenRAVE(gl_mat, rave);

				markerTfs.insert(std::pair<int, Transform>(mData.GetId(), Transform(rave)));

#if PRINT_MSG
				if (id == 7){
					p.Output();
					std::cout << "Error : " << temp_error << std::endl;
				}
#endif
			}
			if (marker_detector.markers->size() > 0){
				Pose p_res;


				//TransformToTopFrame(markerPoses, out_tfm);
				TransformToTopFrame(markerTfs, prev_tfm, out_tfm, init_detection < 10); {
					TransformationHelper::TransformToPose(out_tfm, p_res);
					ret = true;
					int id = 10;
					double r = 1.0 - double(id + 1) / 32.0;
					double g = 1.0 - double(id * 3 % 32 + 1) / 32.0;
					double b = 1.0 - double(id * 7 % 32 + 1) / 32.0;

					//p_res.Output();

					if (drawTorso){
						Pose p_out;
						Transform torso_tfm;

#if 1
						TransformationHelper::ComputeTorsoFrame(p_res, localTfm, p_out);
#else			
						//Transform temp(out_tfm.rot, Vector(out_tfm.trans.z, out_tfm.trans.x, out_tfm.trans.y));
						NaoHeadTransformHelper::instance()->GetTorsoTransform(q, out_tfm, torso_tfm);
						TransformationHelper::TransformToPose(torso_tfm, p_out);
#endif

						//std::cout << "Displaying : ( " << p_out.translation[0] << ", " << p_out.translation[1] << ", " << p_out.translation[2] << " )" << std::endl;
						Visualize(image, &m_camera, m_nMarkerSize, p_out, CV_RGB(0, 0, 255));
						//p_out.Output();
					}
					//p_res.Mirror(true, false, true);
					Visualize(image, &m_camera, m_nMarkerSize, p_res, CV_RGB(255, 0, 0));
				}
			}
			if (m_bFlip) {
				cvFlip(image);
				image->origin = !image->origin;
			}
		}
		else{
			// In order to reinitialize the pose detection
			init_detection = 0;
		}
		return ret;
		}

private:
	bool _init(){
		int width = 1980;
		int height = 1080;
		bool ret = false;
		cout << "Loading calibration: " << m_strCalibFile;
		if (m_camera.SetCalib(m_strCalibFile.c_str(), width, height)) {
			cout << " [Ok]" << endl;
			ret = true;
		}
		else {
			m_camera.SetRes(width, height);
			cout << " [Fail]" << endl;
		}
		Vector rot_z(0, 0, 1);
		m_MarkerTransformMapping.insert(std::pair<int, Transform>(m_nFrontMarkerId, Transform(geometry::quatFromAxisAngle(rot_z, -(alvar::PI / 2)), Vector()))); // Front
		m_MarkerTransformMapping.insert(std::pair<int, Transform>(m_nLeftMarkerId, Transform(geometry::quatFromAxisAngle(rot_z, 0.0), Vector()))); // Left
		m_MarkerTransformMapping.insert(std::pair<int, Transform>(m_nRightMarkerId, Transform(geometry::quatFromAxisAngle(rot_z, alvar::PI), Vector()))); // Right
		m_MarkerTransformMapping.insert(std::pair<int, Transform>(m_nRearMarkerId, Transform(geometry::quatFromAxisAngle(rot_z, (alvar::PI / 2)), Vector()))); // Rear
		m_MarkerTransformMapping.insert(std::pair<int, Transform>(m_nTopMarkerId, Transform(geometry::quatFromAxisAngle(rot_z, (alvar::PI)), Vector()))); // Top

		return ret;
	}
private:
	std::string m_strCalibFile;
	int m_nMarkerSize;
	int m_nCubeSize;
	int m_nFrontMarkerId;
	int m_nLeftMarkerId;
	int m_nRightMarkerId;
	int m_nRearMarkerId;
	int m_nTopMarkerId;
	int m_nWorldMarkerId;
	int m_nWorldMarkerSize;
	bool m_bFlip;
	bool m_bWorldMarkerExists;
	Transform m_WorldTransform;
	Camera m_camera;
	double max_error;
	int init_detection;
	std::map<int, Transform> m_MarkerTransformMapping;
};

#endif