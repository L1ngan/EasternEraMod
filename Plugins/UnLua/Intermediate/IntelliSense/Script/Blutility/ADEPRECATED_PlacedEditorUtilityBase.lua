---@class ADEPRECATED_PlacedEditorUtilityBase : AActor
---@field public HelpText string
local ADEPRECATED_PlacedEditorUtilityBase = {}

---Sets information about the camera position for the primary level editor viewport.
---@param CameraLocation FVector
---@param CameraRotation FRotator
function ADEPRECATED_PlacedEditorUtilityBase:SetLevelViewportCameraInfo(CameraLocation, CameraRotation) end

---Set the selection state for the selected actor
---@param Actor AActor
---@param bShouldBeSelected boolean
function ADEPRECATED_PlacedEditorUtilityBase:SetActorSelectionState(Actor, bShouldBeSelected) end

---Selects nothing in the editor (another way to clear the selection)
function ADEPRECATED_PlacedEditorUtilityBase:SelectNothing() end

---Returns the current selection set in the editor.  Note that for non-editor builds, this will return an empty array
---@return TArray_AActor_
function ADEPRECATED_PlacedEditorUtilityBase:GetSelectionSet() end

---Gets information about the camera position for the primary level editor viewport.  In non-editor builds, these will be zeroed
---@param CameraLocation FVector @[out] 
---@param CameraRotation FRotator @[out] 
---@return boolean
function ADEPRECATED_PlacedEditorUtilityBase:GetLevelViewportCameraInfo(CameraLocation, CameraRotation) end

---Attempts to find the actor specified by PathToActor in the current editor world
---@param PathToActor string
---@return AActor
function ADEPRECATED_PlacedEditorUtilityBase:GetActorReference(PathToActor) end

---Remove all actors from the selection set
function ADEPRECATED_PlacedEditorUtilityBase:ClearActorSelectionSet() end

