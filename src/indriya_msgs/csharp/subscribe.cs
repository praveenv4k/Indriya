//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: proto/subscribe.proto
namespace Indriya.Core.Msgs
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"Subscribe")]
  public partial class Subscribe : global::ProtoBuf.IExtensible
  {
    public Subscribe() {}
    
    private string _topic;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"topic", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string topic
    {
      get { return _topic; }
      set { _topic = value; }
    }
    private string _host;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"host", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string host
    {
      get { return _host; }
      set { _host = value; }
    }
    private uint _port;
    [global::ProtoBuf.ProtoMember(3, IsRequired = true, Name=@"port", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public uint port
    {
      get { return _port; }
      set { _port = value; }
    }
    private string _msg_type;
    [global::ProtoBuf.ProtoMember(4, IsRequired = true, Name=@"msg_type", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string msg_type
    {
      get { return _msg_type; }
      set { _msg_type = value; }
    }
    private bool _latching = (bool)false;
    [global::ProtoBuf.ProtoMember(5, IsRequired = false, Name=@"latching", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue((bool)false)]
    public bool latching
    {
      get { return _latching; }
      set { _latching = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}