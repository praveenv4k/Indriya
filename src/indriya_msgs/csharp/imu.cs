//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: proto/imu.proto
// Note: requires additional types generated from: time.proto
// Note: requires additional types generated from: vector3d.proto
// Note: requires additional types generated from: quaternion.proto
namespace Indriya.Core.Msgs
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"IMU")]
  public partial class IMU : global::ProtoBuf.IExtensible
  {
    public IMU() {}
    
    private Indriya.Core.Msgs.Time _stamp;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"stamp", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public Indriya.Core.Msgs.Time stamp
    {
      get { return _stamp; }
      set { _stamp = value; }
    }
    private string _entity_name;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"entity_name", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string entity_name
    {
      get { return _entity_name; }
      set { _entity_name = value; }
    }
    private Indriya.Core.Msgs.Quaternion _orientation;
    [global::ProtoBuf.ProtoMember(3, IsRequired = true, Name=@"orientation", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public Indriya.Core.Msgs.Quaternion orientation
    {
      get { return _orientation; }
      set { _orientation = value; }
    }
    private Indriya.Core.Msgs.Vector3d _angular_velocity;
    [global::ProtoBuf.ProtoMember(4, IsRequired = true, Name=@"angular_velocity", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public Indriya.Core.Msgs.Vector3d angular_velocity
    {
      get { return _angular_velocity; }
      set { _angular_velocity = value; }
    }
    private Indriya.Core.Msgs.Vector3d _linear_acceleration;
    [global::ProtoBuf.ProtoMember(5, IsRequired = true, Name=@"linear_acceleration", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public Indriya.Core.Msgs.Vector3d linear_acceleration
    {
      get { return _linear_acceleration; }
      set { _linear_acceleration = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}