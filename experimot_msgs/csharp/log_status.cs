//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: proto/log_status.proto
// Note: requires additional types generated from: time.proto
namespace experimot.msgs
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"LogStatus")]
  public partial class LogStatus : global::ProtoBuf.IExtensible
  {
    public LogStatus() {}
    
    private experimot.msgs.Time _sim_time = null;
    [global::ProtoBuf.ProtoMember(1, IsRequired = false, Name=@"sim_time", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public experimot.msgs.Time sim_time
    {
      get { return _sim_time; }
      set { _sim_time = value; }
    }
    private experimot.msgs.LogStatus.LogFile _log_file = null;
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"log_file", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public experimot.msgs.LogStatus.LogFile log_file
    {
      get { return _log_file; }
      set { _log_file = value; }
    }
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"LogFile")]
  public partial class LogFile : global::ProtoBuf.IExtensible
  {
    public LogFile() {}
    
    private string _uri = "";
    [global::ProtoBuf.ProtoMember(1, IsRequired = false, Name=@"uri", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string uri
    {
      get { return _uri; }
      set { _uri = value; }
    }
    private string _base_path = "";
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"base_path", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string base_path
    {
      get { return _base_path; }
      set { _base_path = value; }
    }
    private string _full_path = "";
    [global::ProtoBuf.ProtoMember(3, IsRequired = false, Name=@"full_path", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string full_path
    {
      get { return _full_path; }
      set { _full_path = value; }
    }
    private float _size = default(float);
    [global::ProtoBuf.ProtoMember(4, IsRequired = false, Name=@"size", DataFormat = global::ProtoBuf.DataFormat.FixedSize)]
    [global::System.ComponentModel.DefaultValue(default(float))]
    public float size
    {
      get { return _size; }
      set { _size = value; }
    }
    private experimot.msgs.LogStatus.LogFile.Units _size_units = experimot.msgs.LogStatus.LogFile.Units.BYTES;
    [global::ProtoBuf.ProtoMember(5, IsRequired = false, Name=@"size_units", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(experimot.msgs.LogStatus.LogFile.Units.BYTES)]
    public experimot.msgs.LogStatus.LogFile.Units size_units
    {
      get { return _size_units; }
      set { _size_units = value; }
    }
    [global::ProtoBuf.ProtoContract(Name=@"Units")]
    public enum Units
    {
            
      [global::ProtoBuf.ProtoEnum(Name=@"BYTES", Value=1)]
      BYTES = 1,
            
      [global::ProtoBuf.ProtoEnum(Name=@"K_BYTES", Value=2)]
      K_BYTES = 2,
            
      [global::ProtoBuf.ProtoEnum(Name=@"M_BYTES", Value=3)]
      M_BYTES = 3,
            
      [global::ProtoBuf.ProtoEnum(Name=@"G_BYTES", Value=4)]
      G_BYTES = 4
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