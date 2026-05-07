---@class FMovieSceneBoolChannel : FMovieSceneChannel
---@field public PreInfinityExtrap integer @Pre-infinity extrapolation state, bool channel only supports constant, cycle and oscillate
---@field public PostInfinityExtrap integer @Post-infinity extrapolation state, bool channel only supports  constant, cycle and oscillate
---@field protected Times TArray<FFrameNumber>
---@field protected DefaultValue boolean
---@field protected bHasDefaultValue boolean
---@field protected Values TArray<boolean>
---@field protected KeyHandles FMovieSceneKeyHandleMap @This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets.
local FMovieSceneBoolChannel = {}
