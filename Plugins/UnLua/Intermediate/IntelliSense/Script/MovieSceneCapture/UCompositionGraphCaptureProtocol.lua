---@class UCompositionGraphCaptureProtocol : UMovieSceneImageCaptureProtocolBase
---@field public IncludeRenderPasses FCompositionGraphCapturePasses @A list of render passes to include in the capture. Leave empty to export all available passes.
---@field public bCaptureFramesInHDR boolean @Whether to capture the frames as HDR textures (*.exr format)
---@field public HDRCompressionQuality integer @Compression Quality for HDR Frames (0 for no compression, 1 for default compression which can be slow)
---@field public CaptureGamut integer @The color gamut to use when storing HDR captured data. The gamut depends on whether the bCaptureFramesInHDR option is enabled.
---@field public PostProcessingMaterial FSoftObjectPath @Custom post processing material to use for rendering
---@field public bDisableScreenPercentage boolean @Whether to disable screen percentage
---@field private PostProcessingMaterialPtr UMaterialInterface
local UCompositionGraphCaptureProtocol = {}

