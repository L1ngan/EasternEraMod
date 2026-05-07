---Formatting options for processing a calibrated map
---@class FCalibratedMapFormat
---@field public PixelOrigin ECalibratedMapPixelOrigin @Specifies where in the image the (0, 0) pixel is
---@field public UndistortionChannels ECalibratedMapChannels @Specifies which two channels contain the undistortion map (or None if there is no undistortion data)
---@field public DistortionChannels ECalibratedMapChannels @Specifies which two channels contain the distortion map (or None if there is no distortion data)
local FCalibratedMapFormat = {}
