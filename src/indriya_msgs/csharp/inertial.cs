//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: proto/inertial.proto
// Note: requires additional types generated from: pose.proto
namespace Indriya.Core.Msgs
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"Inertial")]
  public partial class Inertial : global::ProtoBuf.IExtensible
  {
    public Inertial() {}
    
    private double _mass = default(double);
    [global::ProtoBuf.ProtoMember(1, IsRequired = false, Name=@"mass", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double mass
    {
      get { return _mass; }
      set { _mass = value; }
    }
    private Indriya.Core.Msgs.Pose _pose = null;
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"pose", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public Indriya.Core.Msgs.Pose pose
    {
      get { return _pose; }
      set { _pose = value; }
    }
    private double _ixx = default(double);
    [global::ProtoBuf.ProtoMember(3, IsRequired = false, Name=@"ixx", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double ixx
    {
      get { return _ixx; }
      set { _ixx = value; }
    }
    private double _ixy = default(double);
    [global::ProtoBuf.ProtoMember(4, IsRequired = false, Name=@"ixy", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double ixy
    {
      get { return _ixy; }
      set { _ixy = value; }
    }
    private double _ixz = default(double);
    [global::ProtoBuf.ProtoMember(5, IsRequired = false, Name=@"ixz", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double ixz
    {
      get { return _ixz; }
      set { _ixz = value; }
    }
    private double _iyy = default(double);
    [global::ProtoBuf.ProtoMember(6, IsRequired = false, Name=@"iyy", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double iyy
    {
      get { return _iyy; }
      set { _iyy = value; }
    }
    private double _iyz = default(double);
    [global::ProtoBuf.ProtoMember(7, IsRequired = false, Name=@"iyz", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double iyz
    {
      get { return _iyz; }
      set { _iyz = value; }
    }
    private double _izz = default(double);
    [global::ProtoBuf.ProtoMember(8, IsRequired = false, Name=@"izz", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double izz
    {
      get { return _izz; }
      set { _izz = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}