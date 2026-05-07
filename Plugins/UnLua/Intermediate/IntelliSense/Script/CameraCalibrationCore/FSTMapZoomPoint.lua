---STMap data associated to a zoom input value
---@class FSTMapZoomPoint
---@field public Zoom number @Input zoom value for this point
---@field public STMapInfo FSTMapInfo @Data for this zoom point
---@field public DerivedDistortionData FDerivedDistortionData @Derived distortion data associated with this point
---@field public bIsCalibrationPoint boolean @Whether this point was added in calibration along distortion
local FSTMapZoomPoint = {}
