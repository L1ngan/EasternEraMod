---Function library containing methods that should be hoisted onto FMovieSceneBindingProxies for scripting
---@class UMovieSceneBindingExtensions : UBlueprintFunctionLibrary
local UMovieSceneBindingExtensions = {}

---Set the spawnable id that the possessable binding should possess
---@param InBinding FMovieSceneBindingProxy
---@param SpawnableBindingID FMovieSceneObjectBindingID
function UMovieSceneBindingExtensions.SetSpawnableBindingID(InBinding, SpawnableBindingID) end

---Set the sorting order for this binding
---@param InBinding FMovieSceneBindingProxy
---@param SortingOrder integer
function UMovieSceneBindingExtensions.SetSortingOrder(InBinding, SortingOrder) end

---Set the parent to this binding
---@param InBinding FMovieSceneBindingProxy
---@param InParentBinding FMovieSceneBindingProxy
function UMovieSceneBindingExtensions.SetParent(InBinding, InParentBinding) end

---Set this binding's object non-display name
---@param InBinding FMovieSceneBindingProxy
---@param InName string
function UMovieSceneBindingExtensions.SetName(InBinding, InName) end

---Set this binding's name
---@param InBinding FMovieSceneBindingProxy
---@param InDisplayName string
function UMovieSceneBindingExtensions.SetDisplayName(InBinding, InDisplayName) end

---Remove the specified track from this binding
---@param InBinding FMovieSceneBindingProxy
---@param TrackToRemove UMovieSceneTrack
function UMovieSceneBindingExtensions.RemoveTrack(InBinding, TrackToRemove) end

---Remove the specified binding
---@param InBinding FMovieSceneBindingProxy
function UMovieSceneBindingExtensions.Remove(InBinding) end

---Returns true if the values are not equal (A != B)
---@param A FMovieSceneBindingProxy
---@param B FMovieSceneBindingProxy
---@return boolean
function UMovieSceneBindingExtensions.NotEqual_MovieSceneBindingProxy(A, B) end

---Move all the contents (tracks, child bindings) of the specified binding ID onto another
---@param SourceBindingId FMovieSceneBindingProxy
---@param DestinationBindingId FMovieSceneBindingProxy
function UMovieSceneBindingExtensions.MoveBindingContents(SourceBindingId, DestinationBindingId) end

---Check whether the specified binding is valid
---@param InBinding FMovieSceneBindingProxy
---@return boolean
function UMovieSceneBindingExtensions.IsValid(InBinding) end

---Get all the tracks stored within this binding
---@param InBinding FMovieSceneBindingProxy
---@return TArray_UMovieSceneTrack_
function UMovieSceneBindingExtensions.GetTracks(InBinding) end

---Get the sorting order for this binding
---@param InBinding FMovieSceneBindingProxy
---@return integer
function UMovieSceneBindingExtensions.GetSortingOrder(InBinding) end

---Get this binding's possessed object class
---@param InBinding FMovieSceneBindingProxy
---@return TSubclassOf_UObject_
function UMovieSceneBindingExtensions.GetPossessedObjectClass(InBinding) end

---Get the parent of this binding
---@param InBinding FMovieSceneBindingProxy
---@return FMovieSceneBindingProxy
function UMovieSceneBindingExtensions.GetParent(InBinding) end

---Get this binding's object template
---@param InBinding FMovieSceneBindingProxy
---@return UObject
function UMovieSceneBindingExtensions.GetObjectTemplate(InBinding) end

---Get this binding's object non-display name
---@param InBinding FMovieSceneBindingProxy
---@return string
function UMovieSceneBindingExtensions.GetName(InBinding) end

---Get this binding's ID
---@param InBinding FMovieSceneBindingProxy
---@return FGuid
function UMovieSceneBindingExtensions.GetId(InBinding) end

---Get this binding's name
---@param InBinding FMovieSceneBindingProxy
---@return string
function UMovieSceneBindingExtensions.GetDisplayName(InBinding) end

---Get all the children of this binding
---@param InBinding FMovieSceneBindingProxy
---@return TArray_FMovieSceneBindingProxy_
function UMovieSceneBindingExtensions.GetChildPossessables(InBinding) end

---Find all tracks within a given binding of the specified type
---@param InBinding FMovieSceneBindingProxy
---@param TrackType TSubclassOf_UMovieSceneTrack_
---@return TArray_UMovieSceneTrack_
function UMovieSceneBindingExtensions.FindTracksByType(InBinding, TrackType) end

---Find all tracks within a given binding of the specified type, not allowing sub-classed types
---@param InBinding FMovieSceneBindingProxy
---@param TrackType TSubclassOf_UMovieSceneTrack_
---@return TArray_UMovieSceneTrack_
function UMovieSceneBindingExtensions.FindTracksByExactType(InBinding, TrackType) end

---Returns true if the values are equal (A == B)
---@param A FMovieSceneBindingProxy
---@param B FMovieSceneBindingProxy
---@return boolean
function UMovieSceneBindingExtensions.EqualEqual_MovieSceneBindingProxy(A, B) end

---Add a new track to the specified binding
---@param InBinding FMovieSceneBindingProxy
---@param TrackType TSubclassOf_UMovieSceneTrack_
---@return UMovieSceneTrack
function UMovieSceneBindingExtensions.AddTrack(InBinding, TrackType) end

