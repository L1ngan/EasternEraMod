---Focal length associated to a zoom value
---@class FFocalLengthZoomPoint
---@field public Zoom number @Input zoom value for this point
---@field public FocalLengthInfo FFocalLengthInfo @Value expected to be normalized (unitless)
---@field public bIsCalibrationPoint boolean @Whether this focal length was added along calibrated distortion parameters
local FFocalLengthZoomPoint = {}
