//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: proto/pose.proto
// Note: requires additional types generated from: vector3d.proto
// Note: requires additional types generated from: quaternion.proto
namespace Indriya.Core.Msgs
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"Pose")]
  public partial class Pose : global::ProtoBuf.IExtensible
  {
    public Pose() {}
    
    private string _name = "";
    [global::ProtoBuf.ProtoMember(1, IsRequired = false, Name=@"name", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string name
    {
      get { return _name; }
      set { _name = value; }
    }
    private uint _id = default(uint);
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"id", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(uint))]
    public uint id
    {
      get { return _id; }
      set { _id = value; }
    }
    private Indriya.Core.Msgs.Vector3d _position;
    [global::ProtoBuf.ProtoMember(3, IsRequired = true, Name=@"position", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public Indriya.Core.Msgs.Vector3d position
    {
      get { return _position; }
      set { _position = value; }
    }
    private Indriya.Core.Msgs.Quaternion _orientation;
    [global::ProtoBuf.ProtoMember(4, IsRequired = true, Name=@"orientation", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public Indriya.Core.Msgs.Quaternion orientation
    {
      get { return _orientation; }
      set { _orientation = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}