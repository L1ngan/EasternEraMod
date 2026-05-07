---@class UParameterizeMeshToolPatchBuilderProperties : UInteractiveToolPropertySet
---@field public InitialPatches integer @Number of initial patches the mesh will be split into before island merging.
---@field public CurvatureAlignment number @Alignment of the initial patches to creases in the mesh.
---@field public MergingDistortionThreshold number @Threshold for stretching and distortion below which island merging is allowed; larger values increase the allowable UV distortion.
---@field public MergingAngleThreshold number @Threshold for the average face normal deviation below which island merging is allowed.
---@field public SmoothingSteps integer @Number of smoothing steps to apply; this slightly increases distortion but produces more stable results.
---@field public SmoothingAlpha number @Smoothing parameter; larger values result in faster smoothing in each step.
---@field public bRepack boolean @Automatically pack result UVs into the unit square, i.e. fit between 0 and 1 with no overlap.
---@field public TextureResolution integer @Expected resolution of the output textures; this controls spacing left between UV islands to avoid interpolation artifacts. This is only enabled when Repack is enabled.
---@field public bUsePolygroups boolean @Generate new UVs based on polygroups from specified layer.
---@field public bLayoutUDIMPerPolygroup boolean @Layout resulting islands on UDIMs based on polygroups.
---@field public bPolygroupsEnabled boolean @Controls if polygroup options are available to the user.
---@field public bUDIMsEnabled boolean @Controls if UDIM options are available to the user.
local UParameterizeMeshToolPatchBuilderProperties = {}

