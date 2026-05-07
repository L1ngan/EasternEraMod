---Subclass URemeshMeshToolProperties just so we can set default values for some properties. Setting these values in the
---Setup function of UProjectToTargetTool turns out to be tricky to achieve with the property cache.
---@class UProjectToTargetToolProperties : URemeshMeshToolProperties
---@field public bWorldSpace boolean
---@field public bParallel boolean
---@field public FaceProjectionPassesPerRemeshIteration integer
---@field public SurfaceProjectionSpeed number
---@field public NormalAlignmentSpeed number
---@field public bSmoothInFillAreas boolean
---@field public FillAreaDistanceMultiplier number
---@field public FillAreaSmoothMultiplier number
local UProjectToTargetToolProperties = {}

