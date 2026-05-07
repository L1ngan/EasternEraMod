---@class FGenerateStaticMeshLODProcess_PreprocessSettings
---@field public FilterGroupLayer string @Group layer to use for filtering out detail before processing
---@field public ThickenWeightMapName string @Weight map used during mesh thickening
---@field public ThickenAmount number @Amount to thicken the mesh prior to Solidifying. The thicken weight map values are multiplied by this value. Thickening is primarily intended to repair shape erosion that can occur when using the Solidify Mesh Generators.
---@field public bIsThickenAmountEnabled boolean @Transient property, not exposed to the user.
local FGenerateStaticMeshLODProcess_PreprocessSettings = {}
