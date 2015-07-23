//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: proto/projector.proto
// Note: requires additional types generated from: pose.proto
namespace Indriya.Core.Msgs
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"Projector")]
  public partial class Projector : global::ProtoBuf.IExtensible
  {
    public Projector() {}
    
    private string _name;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"name", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string name
    {
      get { return _name; }
      set { _name = value; }
    }
    private string _texture = "";
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"texture", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string texture
    {
      get { return _texture; }
      set { _texture = value; }
    }
    private Indriya.Core.Msgs.Pose _pose = null;
    [global::ProtoBuf.ProtoMember(3, IsRequired = false, Name=@"pose", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public Indriya.Core.Msgs.Pose pose
    {
      get { return _pose; }
      set { _pose = value; }
    }
    private double _fov = (double)0.785;
    [global::ProtoBuf.ProtoMember(4, IsRequired = false, Name=@"fov", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue((double)0.785)]
    public double fov
    {
      get { return _fov; }
      set { _fov = value; }
    }
    private double _near_clip = (double)0.1;
    [global::ProtoBuf.ProtoMember(5, IsRequired = false, Name=@"near_clip", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue((double)0.1)]
    public double near_clip
    {
      get { return _near_clip; }
      set { _near_clip = value; }
    }
    private double _far_clip = (double)10;
    [global::ProtoBuf.ProtoMember(6, IsRequired = false, Name=@"far_clip", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue((double)10)]
    public double far_clip
    {
      get { return _far_clip; }
      set { _far_clip = value; }
    }
    private bool _enabled = (bool)true;
    [global::ProtoBuf.ProtoMember(7, IsRequired = false, Name=@"enabled", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue((bool)true)]
    public bool enabled
    {
      get { return _enabled; }
      set { _enabled = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}