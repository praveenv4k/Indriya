//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: proto/tactile.proto
// Note: requires additional types generated from: time.proto
namespace experimot.msgs
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"Tactile")]
  public partial class Tactile : global::ProtoBuf.IExtensible
  {
    public Tactile() {}
    
    private readonly global::System.Collections.Generic.List<string> _collision_name = new global::System.Collections.Generic.List<string>();
    [global::ProtoBuf.ProtoMember(1, Name=@"collision_name", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<string> collision_name
    {
      get { return _collision_name; }
    }
  
    private readonly global::System.Collections.Generic.List<uint> _collision_id = new global::System.Collections.Generic.List<uint>();
    [global::ProtoBuf.ProtoMember(2, Name=@"collision_id", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public global::System.Collections.Generic.List<uint> collision_id
    {
      get { return _collision_id; }
    }
  
    private readonly global::System.Collections.Generic.List<double> _pressure = new global::System.Collections.Generic.List<double>();
    [global::ProtoBuf.ProtoMember(3, Name=@"pressure", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public global::System.Collections.Generic.List<double> pressure
    {
      get { return _pressure; }
    }
  
    private experimot.msgs.Time _time;
    [global::ProtoBuf.ProtoMember(4, IsRequired = true, Name=@"time", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public experimot.msgs.Time time
    {
      get { return _time; }
      set { _time = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}