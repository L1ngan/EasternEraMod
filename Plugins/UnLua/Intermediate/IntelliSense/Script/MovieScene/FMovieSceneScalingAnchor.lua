---Structure that defines a single anchor with an optional duration
---Anchor durations do not get scaled by other anchors, but positions will be offset based on
---previous anchor stretching or movement
---@class FMovieSceneScalingAnchor
---@field public Position FFrameNumber @Pefines the position of this anchor in ticks
---@field public Duration integer @Defines the duration of this anchor in ticks
local FMovieSceneScalingAnchor = {}
