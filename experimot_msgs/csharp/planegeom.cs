//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: proto/planegeom.proto
// Note: requires additional types generated from: vector3d.proto
// Note: requires additional types generated from: vector2d.proto
namespace experimot.msgs
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"PlaneGeom")]
  public partial class PlaneGeom : global::ProtoBuf.IExtensible
  {
    public PlaneGeom() {}
    
    private experimot.msgs.Vector3d _normal;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"normal", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public experimot.msgs.Vector3d normal
    {
      get { return _normal; }
      set { _normal = value; }
    }
    private experimot.msgs.Vector2d _size;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"size", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public experimot.msgs.Vector2d size
    {
      get { return _size; }
      set { _size = value; }
    }
    private double _d = (double)0;
    [global::ProtoBuf.ProtoMember(3, IsRequired = false, Name=@"d", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue((double)0)]
    public double d
    {
      get { return _d; }
      set { _d = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}