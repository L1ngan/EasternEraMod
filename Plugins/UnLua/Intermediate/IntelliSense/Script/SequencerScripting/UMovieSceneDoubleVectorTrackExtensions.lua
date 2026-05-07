---Function library containing methods that should be hoisted onto UMovieSceneDoubleVectorTrack for scripting
---@class UMovieSceneDoubleVectorTrackExtensions : UBlueprintFunctionLibrary
local UMovieSceneDoubleVectorTrackExtensions = {}

---Set the number of channels used for this track
---@param Track UMovieSceneDoubleVectorTrack
---@param InNumChannelsUsed integer
function UMovieSceneDoubleVectorTrackExtensions.SetNumChannelsUsed(Track, InNumChannelsUsed) end

---Get the number of channels used for this track
---@param Track UMovieSceneDoubleVectorTrack
---@return integer
function UMovieSceneDoubleVectorTrackExtensions.GetNumChannelsUsed(Track) end

