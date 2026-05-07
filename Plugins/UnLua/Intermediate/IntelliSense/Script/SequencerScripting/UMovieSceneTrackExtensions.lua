---Function library containing methods that should be hoisted onto UMovieSceneTracks for scripting
---@class UMovieSceneTrackExtensions : UBlueprintFunctionLibrary
local UMovieSceneTrackExtensions = {}

---Set this track row's display name
---@param Track UMovieSceneTrack
---@param InName string
---@param RowIndex integer
function UMovieSceneTrackExtensions.SetTrackRowDisplayName(Track, InName, RowIndex) end

---Set the sorting order for this track
---@param Track UMovieSceneTrack
---@param SortingOrder integer
function UMovieSceneTrackExtensions.SetSortingOrder(Track, SortingOrder) end

---Set the section to key for this track. When properties for this section are modified externally,
---this section will receive those modifications and act accordingly (add/update keys). This is
---especially useful when there are multiple overlapping sections.
---@param Track UMovieSceneTrack
---@param Section UMovieSceneSection
function UMovieSceneTrackExtensions.SetSectionToKey(Track, Section) end

---Set this track's display name
---@param Track UMovieSceneTrack
---@param InName string
function UMovieSceneTrackExtensions.SetDisplayName(Track, InName) end

---Set the color tint for this track
---@param Track UMovieSceneTrack
---@param ColorTint FColor
function UMovieSceneTrackExtensions.SetColorTint(Track, ColorTint) end

---Remove the specified section
---@param Track UMovieSceneTrack
---@param Section UMovieSceneSection
function UMovieSceneTrackExtensions.RemoveSection(Track, Section) end

---Get this track row's display name
---@param Track UMovieSceneTrack
---@param RowIndex integer
---@return string
function UMovieSceneTrackExtensions.GetTrackRowDisplayName(Track, RowIndex) end

---Get the sorting order for this track
---@param Track UMovieSceneTrack
---@return integer
function UMovieSceneTrackExtensions.GetSortingOrder(Track) end

---Get the section to key for this track
---@param Track UMovieSceneTrack
---@return UMovieSceneSection
function UMovieSceneTrackExtensions.GetSectionToKey(Track) end

---Access all this track's sections
---@param Track UMovieSceneTrack
---@return TArray_UMovieSceneSection_
function UMovieSceneTrackExtensions.GetSections(Track) end

---Get this track's display name
---@param Track UMovieSceneTrack
---@return string
function UMovieSceneTrackExtensions.GetDisplayName(Track) end

---Get the color tint for this track
---@param Track UMovieSceneTrack
---@return FColor
function UMovieSceneTrackExtensions.GetColorTint(Track) end

---Add a new section to this track
---@param Track UMovieSceneTrack
---@return UMovieSceneSection
function UMovieSceneTrackExtensions.AddSection(Track) end

