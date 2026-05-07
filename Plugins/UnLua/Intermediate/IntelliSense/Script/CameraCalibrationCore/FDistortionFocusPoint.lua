---Contains list of distortion parameters points associated to zoom value
---@class FDistortionFocusPoint : FBaseFocusPoint
---@field public Focus number @Input focus value for this point
---@field public MapBlendingCurve FRichCurve @Curves describing desired blending between resulting displacement maps
---@field public ZoomPoints TArray<FDistortionZoomPoint> @List of zoom points
local FDistortionFocusPoint = {}
