//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: proto/request.proto
namespace Indriya.Core.Msgs
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"Request")]
  public partial class Request : global::ProtoBuf.IExtensible
  {
    public Request() {}
    
    private int _id;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"id", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int id
    {
      get { return _id; }
      set { _id = value; }
    }
    private string _request;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"request", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string request
    {
      get { return _request; }
      set { _request = value; }
    }
    private string _data = "";
    [global::ProtoBuf.ProtoMember(3, IsRequired = false, Name=@"data", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string data
    {
      get { return _data; }
      set { _data = value; }
    }
    private double _dbl_data = default(double);
    [global::ProtoBuf.ProtoMember(4, IsRequired = false, Name=@"dbl_data", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(double))]
    public double dbl_data
    {
      get { return _dbl_data; }
      set { _dbl_data = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}