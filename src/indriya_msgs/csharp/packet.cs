//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: proto/packet.proto
// Note: requires additional types generated from: time.proto
namespace Indriya.Core.Msgs
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"Packet")]
  public partial class Packet : global::ProtoBuf.IExtensible
  {
    public Packet() {}
    
    private Indriya.Core.Msgs.Time _stamp;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"stamp", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public Indriya.Core.Msgs.Time stamp
    {
      get { return _stamp; }
      set { _stamp = value; }
    }
    private string _type;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"type", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string type
    {
      get { return _type; }
      set { _type = value; }
    }
    private byte[] _serialized_data;
    [global::ProtoBuf.ProtoMember(3, IsRequired = true, Name=@"serialized_data", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public byte[] serialized_data
    {
      get { return _serialized_data; }
      set { _serialized_data = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}