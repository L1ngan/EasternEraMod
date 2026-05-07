---ULevelEditorSubsystem
---Subsystem for exposing Level Editor related functionality to scripts
---@class ULevelEditorSubsystem : UEditorSubsystem
---@field public OnPreSaveWorld MulticastDelegate @Expose PreSaveWorld to blueprints
---@field public OnPostSaveWorld MulticastDelegate @Expose PostSaveWorld to blueprints
---@field public OnEditorCameraMoved MulticastDelegate @Expose EditorCameraMoved to blueprints
---@field public OnMapChanged MulticastDelegate @Expose MapChanged to blueprints. Note: This executes too early for some editor scripting, consider using OnMapOpened if this doesn't work for you.
---@field public OnMapOpened MulticastDelegate @Expose MapOpened to blueprints
local ULevelEditorSubsystem = {}

---@param bExactCameraView boolean
---@param ViewportConfigKey string @[opt] 
function ULevelEditorSubsystem:SetExactCameraView(bExactCameraView, ViewportConfigKey) end

---Set the current level used by the world editor.
---If more than one level shares the same name, the first one encounter of that level name will be used.
---@param LevelName string
---@return boolean
function ULevelEditorSubsystem:SetCurrentLevelByName(LevelName) end

---@param bAllow boolean
---@param ViewportConfigKey string @[opt] 
function ULevelEditorSubsystem:SetAllowsCinematicControl(bAllow, ViewportConfigKey) end

---Saves the specified Level. Must already be saved at lease once to have a valid path.
---@return boolean
function ULevelEditorSubsystem:SaveCurrentLevel() end

---Saves all Level currently loaded by the World Editor.
---@return boolean
function ULevelEditorSubsystem:SaveAllDirtyLevels() end

---@param ActorToPilot AActor
---@param ViewportConfigKey string @[opt] 
function ULevelEditorSubsystem:PilotLevelActor(ActorToPilot, ViewportConfigKey) end

---Close the current Persistent Level (without saving it). Create a new Level base on another level and save it. Load the new created level.
---             ie. /Game/MyFolder/MyAsset
---             ie. /Game/MyFolder/MyAsset
---@param AssetPath string
---@param TemplateAssetPath string
---@return boolean
function ULevelEditorSubsystem:NewLevelFromTemplate(AssetPath, TemplateAssetPath) end

---Close the current Persistent Level (without saving it). Create a new blank Level and save it. Load the new created level.
---             ie. /Game/MyFolder/MyAsset
---@param AssetPath string
---@param bIsPartitionedWorld boolean @[opt] 
---@return boolean
function ULevelEditorSubsystem:NewLevel(AssetPath, bIsPartitionedWorld) end

---Close the current Persistent Level (without saving it). Loads the specified level.
---             ie. /Game/MyFolder/MyAsset
---@param AssetPath string
---@return boolean
function ULevelEditorSubsystem:LoadLevel(AssetPath) end

---@return boolean
function ULevelEditorSubsystem:IsInPlayInEditor() end

---@return TArray_string_
function ULevelEditorSubsystem:GetViewportConfigKeys() end

---Get the selection set for the current world, you can use this to track
---and create changes to the level editor's selection
---@return UTypedElementSelectionSet
function ULevelEditorSubsystem:GetSelectionSet() end

---@param ViewportConfigKey string @[opt] 
---@return AActor
function ULevelEditorSubsystem:GetPilotLevelActor(ViewportConfigKey) end

---@param ViewportConfigKey string @[opt] 
---@return boolean
function ULevelEditorSubsystem:GetExactCameraView(ViewportConfigKey) end

---Get the current level used by the world editor.
---@return ULevel
function ULevelEditorSubsystem:GetCurrentLevel() end

---@param ViewportConfigKey string @[opt] 
---@return boolean
function ULevelEditorSubsystem:GetAllowsCinematicControl(ViewportConfigKey) end

---@return string
function ULevelEditorSubsystem:GetActiveViewportConfigKey() end

---@param ViewportConfigKey string @[opt] 
function ULevelEditorSubsystem:EjectPilotLevelActor(ViewportConfigKey) end

---@param bInRealtime boolean
---@param ViewportConfigKey string @[opt] 
function ULevelEditorSubsystem:EditorSetViewportRealtime(bInRealtime, ViewportConfigKey) end

---@param bGameView boolean
---@param ViewportConfigKey string @[opt] 
function ULevelEditorSubsystem:EditorSetGameView(bGameView, ViewportConfigKey) end

function ULevelEditorSubsystem:EditorRequestEndPlay() end

function ULevelEditorSubsystem:EditorRequestBeginPlay() end

function ULevelEditorSubsystem:EditorPlaySimulate() end

function ULevelEditorSubsystem:EditorInvalidateViewports() end

---@param ViewportConfigKey string @[opt] 
---@return boolean
function ULevelEditorSubsystem:EditorGetGameView(ViewportConfigKey) end

---Build Light Maps and optionally the reflection captures.
---@param Quality integer @[opt] 
---@param bWithReflectionCaptures boolean @[opt] 
---@return boolean
function ULevelEditorSubsystem:BuildLightMaps(Quality, bWithReflectionCaptures) end

