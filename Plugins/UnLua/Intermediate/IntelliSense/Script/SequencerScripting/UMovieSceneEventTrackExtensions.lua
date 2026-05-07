---Function library containing methods that should be hoisted onto UMovieSceneEventTrack for scripting
---@class UMovieSceneEventTrackExtensions : UBlueprintFunctionLibrary
local UMovieSceneEventTrackExtensions = {}

---* Return the class of the bound object property
---*
---* @@param EventKey    The event key to get the bound object property from
---* @@return The class of the bound object property
---@param EventKey FMovieSceneEvent
---@return TSubclassOf_UObject_
function UMovieSceneEventTrackExtensions.GetBoundObjectPropertyClass(EventKey) end

---Create a new event trigger section for the given track
---@param InTrack UMovieSceneEventTrack
---@return UMovieSceneEventTriggerSection
function UMovieSceneEventTrackExtensions.AddEventTriggerSection(InTrack) end

---Create a new event repeater section for the given track
---@param InTrack UMovieSceneEventTrack
---@return UMovieSceneEventRepeaterSection
function UMovieSceneEventTrackExtensions.AddEventRepeaterSection(InTrack) end

