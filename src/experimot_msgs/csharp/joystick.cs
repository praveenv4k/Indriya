//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: proto/joystick.proto
// Note: requires additional types generated from: vector3d.proto
namespace experimot.msgs
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"Joystick")]
  public partial class Joystick : global::ProtoBuf.IExtensible
  {
    public Joystick() {}
    
    private experimot.msgs.Vector3d _translation = null;
    [global::ProtoBuf.ProtoMember(1, IsRequired = false, Name=@"translation", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public experimot.msgs.Vector3d translation
    {
      get { return _translation; }
      set { _translation = value; }
    }
    private experimot.msgs.Vector3d _rotation = null;
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"rotation", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public experimot.msgs.Vector3d rotation
    {
      get { return _rotation; }
      set { _rotation = value; }
    }
    private readonly global::System.Collections.Generic.List<int> _buttons = new global::System.Collections.Generic.List<int>();
    [global::ProtoBuf.ProtoMember(3, Name=@"buttons", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public global::System.Collections.Generic.List<int> buttons
    {
      get { return _buttons; }
    }
  
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}