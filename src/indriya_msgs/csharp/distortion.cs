//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: proto/distortion.proto
// Note: requires additional types generated from: vector2d.proto
namespace Indriya.Core.Msgs
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"Distortion")]
  public partial class Distortion : global::ProtoBuf.IExtensible
  {
    public Distortion() {}
    
    private Indriya.Core.Msgs.Vector2d _center = null;
    [global::ProtoBuf.ProtoMember(1, IsRequired = false, Name=@"center", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public Indriya.Core.Msgs.Vector2d center
    {
      get { return _center; }
      set { _center = value; }
    }
    private double _k1 = default(double);
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"k1", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double k1
    {
      get { return _k1; }
      set { _k1 = value; }
    }
    private double _k2 = default(double);
    [global::ProtoBuf.ProtoMember(3, IsRequired = false, Name=@"k2", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double k2
    {
      get { return _k2; }
      set { _k2 = value; }
    }
    private double _k3 = default(double);
    [global::ProtoBuf.ProtoMember(4, IsRequired = false, Name=@"k3", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double k3
    {
      get { return _k3; }
      set { _k3 = value; }
    }
    private double _p1 = default(double);
    [global::ProtoBuf.ProtoMember(5, IsRequired = false, Name=@"p1", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double p1
    {
      get { return _p1; }
      set { _p1 = value; }
    }
    private double _p2 = default(double);
    [global::ProtoBuf.ProtoMember(6, IsRequired = false, Name=@"p2", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double p2
    {
      get { return _p2; }
      set { _p2 = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}