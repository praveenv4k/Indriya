//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: proto/vector3d.proto
namespace Indriya.Core.Msgs
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"Vector3d")]
  public partial class Vector3d : global::ProtoBuf.IExtensible
  {
    public Vector3d() {}
    
    private double _x;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"x", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double x
    {
      get { return _x; }
      set { _x = value; }
    }
    private double _y;
    [global::ProtoBuf.ProtoMember(3, IsRequired = true, Name=@"y", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double y
    {
      get { return _y; }
      set { _y = value; }
    }
    private double _z;
    [global::ProtoBuf.ProtoMember(4, IsRequired = true, Name=@"z", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double z
    {
      get { return _z; }
      set { _z = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}