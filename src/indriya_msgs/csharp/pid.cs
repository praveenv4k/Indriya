//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: proto/pid.proto
namespace Indriya.Core.Msgs
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"PID")]
  public partial class PID : global::ProtoBuf.IExtensible
  {
    public PID() {}
    
    private double _target = (double)0;
    [global::ProtoBuf.ProtoMember(1, IsRequired = false, Name=@"target", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue((double)0)]
    public double target
    {
      get { return _target; }
      set { _target = value; }
    }
    private double _p_gain = (double)0;
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"p_gain", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue((double)0)]
    public double p_gain
    {
      get { return _p_gain; }
      set { _p_gain = value; }
    }
    private double _i_gain = (double)0;
    [global::ProtoBuf.ProtoMember(3, IsRequired = false, Name=@"i_gain", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue((double)0)]
    public double i_gain
    {
      get { return _i_gain; }
      set { _i_gain = value; }
    }
    private double _d_gain = (double)0;
    [global::ProtoBuf.ProtoMember(4, IsRequired = false, Name=@"d_gain", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue((double)0)]
    public double d_gain
    {
      get { return _d_gain; }
      set { _d_gain = value; }
    }
    private double _i_max = (double)0;
    [global::ProtoBuf.ProtoMember(5, IsRequired = false, Name=@"i_max", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue((double)0)]
    public double i_max
    {
      get { return _i_max; }
      set { _i_max = value; }
    }
    private double _i_min = (double)0;
    [global::ProtoBuf.ProtoMember(6, IsRequired = false, Name=@"i_min", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue((double)0)]
    public double i_min
    {
      get { return _i_min; }
      set { _i_min = value; }
    }
    private double _limit = (double)0;
    [global::ProtoBuf.ProtoMember(7, IsRequired = false, Name=@"limit", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue((double)0)]
    public double limit
    {
      get { return _limit; }
      set { _limit = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}