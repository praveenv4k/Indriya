//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: proto/laserscan.proto
// Note: requires additional types generated from: pose.proto
namespace Indriya.Core.Msgs
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"LaserScan")]
  public partial class LaserScan : global::ProtoBuf.IExtensible
  {
    public LaserScan() {}
    
    private string _frame;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"frame", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string frame
    {
      get { return _frame; }
      set { _frame = value; }
    }
    private Indriya.Core.Msgs.Pose _world_pose;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"world_pose", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public Indriya.Core.Msgs.Pose world_pose
    {
      get { return _world_pose; }
      set { _world_pose = value; }
    }
    private double _angle_min;
    [global::ProtoBuf.ProtoMember(3, IsRequired = true, Name=@"angle_min", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double angle_min
    {
      get { return _angle_min; }
      set { _angle_min = value; }
    }
    private double _angle_max;
    [global::ProtoBuf.ProtoMember(4, IsRequired = true, Name=@"angle_max", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double angle_max
    {
      get { return _angle_max; }
      set { _angle_max = value; }
    }
    private double _angle_step;
    [global::ProtoBuf.ProtoMember(5, IsRequired = true, Name=@"angle_step", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double angle_step
    {
      get { return _angle_step; }
      set { _angle_step = value; }
    }
    private double _range_min;
    [global::ProtoBuf.ProtoMember(6, IsRequired = true, Name=@"range_min", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double range_min
    {
      get { return _range_min; }
      set { _range_min = value; }
    }
    private double _range_max;
    [global::ProtoBuf.ProtoMember(7, IsRequired = true, Name=@"range_max", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double range_max
    {
      get { return _range_max; }
      set { _range_max = value; }
    }
    private uint _count;
    [global::ProtoBuf.ProtoMember(8, IsRequired = true, Name=@"count", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public uint count
    {
      get { return _count; }
      set { _count = value; }
    }
    private double _vertical_angle_min = default(double);
    [global::ProtoBuf.ProtoMember(9, IsRequired = false, Name=@"vertical_angle_min", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double vertical_angle_min
    {
      get { return _vertical_angle_min; }
      set { _vertical_angle_min = value; }
    }
    private double _vertical_angle_max = default(double);
    [global::ProtoBuf.ProtoMember(10, IsRequired = false, Name=@"vertical_angle_max", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double vertical_angle_max
    {
      get { return _vertical_angle_max; }
      set { _vertical_angle_max = value; }
    }
    private double _vertical_angle_step = default(double);
    [global::ProtoBuf.ProtoMember(11, IsRequired = false, Name=@"vertical_angle_step", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double vertical_angle_step
    {
      get { return _vertical_angle_step; }
      set { _vertical_angle_step = value; }
    }
    private uint _vertical_count = default(uint);
    [global::ProtoBuf.ProtoMember(12, IsRequired = false, Name=@"vertical_count", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(uint))]
    public uint vertical_count
    {
      get { return _vertical_count; }
      set { _vertical_count = value; }
    }
    private readonly global::System.Collections.Generic.List<double> _ranges = new global::System.Collections.Generic.List<double>();
    [global::ProtoBuf.ProtoMember(13, Name=@"ranges", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public global::System.Collections.Generic.List<double> ranges
    {
      get { return _ranges; }
    }
  
    private readonly global::System.Collections.Generic.List<double> _intensities = new global::System.Collections.Generic.List<double>();
    [global::ProtoBuf.ProtoMember(14, Name=@"intensities", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public global::System.Collections.Generic.List<double> intensities
    {
      get { return _intensities; }
    }
  
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}