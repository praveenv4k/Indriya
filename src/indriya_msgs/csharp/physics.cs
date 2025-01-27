//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: proto/physics.proto
// Note: requires additional types generated from: vector3d.proto
namespace Indriya.Core.Msgs
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"Physics")]
  public partial class Physics : global::ProtoBuf.IExtensible
  {
    public Physics() {}
    
    private Indriya.Core.Msgs.Physics.Type _type = Indriya.Core.Msgs.Physics.Type.ODE;
    [global::ProtoBuf.ProtoMember(1, IsRequired = false, Name=@"type", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(Indriya.Core.Msgs.Physics.Type.ODE)]
    public Indriya.Core.Msgs.Physics.Type type
    {
      get { return _type; }
      set { _type = value; }
    }
    private string _solver_type = "";
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"solver_type", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string solver_type
    {
      get { return _solver_type; }
      set { _solver_type = value; }
    }
    private double _min_step_size = default(double);
    [global::ProtoBuf.ProtoMember(3, IsRequired = false, Name=@"min_step_size", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double min_step_size
    {
      get { return _min_step_size; }
      set { _min_step_size = value; }
    }
    private int _precon_iters = default(int);
    [global::ProtoBuf.ProtoMember(4, IsRequired = false, Name=@"precon_iters", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(int))]
    public int precon_iters
    {
      get { return _precon_iters; }
      set { _precon_iters = value; }
    }
    private int _iters = default(int);
    [global::ProtoBuf.ProtoMember(5, IsRequired = false, Name=@"iters", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(int))]
    public int iters
    {
      get { return _iters; }
      set { _iters = value; }
    }
    private double _sor = default(double);
    [global::ProtoBuf.ProtoMember(6, IsRequired = false, Name=@"sor", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double sor
    {
      get { return _sor; }
      set { _sor = value; }
    }
    private double _cfm = default(double);
    [global::ProtoBuf.ProtoMember(7, IsRequired = false, Name=@"cfm", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double cfm
    {
      get { return _cfm; }
      set { _cfm = value; }
    }
    private double _erp = default(double);
    [global::ProtoBuf.ProtoMember(8, IsRequired = false, Name=@"erp", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double erp
    {
      get { return _erp; }
      set { _erp = value; }
    }
    private double _contact_max_correcting_vel = default(double);
    [global::ProtoBuf.ProtoMember(9, IsRequired = false, Name=@"contact_max_correcting_vel", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double contact_max_correcting_vel
    {
      get { return _contact_max_correcting_vel; }
      set { _contact_max_correcting_vel = value; }
    }
    private double _contact_surface_layer = default(double);
    [global::ProtoBuf.ProtoMember(10, IsRequired = false, Name=@"contact_surface_layer", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double contact_surface_layer
    {
      get { return _contact_surface_layer; }
      set { _contact_surface_layer = value; }
    }
    private Indriya.Core.Msgs.Vector3d _gravity = null;
    [global::ProtoBuf.ProtoMember(11, IsRequired = false, Name=@"gravity", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public Indriya.Core.Msgs.Vector3d gravity
    {
      get { return _gravity; }
      set { _gravity = value; }
    }
    private bool _enable_physics = default(bool);
    [global::ProtoBuf.ProtoMember(12, IsRequired = false, Name=@"enable_physics", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(default(bool))]
    public bool enable_physics
    {
      get { return _enable_physics; }
      set { _enable_physics = value; }
    }
    private double _real_time_factor = default(double);
    [global::ProtoBuf.ProtoMember(13, IsRequired = false, Name=@"real_time_factor", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double real_time_factor
    {
      get { return _real_time_factor; }
      set { _real_time_factor = value; }
    }
    private double _real_time_update_rate = default(double);
    [global::ProtoBuf.ProtoMember(14, IsRequired = false, Name=@"real_time_update_rate", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double real_time_update_rate
    {
      get { return _real_time_update_rate; }
      set { _real_time_update_rate = value; }
    }
    private double _max_step_size = default(double);
    [global::ProtoBuf.ProtoMember(15, IsRequired = false, Name=@"max_step_size", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double max_step_size
    {
      get { return _max_step_size; }
      set { _max_step_size = value; }
    }
    [global::ProtoBuf.ProtoContract(Name=@"Type")]
    public enum Type
    {
            
      [global::ProtoBuf.ProtoEnum(Name=@"ODE", Value=1)]
      ODE = 1,
            
      [global::ProtoBuf.ProtoEnum(Name=@"BULLET", Value=2)]
      BULLET = 2,
            
      [global::ProtoBuf.ProtoEnum(Name=@"SIMBODY", Value=3)]
      SIMBODY = 3,
            
      [global::ProtoBuf.ProtoEnum(Name=@"DART", Value=4)]
      DART = 4
    }
  
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}