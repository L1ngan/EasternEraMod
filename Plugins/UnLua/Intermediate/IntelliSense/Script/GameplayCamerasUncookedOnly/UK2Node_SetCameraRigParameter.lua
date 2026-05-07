---Blueprint node that, given a camera rig, lets the user set the value of one single
---exposed parameter.
---@class UK2Node_SetCameraRigParameter : UK2Node_CameraRigBase
---@field private CameraParameterName string
---@field private CameraParameterType EK2Node_CameraParameterType
---@field private BlendableCameraParameterType ECameraVariableType
---@field private BlendableStructType UScriptStruct
---@field private DataCameraParameterType ECameraContextDataType
---@field private DataCameraParameterContainerType ECameraContextDataContainerType
---@field private DataCameraParameterTypeObject UObject
local UK2Node_SetCameraRigParameter = {}

