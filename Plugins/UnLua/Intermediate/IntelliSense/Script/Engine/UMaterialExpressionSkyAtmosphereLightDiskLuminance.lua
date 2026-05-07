---@class UMaterialExpressionSkyAtmosphereLightDiskLuminance : UMaterialExpression
---@field public LightIndex integer @Index of the atmosphere light to sample.
---@field public DiskAngularDiameterOverride FExpressionInput @Override the angular diameter of the disk in degree. If not specified, the radius specified on the directional light will be used. This can be used to decouple the directional light visual disk size used for the specular disk reflection on surfaces. However, be aware that screen space reflections will still catch the visual disk.
local UMaterialExpressionSkyAtmosphereLightDiskLuminance = {}

