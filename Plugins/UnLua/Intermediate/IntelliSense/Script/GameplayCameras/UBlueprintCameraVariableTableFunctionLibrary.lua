---Blueprint function library for camera variable tables.
---@class UBlueprintCameraVariableTableFunctionLibrary : UBlueprintFunctionLibrary
local UBlueprintCameraVariableTableFunctionLibrary = {}

---Sets a camera variable's value in the given table.
---@param CameraData FBlueprintCameraEvaluationDataRef
---@param Variable UVector4dCameraVariable
---@param Value FVector4
function UBlueprintCameraVariableTableFunctionLibrary.SetVector4CameraVariable(CameraData, Variable, Value) end

---Sets a camera variable's value in the given table.
---@param CameraData FBlueprintCameraEvaluationDataRef
---@param Variable UVector3dCameraVariable
---@param Value FVector
function UBlueprintCameraVariableTableFunctionLibrary.SetVector3CameraVariable(CameraData, Variable, Value) end

---Sets a camera variable's value in the given table.
---@param CameraData FBlueprintCameraEvaluationDataRef
---@param Variable UVector2dCameraVariable
---@param Value FVector2D
function UBlueprintCameraVariableTableFunctionLibrary.SetVector2CameraVariable(CameraData, Variable, Value) end

---Sets a camera variable's value in the given table.
---@param CameraData FBlueprintCameraEvaluationDataRef
---@param Variable UTransform3dCameraVariable
---@param Value FTransform
function UBlueprintCameraVariableTableFunctionLibrary.SetTransformCameraVariable(CameraData, Variable, Value) end

---Sets a camera variable's value in the given table.
---@param CameraData FBlueprintCameraEvaluationDataRef
---@param Variable URotator3dCameraVariable
---@param Value FRotator
function UBlueprintCameraVariableTableFunctionLibrary.SetRotatorCameraVariable(CameraData, Variable, Value) end

---Sets a camera variable's value in the given table.
---@param CameraData FBlueprintCameraEvaluationDataRef
---@param Variable UInteger32CameraVariable
---@param Value integer
function UBlueprintCameraVariableTableFunctionLibrary.SetInteger32CameraVariable(CameraData, Variable, Value) end

---Sets a camera variable's value in the given table.
---@param CameraData FBlueprintCameraEvaluationDataRef
---@param Variable UFloatCameraVariable
---@param Value number
function UBlueprintCameraVariableTableFunctionLibrary.SetFloatCameraVariable(CameraData, Variable, Value) end

---Sets a camera variable's value in the given table.
---@param CameraData FBlueprintCameraEvaluationDataRef
---@param Variable UDoubleCameraVariable
---@param Value number
function UBlueprintCameraVariableTableFunctionLibrary.SetDoubleCameraVariable(CameraData, Variable, Value) end

---Sets a camera variable's value in the given table.
---@param CameraData FBlueprintCameraEvaluationDataRef
---@param Variable UBooleanCameraVariable
---@param Value boolean
function UBlueprintCameraVariableTableFunctionLibrary.SetBooleanCameraVariable(CameraData, Variable, Value) end

---Gets a camera variable's value from the given table.
---@param CameraData FBlueprintCameraEvaluationDataRef
---@param Variable UVector4dCameraVariable
---@return FVector4
function UBlueprintCameraVariableTableFunctionLibrary.GetVector4CameraVariable(CameraData, Variable) end

---Gets a camera variable's value from the given table.
---@param CameraData FBlueprintCameraEvaluationDataRef
---@param Variable UVector3dCameraVariable
---@return FVector
function UBlueprintCameraVariableTableFunctionLibrary.GetVector3CameraVariable(CameraData, Variable) end

---Gets a camera variable's value from the given table.
---@param CameraData FBlueprintCameraEvaluationDataRef
---@param Variable UVector2dCameraVariable
---@return FVector2D
function UBlueprintCameraVariableTableFunctionLibrary.GetVector2CameraVariable(CameraData, Variable) end

---Gets a camera variable's value from the given table.
---@param CameraData FBlueprintCameraEvaluationDataRef
---@param Variable UTransform3dCameraVariable
---@return FTransform
function UBlueprintCameraVariableTableFunctionLibrary.GetTransformCameraVariable(CameraData, Variable) end

---Gets a camera variable's value from the given table.
---@param CameraData FBlueprintCameraEvaluationDataRef
---@param Variable URotator3dCameraVariable
---@return FRotator
function UBlueprintCameraVariableTableFunctionLibrary.GetRotatorCameraVariable(CameraData, Variable) end

---Gets a camera variable's value from the given table.
---@param CameraData FBlueprintCameraEvaluationDataRef
---@param Variable UInteger32CameraVariable
---@return integer
function UBlueprintCameraVariableTableFunctionLibrary.GetInteger32CameraVariable(CameraData, Variable) end

---Gets a camera variable's value from the given table.
---@param CameraData FBlueprintCameraEvaluationDataRef
---@param Variable UFloatCameraVariable
---@return number
function UBlueprintCameraVariableTableFunctionLibrary.GetFloatCameraVariable(CameraData, Variable) end

---Gets a camera variable's value from the given table.
---@param CameraData FBlueprintCameraEvaluationDataRef
---@param Variable UDoubleCameraVariable
---@return number
function UBlueprintCameraVariableTableFunctionLibrary.GetDoubleCameraVariable(CameraData, Variable) end

---Gets a camera variable's value from the given table.
---@param CameraData FBlueprintCameraEvaluationDataRef
---@param Variable UBooleanCameraVariable
---@return boolean
function UBlueprintCameraVariableTableFunctionLibrary.GetBooleanCameraVariable(CameraData, Variable) end

