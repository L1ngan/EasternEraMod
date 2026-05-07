---Struct that contains one entry for each linear color interpolation performed by the timeline
---@class FTimelineLinearColorTrack
---@field public LinearColorCurve UCurveLinearColor @Float curve to be evaluated
---@field public InterpFunc Delegate @Function that the output from ValueCurve will be passed to
---@field public TrackName string @Name of track, usually set in Timeline Editor. Used by SetInterpLinearColorCurve function.
---@field public LinearColorPropertyName string @Name of property that we should update from this curve
local FTimelineLinearColorTrack = {}
