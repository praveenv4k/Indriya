using System;
using System.Windows.Media.Effects;
using Experimot.Studio.Modules.FilterDesigner.Util;

namespace Experimot.Studio.Modules.FilterDesigner.ShaderEffects
{
    internal class ShaderEffectBase<T> : ShaderEffect, IDisposable
    {
        [ThreadStatic]
        private static PixelShader _shader;

        private static PixelShader Shader
        {
            get { return (_shader ?? (_shader = ShaderEffectUtility.GetPixelShader(typeof(T).Name))); }
        }

        protected ShaderEffectBase()
        {
            PixelShader = Shader;
        }

        void IDisposable.Dispose()
        {
            PixelShader = null;
        }
    }
}