---Function library containing methods that should be hoisted onto UMovieSceneMaterialTrack for scripting
---@class UMovieSceneMaterialTrackExtensions : UBlueprintFunctionLibrary
local UMovieSceneMaterialTrackExtensions = {}

---Set material info of the component that is animated by the material track.
---@param Track UMovieSceneComponentMaterialTrack
---@param MaterialInfo FComponentMaterialInfo
function UMovieSceneMaterialTrackExtensions.SetMaterialInfo(Track, MaterialInfo) end

---@param Track UMovieSceneComponentMaterialTrack
---@param MaterialIndex integer
function UMovieSceneMaterialTrackExtensions.SetMaterialIndex(Track, MaterialIndex) end

---Get material info of the component that is animated by the material track.
---@param Track UMovieSceneComponentMaterialTrack
---@return FComponentMaterialInfo
function UMovieSceneMaterialTrackExtensions.GetMaterialInfo(Track) end

---@param Track UMovieSceneComponentMaterialTrack
---@return integer
function UMovieSceneMaterialTrackExtensions.GetMaterialIndex(Track) end

