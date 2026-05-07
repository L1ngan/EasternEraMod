---Function library containing methods that should be hoisted onto UMovieSceneFloatVectorTrack for scripting
---@class UMovieSceneFloatVectorTrackExtensions : UBlueprintFunctionLibrary
local UMovieSceneFloatVectorTrackExtensions = {}

---Set the number of channels used for this track
---@param Track UMovieSceneFloatVectorTrack
---@param InNumChannelsUsed integer
function UMovieSceneFloatVectorTrackExtensions.SetNumChannelsUsed(Track, InNumChannelsUsed) end

---Get the number of channels used for this track
---@param Track UMovieSceneFloatVectorTrack
---@return integer
function UMovieSceneFloatVectorTrackExtensions.GetNumChannelsUsed(Track) end

