---Contains list of focal length points associated to zoom value
---@class FFocalLengthFocusPoint : FBaseFocusPoint
---@field public Focus number @Input focus for this point
---@field public Fx FRichCurve @Curves mapping normalized Fx value to Zoom value (Time)
---@field public Fy FRichCurve @Curves mapping normalized Fy value to Zoom value (Time)
---@field public ZoomPoints TArray<FFocalLengthZoomPoint> @Used to know points that are locked
local FFocalLengthFocusPoint = {}
