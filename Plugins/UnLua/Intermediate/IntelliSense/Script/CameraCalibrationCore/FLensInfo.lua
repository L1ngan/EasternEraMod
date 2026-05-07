---Information about the lens rig
---@class FLensInfo
---@field public LensModelName string @Model name of the lens
---@field public LensSerialNumber string @Serial number of the lens
---@field public LensModel TSubclassOf<ULensModel> @Model of the lens (spherical, anamorphic, etc...)
---@field public SensorDimensions FVector2D @Width and height of the calibrated camera's sensor, in millimeters
---@field public ImageDimensions FIntPoint @Resolution of the original footage that was captured by the camera (not necessarily the resolution of the media source). For example, the original footage might have been 4320x1746, but to transmit that image over SDI, it might have been scaled and fit into a 4096x2160 frame. In this case, the "Image Resolution" should be set to 4320x1746, while the "Media Resolution" will read 4096x2160.
---@field public SqueezeFactor number @Squeeze Factor (or Pixel Aspect) for anamorphic lenses. Spherical Lenses should keep this default to 1.0f
local FLensInfo = {}
