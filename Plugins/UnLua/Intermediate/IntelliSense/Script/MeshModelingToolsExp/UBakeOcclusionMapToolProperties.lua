---@class UBakeOcclusionMapToolProperties : UInteractiveToolPropertySet
---@field public OcclusionRays integer @Number of occlusion rays per sample
---@field public MaxDistance number @Maximum distance for occlusion rays to test for intersections; a value of 0 means infinity
---@field public SpreadAngle number @Maximum spread angle in degrees for occlusion rays; for example, 180 degrees will cover the entire hemisphere whereas 90 degrees will only cover the center of the hemisphere down to 45 degrees from the horizon.
---@field public BiasAngle number @Angle in degrees from the horizon for occlusion rays for which the contribution is attenuated to reduce faceting artifacts.
---@field public NormalSpace EBakeNormalSpace @Normal space for Bent Normal bakes.
local UBakeOcclusionMapToolProperties = {}

