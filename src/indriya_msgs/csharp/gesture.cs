//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: proto/gesture.proto
// Note: requires additional types generated from: param.proto
namespace Indriya.Core.Msgs
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"GestureDescription")]
  public partial class GestureDescription : global::ProtoBuf.IExtensible
  {
    public GestureDescription() {}
    
    private string _name;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"name", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string name
    {
      get { return _name; }
      set { _name = value; }
    }
    private Indriya.Core.Msgs.GestureDescription.GestureType _type;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"type", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public Indriya.Core.Msgs.GestureDescription.GestureType type
    {
      get { return _type; }
      set { _type = value; }
    }
    private bool _active = default(bool);
    [global::ProtoBuf.ProtoMember(3, IsRequired = false, Name=@"active", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(default(bool))]
    public bool active
    {
      get { return _active; }
      set { _active = value; }
    }
    private int _progress = default(int);
    [global::ProtoBuf.ProtoMember(4, IsRequired = false, Name=@"progress", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(int))]
    public int progress
    {
      get { return _progress; }
      set { _progress = value; }
    }
    private int _confidence = default(int);
    [global::ProtoBuf.ProtoMember(5, IsRequired = false, Name=@"confidence", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(int))]
    public int confidence
    {
      get { return _confidence; }
      set { _confidence = value; }
    }
    [global::ProtoBuf.ProtoContract(Name=@"GestureType")]
    public enum GestureType
    {
            
      [global::ProtoBuf.ProtoEnum(Name=@"None", Value=0)]
      None = 0,
            
      [global::ProtoBuf.ProtoEnum(Name=@"Discrete", Value=1)]
      Discrete = 1,
            
      [global::ProtoBuf.ProtoEnum(Name=@"Continuous", Value=2)]
      Continuous = 2
    }
  
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"GestureRecognitionModule")]
  public partial class GestureRecognitionModule : global::ProtoBuf.IExtensible
  {
    public GestureRecognitionModule() {}
    
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
  
    private readonly global::System.Collections.Generic.List<Indriya.Core.Msgs.GestureDescription> _motions = new global::System.Collections.Generic.List<Indriya.Core.Msgs.GestureDescription>();
    [global::ProtoBuf.ProtoMember(3, Name=@"motions", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<Indriya.Core.Msgs.GestureDescription> motions
    {
      get { return _motions; }
    }
  
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"GestureRecognitionModules")]
  public partial class GestureRecognitionModules : global::ProtoBuf.IExtensible
  {
    public GestureRecognitionModules() {}
    
    private readonly global::System.Collections.Generic.List<Indriya.Core.Msgs.GestureRecognitionModule> _modules = new global::System.Collections.Generic.List<Indriya.Core.Msgs.GestureRecognitionModule>();
    [global::ProtoBuf.ProtoMember(1, Name=@"modules", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<Indriya.Core.Msgs.GestureRecognitionModule> modules
    {
      get { return _modules; }
    }
  
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"GestureTrigger")]
  public partial class GestureTrigger : global::ProtoBuf.IExtensible
  {
    public GestureTrigger() {}
    
    private int _id;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"id", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int id
    {
      get { return _id; }
      set { _id = value; }
    }
    private Indriya.Core.Msgs.GestureDescription _motion;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"motion", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public Indriya.Core.Msgs.GestureDescription motion
    {
      get { return _motion; }
      set { _motion = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"GestureTriggers")]
  public partial class GestureTriggers : global::ProtoBuf.IExtensible
  {
    public GestureTriggers() {}
    
    private int _id;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"id", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int id
    {
      get { return _id; }
      set { _id = value; }
    }
    private readonly global::System.Collections.Generic.List<Indriya.Core.Msgs.GestureDescription> _motion = new global::System.Collections.Generic.List<Indriya.Core.Msgs.GestureDescription>();
    [global::ProtoBuf.ProtoMember(2, Name=@"motion", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<Indriya.Core.Msgs.GestureDescription> motion
    {
      get { return _motion; }
    }
  
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}