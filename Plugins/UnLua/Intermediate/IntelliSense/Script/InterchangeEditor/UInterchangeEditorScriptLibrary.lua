---@class UInterchangeEditorScriptLibrary : UBlueprintFunctionLibrary
local UInterchangeEditorScriptLibrary = {}

---Performs Interchange Reset on an Interchange Scene Import Asset.
---Resets all the actors added to the level and assets imported.
---@param SceneImportAsset UInterchangeSceneImportAsset
function UInterchangeEditorScriptLibrary.ResetSceneImportAsset(SceneImportAsset) end

---Performs Interchange Reset on a Level Asset.
---@param World UWorld
function UInterchangeEditorScriptLibrary.ResetLevelAsset(World) end

---Performs Interchange Reset on Actors.
---Resets all qualifying actors. Does nothing to actors that cannot be reset.
---@param Actors TArray_AActor_
function UInterchangeEditorScriptLibrary.ResetActors(Actors) end

---Returns array of actors that are editable in the editor when the level instance is put in edit mode.
---NOTE: This will return a non-empty array if the LevelInstance is put in the edit mode.
---@param LevelInstance ALevelInstance
---@return TArray_AActor_
function UInterchangeEditorScriptLibrary.LevelInstanceGetEditableActors(LevelInstance) end

---Make Level Instance Actor editable.
---@param LevelInstance ALevelInstance
---@return boolean
function UInterchangeEditorScriptLibrary.LevelInstanceEnterEditMode(LevelInstance) end

---Apply/Discard the changes to Level Instance Actor.
---@param LevelInstance ALevelInstance
---@param bDiscardChanges boolean
---@return boolean
function UInterchangeEditorScriptLibrary.LevelInstanceCommit(LevelInstance, bDiscardChanges) end

---Checks if an world can be reset.
---@param World UWorld
---@return boolean
function UInterchangeEditorScriptLibrary.CanResetWorld(World) end

---Checks if an actor can be reset.
---@param Actor AActor
---@return boolean
function UInterchangeEditorScriptLibrary.CanResetActor(Actor) end

