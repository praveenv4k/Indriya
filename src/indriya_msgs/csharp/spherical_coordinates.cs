//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: proto/spherical_coordinates.proto
namespace Indriya.Core.Msgs
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"SphericalCoordinates")]
  public partial class SphericalCoordinates : global::ProtoBuf.IExtensible
  {
    public SphericalCoordinates() {}
    
    private Indriya.Core.Msgs.SphericalCoordinates.SurfaceModel _surface_model;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"surface_model", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public Indriya.Core.Msgs.SphericalCoordinates.SurfaceModel surface_model
    {
      get { return _surface_model; }
      set { _surface_model = value; }
    }
    private double _latitude_deg;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"latitude_deg", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double latitude_deg
    {
      get { return _latitude_deg; }
      set { _latitude_deg = value; }
    }
    private double _longitude_deg;
    [global::ProtoBuf.ProtoMember(3, IsRequired = true, Name=@"longitude_deg", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double longitude_deg
    {
      get { return _longitude_deg; }
      set { _longitude_deg = value; }
    }
    private double _elevation;
    [global::ProtoBuf.ProtoMember(4, IsRequired = true, Name=@"elevation", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double elevation
    {
      get { return _elevation; }
      set { _elevation = value; }
    }
    private double _heading_deg;
    [global::ProtoBuf.ProtoMember(5, IsRequired = true, Name=@"heading_deg", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double heading_deg
    {
      get { return _heading_deg; }
      set { _heading_deg = value; }
    }
    [global::ProtoBuf.ProtoContract(Name=@"SurfaceModel")]
    public enum SurfaceModel
    {
            
      [global::ProtoBuf.ProtoEnum(Name=@"EARTH_WGS84", Value=1)]
      EARTH_WGS84 = 1
    }
  
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}