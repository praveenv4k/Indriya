//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: proto/link_data.proto
// Note: requires additional types generated from: vector3d.proto
// Note: requires additional types generated from: time.proto
namespace Indriya.Core.Msgs
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"LinkData")]
  public partial class LinkData : global::ProtoBuf.IExtensible
  {
    public LinkData() {}
    
    private Indriya.Core.Msgs.Time _time;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"time", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public Indriya.Core.Msgs.Time time
    {
      get { return _time; }
      set { _time = value; }
    }
    private string _name;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"name", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string name
    {
      get { return _name; }
      set { _name = value; }
    }
    private Indriya.Core.Msgs.Vector3d _linear_velocity = null;
    [global::ProtoBuf.ProtoMember(3, IsRequired = false, Name=@"linear_velocity", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public Indriya.Core.Msgs.Vector3d linear_velocity
    {
      get { return _linear_velocity; }
      set { _linear_velocity = value; }
    }
    private Indriya.Core.Msgs.Vector3d _angular_velocity = null;
    [global::ProtoBuf.ProtoMember(4, IsRequired = false, Name=@"angular_velocity", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public Indriya.Core.Msgs.Vector3d angular_velocity
    {
      get { return _angular_velocity; }
      set { _angular_velocity = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}