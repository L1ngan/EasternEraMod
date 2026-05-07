---Function library containing methods that should be hoisted onto UMovieScenePropertyTrack for scripting
---@class UMovieScenePropertyTrackExtensions : UBlueprintFunctionLibrary
local UMovieScenePropertyTrackExtensions = {}

---Set this track's property name and path
---@param Track UMovieScenePropertyTrack
---@param InPropertyName string
---@param InPropertyPath string
function UMovieScenePropertyTrackExtensions.SetPropertyNameAndPath(Track, InPropertyName, InPropertyPath) end

---Set this object property track's property class
---@param Track UMovieSceneObjectPropertyTrack
---@param PropertyClass TSubclassOf_UObject_
function UMovieScenePropertyTrackExtensions.SetObjectPropertyClass(Track, PropertyClass) end

---Set this byte track's enum
---@param Track UMovieSceneByteTrack
---@param InEnum UEnum
function UMovieScenePropertyTrackExtensions.SetByteTrackEnum(Track, InEnum) end

---Get this track's unique name
---@param Track UMovieScenePropertyTrack
---@return string
function UMovieScenePropertyTrackExtensions.GetUniqueTrackName(Track) end

---Get this track's property path
---@param Track UMovieScenePropertyTrack
---@return string
function UMovieScenePropertyTrackExtensions.GetPropertyPath(Track) end

---Get this track's property name
---@param Track UMovieScenePropertyTrack
---@return string
function UMovieScenePropertyTrackExtensions.GetPropertyName(Track) end

---Get this object property track's property class
---@param Track UMovieSceneObjectPropertyTrack
---@return TSubclassOf_UObject_
function UMovieScenePropertyTrackExtensions.GetObjectPropertyClass(Track) end

---Get this byte track's enum
---@param Track UMovieSceneByteTrack
---@return UEnum
function UMovieScenePropertyTrackExtensions.GetByteTrackEnum(Track) end

