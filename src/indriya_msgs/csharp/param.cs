//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: proto/param.proto
namespace Indriya.Core.Msgs
{
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
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"ParamList")]
  public partial class ParamList : global::ProtoBuf.IExtensible
  {
    public ParamList() {}
    
    private readonly global::System.Collections.Generic.List<Indriya.Core.Msgs.Param> _param = new global::System.Collections.Generic.List<Indriya.Core.Msgs.Param>();
    [global::ProtoBuf.ProtoMember(1, Name=@"param", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<Indriya.Core.Msgs.Param> param
    {
      get { return _param; }
    }
  
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}