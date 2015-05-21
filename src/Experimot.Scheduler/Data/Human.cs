using System.Collections.Generic;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using Caliburn.Micro;
using experimot.msgs;
using Experimot.Core.Annotations;
using Newtonsoft.Json;

namespace Experimot.Scheduler.Data
{
    public class Human : INotifyPropertyChanged
    {
        private int _id;

        private KinectBody _body;

        private readonly BindableCollection<Gesture> _gestures;
        private Vector3d _headPosition;
        private Vector3d _torsoPosition;
        private Quaternion _torsoOrientation;

        public Human(int id)
        {
            _id = id;
            _gestures = new BindableCollection<Gesture>();
        }

        public Human(int id, IList<GestureModule> modules) : this(id)
        {
            if (modules != null)
            {
                foreach (var module in modules)
                {
                    if (module.Gestures != null && module.Gestures.Count > 0)
                    {
                        foreach (var gestureDescription in module.Gestures)
                        {
                            _gestures.Add(new Gesture(gestureDescription.Name, gestureDescription.Mode));
                        }
                    }
                }
            }
        }

        public int Id
        {
            get { return _id; }
            set
            {
                if (value == _id) return;
                _id = value;
                OnPropertyChanged();
            }
        }

        [JsonIgnore]
        public KinectBody Body
        {
            get { return _body; }
            set
            {
                if (Equals(value, _body)) return;
                _body = value;
                OnPropertyChanged();
            }
        }

        public Vector3d HeadPosition
        {
            get { return _headPosition; }
            set
            {
                if (Equals(value, _headPosition)) return;
                _headPosition = value;
                OnPropertyChanged();
            }
        }

        public Vector3d TorsoPosition
        {
            get { return _torsoPosition; }
            set
            {
                if (Equals(value, _torsoPosition)) return;
                _torsoPosition = value;
                OnPropertyChanged();
            }
        }

        public Quaternion TorsoOrientation
        {
            get { return _torsoOrientation; }
            set
            {
                if (Equals(value, _torsoOrientation)) return;
                _torsoOrientation = value;
                OnPropertyChanged();
            }
        }

        public BindableCollection<Gesture> Gestures
        {
            get { return _gestures; }
        }

        public event PropertyChangedEventHandler PropertyChanged;

        [NotifyPropertyChangedInvocator]
        protected virtual void OnPropertyChanged([CallerMemberName] string propertyName = null)
        {
            var handler = PropertyChanged;
            if (handler != null) handler(this, new PropertyChangedEventArgs(propertyName));
        }
    }
}