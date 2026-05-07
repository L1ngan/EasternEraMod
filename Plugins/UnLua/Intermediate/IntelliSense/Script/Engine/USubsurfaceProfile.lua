---Subsurface Scattering profile asset, can be specified at the material. Only for "Subsurface Profile" materials, is use during Screenspace Subsurface Scattering
---Don't change at runtime. All properties in here are per material - texture like variations need to come from properties that are in the GBuffer.
---@class USubsurfaceProfile : UObject
---@field public Settings FSubsurfaceProfileStruct
---@field public Guid FGuid
local USubsurfaceProfile = {}

