//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: proto/propagation_particle.proto
namespace Indriya.Core.Msgs
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"PropagationParticle")]
  public partial class PropagationParticle : global::ProtoBuf.IExtensible
  {
    public PropagationParticle() {}
    
    private double _x;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"x", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double x
    {
      get { return _x; }
      set { _x = value; }
    }
    private double _y;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"y", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double y
    {
      get { return _y; }
      set { _y = value; }
    }
    private double _signal_level;
    [global::ProtoBuf.ProtoMember(3, IsRequired = true, Name=@"signal_level", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double signal_level
    {
      get { return _signal_level; }
      set { _signal_level = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}