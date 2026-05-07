---Struct that contains one entry for each vector interpolation performed by the timeline
---@class FTimelineVectorTrack
---@field public VectorCurve UCurveVector @Vector curve to be evaluated
---@field public InterpFunc Delegate @Function that the output from ValueCurve will be passed to
---@field public TrackName string @Name of track, usually set in Timeline Editor. Used by SetInterpVectorCurve function.
---@field public VectorPropertyName string @Name of property that we should update from this curve
local FTimelineVectorTrack = {}
