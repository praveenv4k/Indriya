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
// Note: requires additional types generated from: param.proto
namespace Indriya.Core.Msgs
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
    private readonly global::System.Collections.Generic.List<Indriya.Core.Msgs.Param> _param = new global::System.Collections.Generic.List<Indriya.Core.Msgs.Param>();
    [global::ProtoBuf.ProtoMember(2, Name=@"param", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<Indriya.Core.Msgs.Param> param
    {
      get { return _param; }
    }
  
    private readonly global::System.Collections.Generic.List<Indriya.Core.Msgs.Publish> _publisher = new global::System.Collections.Generic.List<Indriya.Core.Msgs.Publish>();
    [global::ProtoBuf.ProtoMember(3, Name=@"publisher", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<Indriya.Core.Msgs.Publish> publisher
    {
      get { return _publisher; }
    }
  
    private readonly global::System.Collections.Generic.List<Indriya.Core.Msgs.Subscribe> _subscriber = new global::System.Collections.Generic.List<Indriya.Core.Msgs.Subscribe>();
    [global::ProtoBuf.ProtoMember(4, Name=@"subscriber", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<Indriya.Core.Msgs.Subscribe> subscriber
    {
      get { return _subscriber; }
    }
  
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}