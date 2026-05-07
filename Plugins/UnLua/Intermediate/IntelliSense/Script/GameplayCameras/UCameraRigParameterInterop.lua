---Blueprint internal methods to set values on a camera rig's exposed parameters.
---These functions are internal because users are supposed to use the K2Node_SetCameraRigParameters node instead. That node then
---gets compiled into one or more of these internal functions.
---@class UCameraRigParameterInterop : UBlueprintFunctionLibrary
local UCameraRigParameterInterop = {}

---@param CameraData FBlueprintCameraEvaluationDataRef
---@param CameraRig UCameraRigAsset
---@param ParameterName string
---@param NewValue integer
function UCameraRigParameterInterop.SetCameraParameter(CameraData, CameraRig, ParameterName, NewValue) end

---@param CameraData FBlueprintCameraEvaluationDataRef
---@param CameraRig UCameraRigAsset
---@param ParameterName string
---@param ReturnValue integer @[out] 
function UCameraRigParameterInterop.GetCameraParameter(CameraData, CameraRig, ParameterName, ReturnValue) end

