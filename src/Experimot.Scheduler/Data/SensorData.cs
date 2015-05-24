using System.Collections.Generic;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using experimot.msgs;
using Experimot.Core.Annotations;

namespace Experimot.Scheduler.Data
{
    public class SensorData : INotifyPropertyChanged
    {
        private JointValueVector _jointValues;
        private IMU _imu;
        private readonly IDictionary<string, object> _sensorValues;

        public SensorData()
        {
            _jointValues = new JointValueVector();
            for (int i = 0; i < 25; i++)
            {
                _jointValues.JointValues.Add(new JointValue
                {
                    id = i,
                    value = 0.0
                });
            }
            _imu = new IMU();
            _sensorValues = new Dictionary<string, object>();
        }

        public IDictionary<string, object> SensorValues
        {
            get { return _sensorValues; }
        }

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
}