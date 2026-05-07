---Distortion table containing list of points for each focus and zoom input
---@class FDistortionTable : FBaseLensTable
---@field public FocusPoints TArray<FDistortionFocusPoint> @Lists of focus points
---@field public FocusCurves TArray<FDistortionFocusCurve> @A list of curves along the focus axis for each zoom value
local FDistortionTable = {}
