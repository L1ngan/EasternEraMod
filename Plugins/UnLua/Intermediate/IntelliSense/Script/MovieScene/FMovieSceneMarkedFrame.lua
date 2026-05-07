---@class FMovieSceneMarkedFrame
---@field public FrameNumber FFrameNumber
---@field public Label string
---@field public Comment string
---@field public CustomColor FLinearColor
---@field public bUseCustomColor boolean
---@field public bIsDeterminismFence boolean @When checked, treat this mark as a fence for evaluation purposes. Fences cannot be crossed in a single evaluation, and force the evaluation to be split into 2 separate parts.
---@field public bIsInclusiveTime boolean @Defines how this determinism fence determines the previous and next range: when true, the range will be dissected as (X, Y] -> (Y, Z], when false it will be (X, Y) -> [Y, Z].
local FMovieSceneMarkedFrame = {}
