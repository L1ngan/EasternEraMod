---Tool Result
---@class UBakeRenderCaptureResults : UInteractiveToolPropertySet
---@field public BaseColorMap UTexture2D
---@field public NormalMap UTexture2D @World space normal map
---@field public PackedMRSMap UTexture2D @Packed Metallic/Roughness/Specular Map
---@field public MetallicMap UTexture2D
---@field public RoughnessMap UTexture2D
---@field public SpecularMap UTexture2D
---@field public EmissiveMap UTexture2D
---@field public OpacityMap UTexture2D
---@field public SubsurfaceColorMap UTexture2D
---@field public DeviceDepthMap UTexture2D @Device depth is currently unused
local UBakeRenderCaptureResults = {}

