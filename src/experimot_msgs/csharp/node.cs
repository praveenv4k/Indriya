//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: proto/node.proto
// Note: requires additional types generated from: publish.proto
// Note: requires additional types generated from: subscribe.proto
namespace experimot.msgs
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"Node")]
  public partial class Node : global::ProtoBuf.IExtensible
  {
    public Node() {}
    
    private string _name;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"name", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string name
    {
      get { return _name; }
      set { _name = value; }
    }
    private readonly global::System.Collections.Generic.List<experimot.msgs.Node.Param> _param = new global::System.Collections.Generic.List<experimot.msgs.Node.Param>();
    [global::ProtoBuf.ProtoMember(2, Name=@"param", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<experimot.msgs.Node.Param> param
    {
      get { return _param; }
    }
  
    private readonly global::System.Collections.Generic.List<experimot.msgs.Publish> _publisher = new global::System.Collections.Generic.List<experimot.msgs.Publish>();
    [global::ProtoBuf.ProtoMember(3, Name=@"publisher", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<experimot.msgs.Publish> publisher
    {
      get { return _publisher; }
    }
  
    private readonly global::System.Collections.Generic.List<experimot.msgs.Subscribe> _subscriber = new global::System.Collections.Generic.List<experimot.msgs.Subscribe>();
    [global::ProtoBuf.ProtoMember(4, Name=@"subscriber", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<experimot.msgs.Subscribe> subscriber
    {
      get { return _subscriber; }
    }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"Param")]
  public partial class Param : global::ProtoBuf.IExtensible
  {
    public Param() {}
    
    private string _key;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"key", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string key
    {
      get { return _key; }
      set { _key = value; }
    }
    private string _value;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"value", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string value
    {
      get { return _value; }
      set { _value = value; }
    }
    private string _dataType;
    [global::ProtoBuf.ProtoMember(3, IsRequired = true, Name=@"dataType", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string dataType
    {
      get { return _dataType; }
      set { _dataType = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}