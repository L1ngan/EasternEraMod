---Blueprint function library for camera evaluation data references.
---@class UBlueprintCameraEvaluationDataFunctionLibrary : UBlueprintFunctionLibrary
local UBlueprintCameraEvaluationDataFunctionLibrary = {}

---Sets the default values for all parameters in the given camera rig.
---@param CameraData FBlueprintCameraEvaluationDataRef
---@param CameraRig UCameraRigAsset
function UBlueprintCameraEvaluationDataFunctionLibrary.SetDefaultCameraRigParameters(CameraData, CameraRig) end

---Sets the camera pose.
---@param CameraData FBlueprintCameraEvaluationDataRef
---@param CameraPose FBlueprintCameraPose
function UBlueprintCameraEvaluationDataFunctionLibrary.SetCameraPose(CameraData, CameraPose) end

---Creates a camera evaluation data.
---@return FBlueprintCameraEvaluationDataRef
function UBlueprintCameraEvaluationDataFunctionLibrary.MakeCameraEvaluationData() end

---Gets the camera pose.
---@param CameraData FBlueprintCameraEvaluationDataRef
---@return FBlueprintCameraPose
function UBlueprintCameraEvaluationDataFunctionLibrary.GetCameraPose(CameraData) end

---Interpolates one camera data towards another.
---@param FromCameraData FBlueprintCameraEvaluationDataRef
---@param ToCameraData FBlueprintCameraEvaluationDataRef
---@param Factor number
function UBlueprintCameraEvaluationDataFunctionLibrary.BlendCameraEvaluationData(FromCameraData, ToCameraData, Factor) end

