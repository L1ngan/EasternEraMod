---UUnrealEditorSubsystem
---Subsystem for exposing editor functionality to scripts
---@class UUnrealEditorSubsystem : UEditorSubsystem
local UUnrealEditorSubsystem = {}

---Sets information about the camera position for the primary level editor viewport.
---In the UnrealEd module instead of Level Editor as it uses FLevelEditorViewportClient which is in this module
---@param CameraLocation FVector
---@param CameraRotation FRotator
function UUnrealEditorSubsystem:SetLevelViewportCameraInfo(CameraLocation, CameraRotation) end

---Gets information about the camera position for the primary level editor viewport.  In non-editor builds, these will be zeroed
---In the UnrealEd module instead of Level Editor as it uses FLevelEditorViewportClient which is in this module
---@param CameraLocation FVector @[out] 
---@param CameraRotation FRotator @[out] 
---@return boolean
function UUnrealEditorSubsystem:GetLevelViewportCameraInfo(CameraLocation, CameraRotation) end

---@return UWorld
function UUnrealEditorSubsystem:GetGameWorld() end

---Find the World in the world editor. It can then be used as WorldContext by other libraries like GameplayStatics.
---@return UWorld
function UUnrealEditorSubsystem:GetEditorWorld() end

