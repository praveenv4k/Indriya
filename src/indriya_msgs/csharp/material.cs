//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: proto/material.proto
// Note: requires additional types generated from: color.proto
namespace Indriya.Core.Msgs
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"Material")]
  public partial class Material : global::ProtoBuf.IExtensible
  {
    public Material() {}
    
    private Indriya.Core.Msgs.Material.Script _script = null;
    [global::ProtoBuf.ProtoMember(1, IsRequired = false, Name=@"script", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public Indriya.Core.Msgs.Material.Script script
    {
      get { return _script; }
      set { _script = value; }
    }
    private Indriya.Core.Msgs.Material.ShaderType _shader_type = Indriya.Core.Msgs.Material.ShaderType.VERTEX;
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"shader_type", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(Indriya.Core.Msgs.Material.ShaderType.VERTEX)]
    public Indriya.Core.Msgs.Material.ShaderType shader_type
    {
      get { return _shader_type; }
      set { _shader_type = value; }
    }
    private string _normal_map = "";
    [global::ProtoBuf.ProtoMember(3, IsRequired = false, Name=@"normal_map", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string normal_map
    {
      get { return _normal_map; }
      set { _normal_map = value; }
    }
    private Indriya.Core.Msgs.Color _ambient = null;
    [global::ProtoBuf.ProtoMember(4, IsRequired = false, Name=@"ambient", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public Indriya.Core.Msgs.Color ambient
    {
      get { return _ambient; }
      set { _ambient = value; }
    }
    private Indriya.Core.Msgs.Color _diffuse = null;
    [global::ProtoBuf.ProtoMember(5, IsRequired = false, Name=@"diffuse", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public Indriya.Core.Msgs.Color diffuse
    {
      get { return _diffuse; }
      set { _diffuse = value; }
    }
    private Indriya.Core.Msgs.Color _specular = null;
    [global::ProtoBuf.ProtoMember(6, IsRequired = false, Name=@"specular", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public Indriya.Core.Msgs.Color specular
    {
      get { return _specular; }
      set { _specular = value; }
    }
    private Indriya.Core.Msgs.Color _emissive = null;
    [global::ProtoBuf.ProtoMember(7, IsRequired = false, Name=@"emissive", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public Indriya.Core.Msgs.Color emissive
    {
      get { return _emissive; }
      set { _emissive = value; }
    }
    private bool _lighting = default(bool);
    [global::ProtoBuf.ProtoMember(8, IsRequired = false, Name=@"lighting", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(default(bool))]
    public bool lighting
    {
      get { return _lighting; }
      set { _lighting = value; }
    }
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"Script")]
  public partial class Script : global::ProtoBuf.IExtensible
  {
    public Script() {}
    
    private readonly global::System.Collections.Generic.List<string> _uri = new global::System.Collections.Generic.List<string>();
    [global::ProtoBuf.ProtoMember(1, Name=@"uri", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<string> uri
    {
      get { return _uri; }
    }
  
    private string _name;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"name", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string name
    {
      get { return _name; }
      set { _name = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
    [global::ProtoBuf.ProtoContract(Name=@"ShaderType")]
    public enum ShaderType
    {
            
      [global::ProtoBuf.ProtoEnum(Name=@"VERTEX", Value=1)]
      VERTEX = 1,
            
      [global::ProtoBuf.ProtoEnum(Name=@"PIXEL", Value=2)]
      PIXEL = 2,
            
      [global::ProtoBuf.ProtoEnum(Name=@"NORMAL_MAP_OBJECT_SPACE", Value=3)]
      NORMAL_MAP_OBJECT_SPACE = 3,
            
      [global::ProtoBuf.ProtoEnum(Name=@"NORMAL_MAP_TANGENT_SPACE", Value=4)]
      NORMAL_MAP_TANGENT_SPACE = 4
    }
  
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}