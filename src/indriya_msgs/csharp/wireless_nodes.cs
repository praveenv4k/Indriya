//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: proto/wireless_nodes.proto
// Note: requires additional types generated from: wireless_node.proto
namespace Indriya.Core.Msgs
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"WirelessNodes")]
  public partial class WirelessNodes : global::ProtoBuf.IExtensible
  {
    public WirelessNodes() {}
    
    private readonly global::System.Collections.Generic.List<Indriya.Core.Msgs.WirelessNode> _node = new global::System.Collections.Generic.List<Indriya.Core.Msgs.WirelessNode>();
    [global::ProtoBuf.ProtoMember(1, Name=@"node", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<Indriya.Core.Msgs.WirelessNode> node
    {
      get { return _node; }
    }
  
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}