//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: proto/sim_event.proto
// Note: requires additional types generated from: world_stats.proto
namespace Indriya.Core.Msgs
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"SimEvent")]
  public partial class SimEvent : global::ProtoBuf.IExtensible
  {
    public SimEvent() {}
    
    private string _type;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"type", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string type
    {
      get { return _type; }
      set { _type = value; }
    }
    private string _name;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"name", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string name
    {
      get { return _name; }
      set { _name = value; }
    }
    private Indriya.Core.Msgs.WorldStatistics _world_statistics;
    [global::ProtoBuf.ProtoMember(3, IsRequired = true, Name=@"world_statistics", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public Indriya.Core.Msgs.WorldStatistics world_statistics
    {
      get { return _world_statistics; }
      set { _world_statistics = value; }
    }
    private string _data = "";
    [global::ProtoBuf.ProtoMember(4, IsRequired = false, Name=@"data", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string data
    {
      get { return _data; }
      set { _data = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}