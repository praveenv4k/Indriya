//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: proto/pose_animation.proto
// Note: requires additional types generated from: pose.proto
// Note: requires additional types generated from: time.proto
namespace Indriya.Core.Msgs
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"PoseAnimation")]
  public partial class PoseAnimation : global::ProtoBuf.IExtensible
  {
    public PoseAnimation() {}
    
    private string _model_name;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"model_name", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string model_name
    {
      get { return _model_name; }
      set { _model_name = value; }
    }
    private uint _model_id = default(uint);
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"model_id", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(uint))]
    public uint model_id
    {
      get { return _model_id; }
      set { _model_id = value; }
    }
    private readonly global::System.Collections.Generic.List<Indriya.Core.Msgs.Pose> _pose = new global::System.Collections.Generic.List<Indriya.Core.Msgs.Pose>();
    [global::ProtoBuf.ProtoMember(3, Name=@"pose", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<Indriya.Core.Msgs.Pose> pose
    {
      get { return _pose; }
    }
  
    private readonly global::System.Collections.Generic.List<Indriya.Core.Msgs.Time> _time = new global::System.Collections.Generic.List<Indriya.Core.Msgs.Time>();
    [global::ProtoBuf.ProtoMember(4, Name=@"time", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<Indriya.Core.Msgs.Time> time
    {
      get { return _time; }
    }
  
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}