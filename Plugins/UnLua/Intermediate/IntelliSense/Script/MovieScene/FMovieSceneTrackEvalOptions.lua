---Generic evaluation options for any track
---@class FMovieSceneTrackEvalOptions
---@field public bCanEvaluateNearestSection boolean @true when the value of bEvalNearestSection is to be considered for the track
---@field public bEvalNearestSection boolean @When evaluating empty space on a track, will evaluate the last position of the previous section (if possible), or the first position of the next section, in that order of preference.
---@field public bEvaluateInPreroll boolean @Evaluate this track as part of its parent sub-section's pre-roll, if applicable
---@field public bEvaluateInPostroll boolean @Evaluate this track as part of its parent sub-section's post-roll, if applicable
local FMovieSceneTrackEvalOptions = {}
