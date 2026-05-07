---Derived data computed from parameters or stmap
---@class FDerivedDistortionData
---@field public DistortionData FDistortionData @Precomputed data about distortion
---@field public UndistortionDisplacementMap UTextureRenderTarget2D @Computed displacement map based on undistortion data
---@field public DistortionDisplacementMap UTextureRenderTarget2D @Computed displacement map based on distortion data
local FDerivedDistortionData = {}
