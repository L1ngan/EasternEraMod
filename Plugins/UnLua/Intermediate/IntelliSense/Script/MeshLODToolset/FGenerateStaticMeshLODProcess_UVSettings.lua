---@class FGenerateStaticMeshLODProcess_UVSettings
---@field public UVMethod EGenerateStaticMeshLODProcess_AutoUVMethod
---@field public NumUVAtlasCharts integer @Maximum number of charts to create in UVAtlas
---@field public NumInitialPatches integer @Number of initial patches mesh will be split into before computing island merging
---@field public MergingThreshold number @Distortion/Stretching Threshold for island merging - larger values increase the allowable UV stretching
---@field public MaxAngleDeviation number @UV islands will not be merged if their average face normals deviate by larger than this amount
---@field public PatchBuilder FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder
local FGenerateStaticMeshLODProcess_UVSettings = {}
