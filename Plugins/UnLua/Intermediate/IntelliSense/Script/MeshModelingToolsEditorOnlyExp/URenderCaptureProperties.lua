---Tool Properties
---@class URenderCaptureProperties : UInteractiveToolPropertySet
---@field public Resolution EBakeTextureResolution
---@field public bBaseColorMap boolean @Whether to generate a texture for the Base Color property
---@field public bNormalMap boolean @Whether to generate a texture for the World Normal property
---@field public bPackedMRSMap boolean @Whether to generate a packed texture with Metallic, Roughness and Specular properties
---@field public bMetallicMap boolean @Whether to generate a texture for the Metallic property
---@field public bRoughnessMap boolean @Whether to generate a texture for the Roughness property
---@field public bSpecularMap boolean @Whether to generate a texture for the Specular property
---@field public bEmissiveMap boolean @Whether to generate a texture for the Emissive property
---@field public bOpacityMap boolean @Whether to generate a texture for the Opacity property
---@field public bSubsurfaceColorMap boolean @Whether to generate a texture for the SubsurfaceColor property
---@field public bAntiAliasing boolean @Whether to use anti-aliasing in the render captures, this may introduce artefacts if pixels at different scene depths get blended
---@field public bDeviceDepthMap boolean @Whether to generate a texture for the DeviceDepth.  This option is hidden from the user since its set only if the Bake operation requires a depth map to remove occlusion artefacts, which is determined by ValidSampleDepthThreshold
---@field public CaptureFieldOfView number @These are hidden in the UI right now, we might want to expose them if they turn out to be useful for very large or very small objects (not tested yet) TODO Figure out if we want to expose these options
---@field public NearPlaneDist number
local URenderCaptureProperties = {}

