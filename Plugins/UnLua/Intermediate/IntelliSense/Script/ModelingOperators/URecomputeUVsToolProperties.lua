---@class URecomputeUVsToolProperties : UInteractiveToolPropertySet
---@field public bEnablePolygroupSupport boolean
---@field public IslandGeneration ERecomputeUVsPropertiesIslandMode @Generation method for initial UV islands.
---@field public UnwrapType ERecomputeUVsPropertiesUnwrapType @Type of UV flattening algorithm to use
---@field public AutoRotation ERecomputeUVsToolOrientationMode @Type of automatic rotation applied to each UV island
---@field public bPreserveIrregularity boolean @If enabled, reduces distortion for meshes with triangles of vastly different sizes, This is only enabled if the Unwrap Type is set to Spectral Conformal.
---@field public SmoothingSteps integer @Number of smoothing steps to apply; this slightly increases distortion but produces more stable results. This is only enabled if the Unwrap Type is set to ExpMap or Island Merging.
---@field public SmoothingAlpha number @Smoothing parameter; larger values result in faster smoothing in each step. This is only enabled if the Unwrap Type is set to ExpMap or Island Merging.
---@field public MergingDistortionThreshold number @Threshold for stretching and distortion below which island merging is allowed; larger values increase the allowable UV distortion. This is only enabled if the Unwrap Type is set to Island Merging.
---@field public MergingAngleThreshold number @Threshold for the average face normal deviation below  which island merging is allowed. This is only enabled if the Unwrap Type is set to Island Merging.
---@field public LayoutType ERecomputeUVsPropertiesLayoutType @Uniformly scale and translate UV islands collectively to pack them into the unit square, i.e. fit between 0 and 1 with no overlap.
---@field public TextureResolution integer @Expected resolution of the output textures; this controls spacing left between UV islands to avoid interpolation artifacts. This is only enabled when the Layout Type is set to Repack.
---@field public NormalizeScale number @Scaling factor used for UV island normalization/scaling. This is only enabled when the Layout Type is set to Normalize to Bounds or Normalize to World.
---@field public bEnableUDIMLayout boolean @Enable UDIM aware layout and keep islands within their originating UDIM tiles when laying out.
---@field public bUDIMCVAREnabled boolean
local URecomputeUVsToolProperties = {}

