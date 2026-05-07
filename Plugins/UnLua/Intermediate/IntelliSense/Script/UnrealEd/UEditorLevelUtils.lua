---@class UEditorLevelUtils : UObject
local UEditorLevelUtils = {}

---Sets a level's visibility in the editor. Less efficient than SetLevelsVisibility when changing the visibility of multiple levels simultaneously.
---@param Level ULevel
---@param bShouldBeVisible boolean
---@param bForceLayersVisible boolean
---@param ModifyMode ELevelVisibilityDirtyMode @[opt] 
function UEditorLevelUtils.SetLevelVisibility(Level, bShouldBeVisible, bForceLayersVisible, ModifyMode) end

---Sets a level's visibility in the editor. More efficient than SetLevelsVisibility when changing the visibility of multiple levels simultaneously.
---@param Levels TArray_ULevel_
---@param bShouldBeVisible TArray_boolean_
---@param bForceLayersVisible boolean
---@param ModifyMode ELevelVisibilityDirtyMode @[opt] 
function UEditorLevelUtils.SetLevelsVisibility(Levels, bShouldBeVisible, bForceLayersVisible, ModifyMode) end

---Moves the currently selected actors to the specified streaming level. The new actors will be selected
---@param DestLevel ULevelStreaming
---@param bWarnAboutReferences boolean @[opt] 
---@return integer
function UEditorLevelUtils.MoveSelectedActorsToLevel(DestLevel, bWarnAboutReferences) end

---Moves the specified list of actors to the specified streaming level. The new actors will be selected
---@param ActorsToMove TArray_AActor_
---@param DestStreamingLevel ULevelStreaming
---@param bWarnAboutReferences boolean @[opt] 
---@param bWarnAboutRenaming boolean @[opt] 
---@return integer
function UEditorLevelUtils.MoveActorsToLevel(ActorsToMove, DestStreamingLevel, bWarnAboutReferences, bWarnAboutRenaming) end

---Makes the specified streaming level the current level for editing.
---The current level is where actors are spawned to when calling SpawnActor
---@param InStreamingLevel ULevelStreaming
function UEditorLevelUtils.MakeLevelCurrent(InStreamingLevel) end

---Removes given level from the world. Note, this will only work for sub-levels in the main level.
---Levels are not saved when added to the world. They can be saved with the "Save Map" function
---@param InLevel ULevel
---@param bClearSelection boolean @[opt] 
---@param bResetTransactionBuffer boolean @[opt] 
---@return boolean
function UEditorLevelUtils.K2_RemoveLevelFromWorld(InLevel, bClearSelection, bResetTransactionBuffer) end

---Adds the named level package to the world at the given position.  Does nothing if the level already exists in the world.
---@param World UWorld
---@param LevelPackageName string
---@param LevelStreamingClass TSubclassOf_ULevelStreaming_
---@param LevelTransform FTransform
---@return ULevelStreaming
function UEditorLevelUtils.K2_AddLevelToWorldWithTransform(World, LevelPackageName, LevelStreamingClass, LevelTransform) end

---Adds the named level package to the world.  Does nothing if the level already exists in the world.
---Levels are not saved when added to the world. They can be saved with the "Save Map" function
---@param World UWorld
---@param LevelPackageName string
---@param LevelStreamingClass TSubclassOf_ULevelStreaming_
---@return ULevelStreaming
function UEditorLevelUtils.K2_AddLevelToWorld(World, LevelPackageName, LevelStreamingClass) end

---Returns all levels for a world.
---@param World UWorld
---@return TArray_ULevel_
function UEditorLevelUtils.GetLevels(World) end

---Creates a new streaming level in the current world
---@param LevelStreamingClass TSubclassOf_ULevelStreaming_
---@param NewLevelPath string
---@param bMoveSelectedActorsIntoNewLevel boolean @[opt] 
---@return ULevelStreaming
function UEditorLevelUtils.CreateNewStreamingLevel(LevelStreamingClass, NewLevelPath, bMoveSelectedActorsIntoNewLevel) end

