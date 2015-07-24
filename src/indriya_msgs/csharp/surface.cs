//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: proto/surface.proto
// Note: requires additional types generated from: friction.proto
namespace Indriya.Core.Msgs
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"Surface")]
  public partial class Surface : global::ProtoBuf.IExtensible
  {
    public Surface() {}
    
    private Indriya.Core.Msgs.Friction _friction = null;
    [global::ProtoBuf.ProtoMember(1, IsRequired = false, Name=@"friction", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public Indriya.Core.Msgs.Friction friction
    {
      get { return _friction; }
      set { _friction = value; }
    }
    private double _restitution_coefficient = default(double);
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"restitution_coefficient", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double restitution_coefficient
    {
      get { return _restitution_coefficient; }
      set { _restitution_coefficient = value; }
    }
    private double _bounce_threshold = default(double);
    [global::ProtoBuf.ProtoMember(3, IsRequired = false, Name=@"bounce_threshold", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double bounce_threshold
    {
      get { return _bounce_threshold; }
      set { _bounce_threshold = value; }
    }
    private double _soft_cfm = default(double);
    [global::ProtoBuf.ProtoMember(4, IsRequired = false, Name=@"soft_cfm", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double soft_cfm
    {
      get { return _soft_cfm; }
      set { _soft_cfm = value; }
    }
    private double _soft_erp = default(double);
    [global::ProtoBuf.ProtoMember(5, IsRequired = false, Name=@"soft_erp", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double soft_erp
    {
      get { return _soft_erp; }
      set { _soft_erp = value; }
    }
    private double _kp = default(double);
    [global::ProtoBuf.ProtoMember(6, IsRequired = false, Name=@"kp", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double kp
    {
      get { return _kp; }
      set { _kp = value; }
    }
    private double _kd = default(double);
    [global::ProtoBuf.ProtoMember(7, IsRequired = false, Name=@"kd", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double kd
    {
      get { return _kd; }
      set { _kd = value; }
    }
    private double _max_vel = default(double);
    [global::ProtoBuf.ProtoMember(8, IsRequired = false, Name=@"max_vel", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double max_vel
    {
      get { return _max_vel; }
      set { _max_vel = value; }
    }
    private double _min_depth = default(double);
    [global::ProtoBuf.ProtoMember(9, IsRequired = false, Name=@"min_depth", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double min_depth
    {
      get { return _min_depth; }
      set { _min_depth = value; }
    }
    private bool _collide_without_contact = default(bool);
    [global::ProtoBuf.ProtoMember(10, IsRequired = false, Name=@"collide_without_contact", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(default(bool))]
    public bool collide_without_contact
    {
      get { return _collide_without_contact; }
      set { _collide_without_contact = value; }
    }
    private uint _collide_without_contact_bitmask = default(uint);
    [global::ProtoBuf.ProtoMember(11, IsRequired = false, Name=@"collide_without_contact_bitmask", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(uint))]
    public uint collide_without_contact_bitmask
    {
      get { return _collide_without_contact_bitmask; }
      set { _collide_without_contact_bitmask = value; }
    }
    private uint _collide_bitmask = default(uint);
    [global::ProtoBuf.ProtoMember(12, IsRequired = false, Name=@"collide_bitmask", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(uint))]
    public uint collide_bitmask
    {
      get { return _collide_bitmask; }
      set { _collide_bitmask = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}