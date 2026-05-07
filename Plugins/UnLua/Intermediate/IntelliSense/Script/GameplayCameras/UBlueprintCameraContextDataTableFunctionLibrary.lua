---Utility Blueprint functions for camera context data tables.
---@class UBlueprintCameraContextDataTableFunctionLibrary : UBlueprintFunctionLibrary
local UBlueprintCameraContextDataTableFunctionLibrary = {}

---Sets a value in the given camera context data table.
---@param CameraData FBlueprintCameraEvaluationDataRef
---@param DataID FCameraContextDataID
---@param Data FInstancedStruct
---@return boolean
function UBlueprintCameraContextDataTableFunctionLibrary.SetStructData(CameraData, DataID, Data) end

---Sets a value in the given camera context data table.
---@param CameraData FBlueprintCameraEvaluationDataRef
---@param DataID FCameraContextDataID
---@param Data string
---@return boolean
function UBlueprintCameraContextDataTableFunctionLibrary.SetStringData(CameraData, DataID, Data) end

---Sets a value in the given camera context data table.
---@param CameraData FBlueprintCameraEvaluationDataRef
---@param DataID FCameraContextDataID
---@param Data UObject
---@return boolean
function UBlueprintCameraContextDataTableFunctionLibrary.SetObjectData(CameraData, DataID, Data) end

---Sets a value in the given camera context data table.
---@param CameraData FBlueprintCameraEvaluationDataRef
---@param DataID FCameraContextDataID
---@param Data string
---@return boolean
function UBlueprintCameraContextDataTableFunctionLibrary.SetNameData(CameraData, DataID, Data) end

---Sets a value in the given camera context data table.
---@param CameraData FBlueprintCameraEvaluationDataRef
---@param DataID FCameraContextDataID
---@param EnumType UEnum
---@param Data integer
---@return boolean
function UBlueprintCameraContextDataTableFunctionLibrary.SetEnumData(CameraData, DataID, EnumType, Data) end

---Sets a value in the given camera context data table.
---@param CameraData FBlueprintCameraEvaluationDataRef
---@param DataID FCameraContextDataID
---@param Data TSubclassOf_UObject_
---@return boolean
function UBlueprintCameraContextDataTableFunctionLibrary.SetClassData(CameraData, DataID, Data) end

---Gets a value from the given camera context data table.
---@param CameraData FBlueprintCameraEvaluationDataRef
---@param DataID FCameraContextDataID
---@param DataStructType UScriptStruct
---@return FInstancedStruct
function UBlueprintCameraContextDataTableFunctionLibrary.GetStructData(CameraData, DataID, DataStructType) end

---Gets a value from the given camera context data table.
---@param CameraData FBlueprintCameraEvaluationDataRef
---@param DataID FCameraContextDataID
---@return string
function UBlueprintCameraContextDataTableFunctionLibrary.GetStringData(CameraData, DataID) end

---Gets a value from the given camera context data table.
---@param CameraData FBlueprintCameraEvaluationDataRef
---@param DataID FCameraContextDataID
---@return UObject
function UBlueprintCameraContextDataTableFunctionLibrary.GetObjectData(CameraData, DataID) end

---Gets a value from the given camera context data table.
---@param CameraData FBlueprintCameraEvaluationDataRef
---@param DataID FCameraContextDataID
---@return string
function UBlueprintCameraContextDataTableFunctionLibrary.GetNameData(CameraData, DataID) end

---Gets a value from the given camera context data table.
---@param CameraData FBlueprintCameraEvaluationDataRef
---@param DataID FCameraContextDataID
---@param EnumType UEnum
---@return integer
function UBlueprintCameraContextDataTableFunctionLibrary.GetEnumData(CameraData, DataID, EnumType) end

---Gets a value from the given camera context data table.
---@param CameraData FBlueprintCameraEvaluationDataRef
---@param DataID FCameraContextDataID
---@return TSubclassOf_UObject_
function UBlueprintCameraContextDataTableFunctionLibrary.GetClassData(CameraData, DataID) end

