---@class FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder
---@field public CurvatureAlignment number @This parameter controls alignment of the initial patches to creases in the mesh
---@field public SmoothingSteps integer @Number of smoothing steps to apply; this slightly increases distortion but produces more stable results.
---@field public SmoothingAlpha number @Smoothing parameter; larger values result in faster smoothing in each step.
local FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder = {}
