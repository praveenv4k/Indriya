//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: proto/images_stamped.proto
// Note: requires additional types generated from: time.proto
// Note: requires additional types generated from: image.proto
namespace Indriya.Core.Msgs
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"ImagesStamped")]
  public partial class ImagesStamped : global::ProtoBuf.IExtensible
  {
    public ImagesStamped() {}
    
    private Indriya.Core.Msgs.Time _time;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"time", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public Indriya.Core.Msgs.Time time
    {
      get { return _time; }
      set { _time = value; }
    }
    private readonly global::System.Collections.Generic.List<Indriya.Core.Msgs.Image> _image = new global::System.Collections.Generic.List<Indriya.Core.Msgs.Image>();
    [global::ProtoBuf.ProtoMember(2, Name=@"image", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<Indriya.Core.Msgs.Image> image
    {
      get { return _image; }
    }
  
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}