//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: proto/world_stats.proto
// Note: requires additional types generated from: time.proto
namespace Indriya.Core.Msgs
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"WorldStatistics")]
  public partial class WorldStatistics : global::ProtoBuf.IExtensible
  {
    public WorldStatistics() {}
    
    private Indriya.Core.Msgs.Time _sim_time;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"sim_time", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public Indriya.Core.Msgs.Time sim_time
    {
      get { return _sim_time; }
      set { _sim_time = value; }
    }
    private Indriya.Core.Msgs.Time _pause_time;
    [global::ProtoBuf.ProtoMember(3, IsRequired = true, Name=@"pause_time", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public Indriya.Core.Msgs.Time pause_time
    {
      get { return _pause_time; }
      set { _pause_time = value; }
    }
    private Indriya.Core.Msgs.Time _real_time;
    [global::ProtoBuf.ProtoMember(4, IsRequired = true, Name=@"real_time", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public Indriya.Core.Msgs.Time real_time
    {
      get { return _real_time; }
      set { _real_time = value; }
    }
    private bool _paused;
    [global::ProtoBuf.ProtoMember(5, IsRequired = true, Name=@"paused", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public bool paused
    {
      get { return _paused; }
      set { _paused = value; }
    }
    private ulong _iterations;
    [global::ProtoBuf.ProtoMember(6, IsRequired = true, Name=@"iterations", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public ulong iterations
    {
      get { return _iterations; }
      set { _iterations = value; }
    }
    private int _model_count = default(int);
    [global::ProtoBuf.ProtoMember(7, IsRequired = false, Name=@"model_count", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(int))]
    public int model_count
    {
      get { return _model_count; }
      set { _model_count = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}