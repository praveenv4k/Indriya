//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: proto/camerasensor.proto
// Note: requires additional types generated from: vector2d.proto
// Note: requires additional types generated from: distortion.proto
namespace Indriya.Core.Msgs
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"CameraSensor")]
  public partial class CameraSensor : global::ProtoBuf.IExtensible
  {
    public CameraSensor() {}
    
    private double _horizontal_fov = default(double);
    [global::ProtoBuf.ProtoMember(1, IsRequired = false, Name=@"horizontal_fov", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double horizontal_fov
    {
      get { return _horizontal_fov; }
      set { _horizontal_fov = value; }
    }
    private Indriya.Core.Msgs.Vector2d _image_size = null;
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"image_size", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public Indriya.Core.Msgs.Vector2d image_size
    {
      get { return _image_size; }
      set { _image_size = value; }
    }
    private string _image_format = "";
    [global::ProtoBuf.ProtoMember(3, IsRequired = false, Name=@"image_format", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string image_format
    {
      get { return _image_format; }
      set { _image_format = value; }
    }
    private double _near_clip = default(double);
    [global::ProtoBuf.ProtoMember(4, IsRequired = false, Name=@"near_clip", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double near_clip
    {
      get { return _near_clip; }
      set { _near_clip = value; }
    }
    private double _far_clip = default(double);
    [global::ProtoBuf.ProtoMember(5, IsRequired = false, Name=@"far_clip", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double far_clip
    {
      get { return _far_clip; }
      set { _far_clip = value; }
    }
    private bool _save_enabled = default(bool);
    [global::ProtoBuf.ProtoMember(6, IsRequired = false, Name=@"save_enabled", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(default(bool))]
    public bool save_enabled
    {
      get { return _save_enabled; }
      set { _save_enabled = value; }
    }
    private string _save_path = "";
    [global::ProtoBuf.ProtoMember(7, IsRequired = false, Name=@"save_path", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string save_path
    {
      get { return _save_path; }
      set { _save_path = value; }
    }
    private Indriya.Core.Msgs.Distortion _distortion = null;
    [global::ProtoBuf.ProtoMember(8, IsRequired = false, Name=@"distortion", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public Indriya.Core.Msgs.Distortion distortion
    {
      get { return _distortion; }
      set { _distortion = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}