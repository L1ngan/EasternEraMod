---Structure that defines a specific determinism fence
---@class FMovieSceneDeterminismFence
---@field public FrameNumber FFrameNumber @True if this sequence should include a fence on the lower bound of any sub sequence's that include it
---@field public bInclusive boolean @Default: false. When true, specifies that this fence should be evaluated exactly on the specified time. When false, all times up to, but not including FrameNumber will be evaluated. Exclusive should be used for a fence at the end of a subsection with an exclusive time to ensure that the     sub-section is entirely evaluated before evaluation returns. Inclusive should be used if an exact time must be evaluated (such as for testing purposes)
local FMovieSceneDeterminismFence = {}
