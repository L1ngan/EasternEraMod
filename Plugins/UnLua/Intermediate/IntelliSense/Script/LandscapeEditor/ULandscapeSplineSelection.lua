---ULandscapeSplineSelection
---@class ULandscapeSplineSelection : UObject
---@field private SelectedSplineControlPoints TArray<ULandscapeSplineControlPoint>
---@field private SelectedSplineSegments TArray<ULandscapeSplineSegment>
---@field private LinearControlPoints TArray<ULandscapeSplineControlPoint> @Linear representation of the current spline based on the last selected point/segment
---@field private LinearSegments TArray<ULandscapeSplineSegment>
local ULandscapeSplineSelection = {}

