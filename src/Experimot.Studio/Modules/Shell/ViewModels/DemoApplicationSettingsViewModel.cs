﻿using System.ComponentModel.Composition;
using Caliburn.Micro;
using ExperimotStudio.Properties;
using Gemini.Modules.Settings;

namespace ExperimotStudio.Modules.Shell.ViewModels
{
    [Export(typeof(ISettingsEditor))]
    [PartCreationPolicy(CreationPolicy.NonShared)]
    public class DemoApplicationSettingsViewModel : PropertyChangedBase, ISettingsEditor
    {
        private bool _confirmExit;

        public DemoApplicationSettingsViewModel()
        {
            ConfirmExit = Settings.Default.ConfirmExit;
        }

        public bool ConfirmExit
        {
            get { return _confirmExit; }
            set
            {
                if (value.Equals(_confirmExit)) return;
                _confirmExit = value;
                NotifyOfPropertyChange(() => ConfirmExit);
            }
        }

        public string SettingsPageName
        {
            get { return "General"; }
        }

        public string SettingsPagePath
        {
            get { return "Environment"; }
        }

        public void ApplyChanges()
        {
            if (ConfirmExit == Settings.Default.ConfirmExit)
            {
                return;
            }

            Settings.Default.ConfirmExit = ConfirmExit;
            Settings.Default.Save();
        }
    }
}