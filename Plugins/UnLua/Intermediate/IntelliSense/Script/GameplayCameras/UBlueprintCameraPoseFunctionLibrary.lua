---Utility Blueprint functions for camera poses.
---@class UBlueprintCameraPoseFunctionLibrary : UBlueprintFunctionLibrary
local UBlueprintCameraPoseFunctionLibrary = {}

---Creates a copy of the given camera pose with the given location and rotation.
---@param CameraPose FBlueprintCameraPose
---@param Transform FTransform
---@return FBlueprintCameraPose
function UBlueprintCameraPoseFunctionLibrary.SetTransform(CameraPose, Transform) end

---@param CameraPose FBlueprintCameraPose
---@param TargetDistance number
---@return FBlueprintCameraPose
function UBlueprintCameraPoseFunctionLibrary.SetTargetDistance(CameraPose, TargetDistance) end

---@param CameraPose FBlueprintCameraPose
---@param Rotation FRotator
---@return FBlueprintCameraPose
function UBlueprintCameraPoseFunctionLibrary.SetRotation(CameraPose, Rotation) end

---@param CameraPose FBlueprintCameraPose
---@param Location FVector
---@return FBlueprintCameraPose
function UBlueprintCameraPoseFunctionLibrary.SetLocation(CameraPose, Location) end

---@param CameraPose FBlueprintCameraPose
---@param FocalLength number
---@return FBlueprintCameraPose
function UBlueprintCameraPoseFunctionLibrary.SetFocalLength(CameraPose, FocalLength) end

---@param CameraPose FBlueprintCameraPose
---@param FieldOfView number
---@return FBlueprintCameraPose
function UBlueprintCameraPoseFunctionLibrary.SetFieldOfView(CameraPose, FieldOfView) end

---Creates a new camera pose given a cine-camera component.
---@param CameraComponent UCineCameraComponent
---@return FBlueprintCameraPose
function UBlueprintCameraPoseFunctionLibrary.MakeCameraPoseFromCineCameraComponent(CameraComponent) end

---Creates a new camera pose given a camera component.
---@param CameraComponent UCameraComponent
---@return FBlueprintCameraPose
function UBlueprintCameraPoseFunctionLibrary.MakeCameraPoseFromCameraComponent(CameraComponent) end

---Gets the transform matrix of the camera pose.
---@param CameraPose FBlueprintCameraPose
---@return FTransform
function UBlueprintCameraPoseFunctionLibrary.GetTransform(CameraPose) end

---@param CameraPose FBlueprintCameraPose
---@return number
function UBlueprintCameraPoseFunctionLibrary.GetTargetDistance(CameraPose) end

---Gets the target of the camera pose given a specific target distance.
---@param CameraPose FBlueprintCameraPose
---@param TargetDistance number
---@return FVector
function UBlueprintCameraPoseFunctionLibrary.GetTargetAtDistance(CameraPose, TargetDistance) end

---Gets the target of the camera pose.
---@param CameraPose FBlueprintCameraPose
---@return FVector
function UBlueprintCameraPoseFunctionLibrary.GetTarget(CameraPose) end

---Gets the effective aspect ratio of the camera pose, computed from the sensor size.
---@param CameraPose FBlueprintCameraPose
---@return number
function UBlueprintCameraPoseFunctionLibrary.GetSensorAspectRatio(CameraPose) end

---@param CameraPose FBlueprintCameraPose
---@return FRotator
function UBlueprintCameraPoseFunctionLibrary.GetRotation(CameraPose) end

---@param CameraPose FBlueprintCameraPose
---@return FVector
function UBlueprintCameraPoseFunctionLibrary.GetLocation(CameraPose) end

---@param CameraPose FBlueprintCameraPose
---@return number
function UBlueprintCameraPoseFunctionLibrary.GetFocalLength(CameraPose) end

---@param CameraPose FBlueprintCameraPose
---@return number
function UBlueprintCameraPoseFunctionLibrary.GetFieldOfView(CameraPose) end

---Gets the effective field of view of the camera pose, possibly computed from focal length.
---@param CameraPose FBlueprintCameraPose
---@return number
function UBlueprintCameraPoseFunctionLibrary.GetEffectiveFieldOfView(CameraPose) end

---Gets the aim ray of the camera pose.
---@param CameraPose FBlueprintCameraPose
---@return FRay
function UBlueprintCameraPoseFunctionLibrary.GetAimRay(CameraPose) end

---Gets the facing direction of the camera pose.
---@param CameraPose FBlueprintCameraPose
---@return FVector
function UBlueprintCameraPoseFunctionLibrary.GetAimDir(CameraPose) end

