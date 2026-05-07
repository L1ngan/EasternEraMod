---A data point associating focus and zoom to lens parameters
---@class FSTMapFocusPoint : FBaseFocusPoint
---@field public Focus number @Input focus for this point
---@field public MapBlendingCurve FRichCurve @Curve used to blend displacement map together to give user more flexibility
---@field public ZoomPoints TArray<FSTMapZoomPoint> @Zoom points for this focus
local FSTMapFocusPoint = {}
