---@class FMovieSceneIntegerChannel : FMovieSceneChannel
---@field public PreInfinityExtrap integer @Pre-infinity extrapolation state, integer channel supports them all but linear since that requires a tangent
---@field public PostInfinityExtrap integer @Post-infinity extrapolation state, integer channel supports them all but linear since that requires a tangent
---@field public bInterpolateLinearKeys boolean @Whether to evaluate linear keys as interpolated or not
---@field private Times TArray<FFrameNumber>
---@field private DefaultValue integer
---@field private bHasDefaultValue boolean
---@field private Values TArray<integer>
---@field private KeyHandles FMovieSceneKeyHandleMap @This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets.
local FMovieSceneIntegerChannel = {}
