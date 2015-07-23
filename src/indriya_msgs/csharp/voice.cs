//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: proto/voice.proto
// Note: requires additional types generated from: param.proto
namespace Indriya.Core.Msgs
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"VoiceCommandDescription")]
  public partial class VoiceCommandDescription : global::ProtoBuf.IExtensible
  {
    public VoiceCommandDescription() {}
    
    private string _command;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"command", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string command
    {
      get { return _command; }
      set { _command = value; }
    }
    private bool _active = default(bool);
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"active", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(default(bool))]
    public bool active
    {
      get { return _active; }
      set { _active = value; }
    }
    private int _confidence = default(int);
    [global::ProtoBuf.ProtoMember(3, IsRequired = false, Name=@"confidence", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(int))]
    public int confidence
    {
      get { return _confidence; }
      set { _confidence = value; }
    }
    private string _language = "";
    [global::ProtoBuf.ProtoMember(4, IsRequired = false, Name=@"language", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string language
    {
      get { return _language; }
      set { _language = value; }
    }
    private string _triggeredAt = "";
    [global::ProtoBuf.ProtoMember(5, IsRequired = false, Name=@"triggeredAt", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string triggeredAt
    {
      get { return _triggeredAt; }
      set { _triggeredAt = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"VoiceRecognitionModule")]
  public partial class VoiceRecognitionModule : global::ProtoBuf.IExtensible
  {
    public VoiceRecognitionModule() {}
    
    private string _name;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"name", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string name
    {
      get { return _name; }
      set { _name = value; }
    }
    private readonly global::System.Collections.Generic.List<Indriya.Core.Msgs.Param> _params = new global::System.Collections.Generic.List<Indriya.Core.Msgs.Param>();
    [global::ProtoBuf.ProtoMember(2, Name=@"params", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<Indriya.Core.Msgs.Param> @params
    {
      get { return _params; }
    }
  
    private readonly global::System.Collections.Generic.List<Indriya.Core.Msgs.VoiceCommandDescription> _commands = new global::System.Collections.Generic.List<Indriya.Core.Msgs.VoiceCommandDescription>();
    [global::ProtoBuf.ProtoMember(3, Name=@"commands", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<Indriya.Core.Msgs.VoiceCommandDescription> commands
    {
      get { return _commands; }
    }
  
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"VoiceRecognitionModules")]
  public partial class VoiceRecognitionModules : global::ProtoBuf.IExtensible
  {
    public VoiceRecognitionModules() {}
    
    private readonly global::System.Collections.Generic.List<Indriya.Core.Msgs.VoiceRecognitionModule> _modules = new global::System.Collections.Generic.List<Indriya.Core.Msgs.VoiceRecognitionModule>();
    [global::ProtoBuf.ProtoMember(1, Name=@"modules", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<Indriya.Core.Msgs.VoiceRecognitionModule> modules
    {
      get { return _modules; }
    }
  
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}