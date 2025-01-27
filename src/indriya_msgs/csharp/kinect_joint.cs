//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: proto/kinect_joint.proto
// Note: requires additional types generated from: vector3d.proto
// Note: requires additional types generated from: quaternion.proto
namespace Indriya.Core.Msgs
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"KinectJoint")]
  public partial class KinectJoint : global::ProtoBuf.IExtensible
  {
    public KinectJoint() {}
    
    private Indriya.Core.Msgs.KinectJoint.JointType _Type;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"Type", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public Indriya.Core.Msgs.KinectJoint.JointType Type
    {
      get { return _Type; }
      set { _Type = value; }
    }
    private Indriya.Core.Msgs.KinectJoint.TrackingState _State;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"State", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public Indriya.Core.Msgs.KinectJoint.TrackingState State
    {
      get { return _State; }
      set { _State = value; }
    }
    private Indriya.Core.Msgs.Vector3d _Position;
    [global::ProtoBuf.ProtoMember(3, IsRequired = true, Name=@"Position", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public Indriya.Core.Msgs.Vector3d Position
    {
      get { return _Position; }
      set { _Position = value; }
    }
    private Indriya.Core.Msgs.Quaternion _Orientation;
    [global::ProtoBuf.ProtoMember(4, IsRequired = true, Name=@"Orientation", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public Indriya.Core.Msgs.Quaternion Orientation
    {
      get { return _Orientation; }
      set { _Orientation = value; }
    }
    private float _Angle = (float)-1000;
    [global::ProtoBuf.ProtoMember(5, IsRequired = false, Name=@"Angle", DataFormat = global::ProtoBuf.DataFormat.FixedSize)]
    [global::System.ComponentModel.DefaultValue((float)-1000)]
    public float Angle
    {
      get { return _Angle; }
      set { _Angle = value; }
    }
    [global::ProtoBuf.ProtoContract(Name=@"TrackingState")]
    public enum TrackingState
    {
            
      [global::ProtoBuf.ProtoEnum(Name=@"NotTracked", Value=0)]
      NotTracked = 0,
            
      [global::ProtoBuf.ProtoEnum(Name=@"Inferred", Value=1)]
      Inferred = 1,
            
      [global::ProtoBuf.ProtoEnum(Name=@"Tracked", Value=2)]
      Tracked = 2
    }
  
    [global::ProtoBuf.ProtoContract(Name=@"JointType")]
    public enum JointType
    {
            
      [global::ProtoBuf.ProtoEnum(Name=@"SpineBase", Value=0)]
      SpineBase = 0,
            
      [global::ProtoBuf.ProtoEnum(Name=@"SpineMid", Value=1)]
      SpineMid = 1,
            
      [global::ProtoBuf.ProtoEnum(Name=@"Neck", Value=2)]
      Neck = 2,
            
      [global::ProtoBuf.ProtoEnum(Name=@"Head", Value=3)]
      Head = 3,
            
      [global::ProtoBuf.ProtoEnum(Name=@"ShoulderLeft", Value=4)]
      ShoulderLeft = 4,
            
      [global::ProtoBuf.ProtoEnum(Name=@"ElbowLeft", Value=5)]
      ElbowLeft = 5,
            
      [global::ProtoBuf.ProtoEnum(Name=@"WristLeft", Value=6)]
      WristLeft = 6,
            
      [global::ProtoBuf.ProtoEnum(Name=@"HandLeft", Value=7)]
      HandLeft = 7,
            
      [global::ProtoBuf.ProtoEnum(Name=@"ShoulderRight", Value=8)]
      ShoulderRight = 8,
            
      [global::ProtoBuf.ProtoEnum(Name=@"ElbowRight", Value=9)]
      ElbowRight = 9,
            
      [global::ProtoBuf.ProtoEnum(Name=@"WristRight", Value=10)]
      WristRight = 10,
            
      [global::ProtoBuf.ProtoEnum(Name=@"HandRight", Value=11)]
      HandRight = 11,
            
      [global::ProtoBuf.ProtoEnum(Name=@"HipLeft", Value=12)]
      HipLeft = 12,
            
      [global::ProtoBuf.ProtoEnum(Name=@"KneeLeft", Value=13)]
      KneeLeft = 13,
            
      [global::ProtoBuf.ProtoEnum(Name=@"AnkleLeft", Value=14)]
      AnkleLeft = 14,
            
      [global::ProtoBuf.ProtoEnum(Name=@"FootLeft", Value=15)]
      FootLeft = 15,
            
      [global::ProtoBuf.ProtoEnum(Name=@"HipRight", Value=16)]
      HipRight = 16,
            
      [global::ProtoBuf.ProtoEnum(Name=@"KneeRight", Value=17)]
      KneeRight = 17,
            
      [global::ProtoBuf.ProtoEnum(Name=@"AnkleRight", Value=18)]
      AnkleRight = 18,
            
      [global::ProtoBuf.ProtoEnum(Name=@"FootRight", Value=19)]
      FootRight = 19,
            
      [global::ProtoBuf.ProtoEnum(Name=@"SpineShoulder", Value=20)]
      SpineShoulder = 20,
            
      [global::ProtoBuf.ProtoEnum(Name=@"HandTipLeft", Value=21)]
      HandTipLeft = 21,
            
      [global::ProtoBuf.ProtoEnum(Name=@"ThumbLeft", Value=22)]
      ThumbLeft = 22,
            
      [global::ProtoBuf.ProtoEnum(Name=@"HandTipRight", Value=23)]
      HandTipRight = 23,
            
      [global::ProtoBuf.ProtoEnum(Name=@"ThumbRight", Value=24)]
      ThumbRight = 24
    }
  
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}