using System.Collections.Generic;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using experimot.msgs;
using Experimot.Scheduler.Annotations;
using Xceed.Wpf.Toolkit.PropertyGrid.Attributes;

namespace Experimot.Scheduler.Core
{
    public class SensorData : INotifyPropertyChanged
    {
        private JointValueVector _jointValues;
        private IMU _imu;
        private readonly IDictionary<string, object> _sensorValues;

        public SensorData()
        {
            _jointValues = new JointValueVector();
            _imu = new IMU();
            _sensorValues = new Dictionary<string, object>();
        }

        [ExpandableObject]
        public IDictionary<string, object> SensorValues
        {
            get { return _sensorValues; }
        }

        [ExpandableObject]
        public IMU Imu
        {
            get { return _imu; }
            set
            {
                if (Equals(value, _imu)) return;
                _imu = value;
                OnPropertyChanged();
            }
        }

        [ExpandableObject]
        public JointValueVector JointValues
        {
            get { return _jointValues; }
            set
            {
                if (Equals(value, _jointValues)) return;
                _jointValues = value;
                OnPropertyChanged();
            }
        }

        public event PropertyChangedEventHandler PropertyChanged;

        [NotifyPropertyChangedInvocator]
        protected virtual void OnPropertyChanged([CallerMemberName] string propertyName = null)
        {
            var handler = PropertyChanged;
            if (handler != null) handler(this, new PropertyChangedEventArgs(propertyName));
        }
    }

    public class Robot : INotifyPropertyChanged
    {
        private string _name;
        private string _version;
        private string _description;
        private string _filePath;
        private readonly Localization _localization;
        private readonly SensorData _sensorData;

        public Robot()
        {
            _sensorData = new SensorData();
            _localization = new Localization();
        }

        public string Name
        {
            get { return _name; }
            set
            {
                if (value == _name) return;
                _name = value;
                OnPropertyChanged();
            }
        }

        public string Version
        {
            get { return _version; }
            set
            {
                if (value == _version) return;
                _version = value;
                OnPropertyChanged();
            }
        }

        public string Description
        {
            get { return _description; }
            set
            {
                if (value == _description) return;
                _description = value;
                OnPropertyChanged();
            }
        }

        public string FilePath
        {
            get { return _filePath; }
            set
            {
                if (value == _filePath) return;
                _filePath = value;
                OnPropertyChanged();
            }
        }

        [ExpandableObject]
        public SensorData SensorData
        {
            get { return _sensorData; }
        }

        [ExpandableObject]
        public Localization Localization
        {
            get { return _localization; }
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