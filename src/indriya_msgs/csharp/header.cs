//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: proto/header.proto
// Note: requires additional types generated from: time.proto
namespace Indriya.Core.Msgs
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"Header")]
  public partial class Header : global::ProtoBuf.IExtensible
  {
    public Header() {}
    
    private string _str_id = "";
    [global::ProtoBuf.ProtoMember(1, IsRequired = false, Name=@"str_id", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string str_id
    {
      get { return _str_id; }
      set { _str_id = value; }
    }
    private Indriya.Core.Msgs.Time _stamp = null;
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"stamp", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public Indriya.Core.Msgs.Time stamp
    {
      get { return _stamp; }
      set { _stamp = value; }
    }
    private int _index = default(int);
    [global::ProtoBuf.ProtoMember(3, IsRequired = false, Name=@"index", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(int))]
    public int index
    {
      get { return _index; }
      set { _index = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}