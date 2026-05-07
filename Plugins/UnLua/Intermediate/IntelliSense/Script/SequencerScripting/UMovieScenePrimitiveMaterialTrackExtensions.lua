---Function library containing methods that should be hoisted onto UMovieScenePrimitiveMaterialTrack for scripting
---@class UMovieScenePrimitiveMaterialTrackExtensions : UBlueprintFunctionLibrary
local UMovieScenePrimitiveMaterialTrackExtensions = {}

---Set material info of the component that is animated by the material track.
---@param Track UMovieScenePrimitiveMaterialTrack
---@param MaterialInfo FComponentMaterialInfo
function UMovieScenePrimitiveMaterialTrackExtensions.SetMaterialInfo(Track, MaterialInfo) end

---@param Track UMovieScenePrimitiveMaterialTrack
---@param MaterialIndex integer
function UMovieScenePrimitiveMaterialTrackExtensions.SetMaterialIndex(Track, MaterialIndex) end

---Get material info of the component that is animated by the material track.
---@param Track UMovieScenePrimitiveMaterialTrack
---@return FComponentMaterialInfo
function UMovieScenePrimitiveMaterialTrackExtensions.GetMaterialInfo(Track) end

---@param Track UMovieScenePrimitiveMaterialTrack
---@return integer
function UMovieScenePrimitiveMaterialTrackExtensions.GetMaterialIndex(Track) end

