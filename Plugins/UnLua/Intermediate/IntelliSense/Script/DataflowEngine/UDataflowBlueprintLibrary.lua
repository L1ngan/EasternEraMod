---@class UDataflowBlueprintLibrary : UBlueprintFunctionLibrary
local UDataflowBlueprintLibrary = {}

---Regenerate an asset using its corresponding dataflow
---@param AssetToRegenerate UObject
---@param bRegenerateDependentAssets boolean @[opt] 
---@return boolean
function UDataflowBlueprintLibrary.RegenerateAssetFromDataflow(AssetToRegenerate, bRegenerateDependentAssets) end

---Override an Unreal Object Array dataflow variable for a specific asset
---@param Asset UObject
---@param VariableName string
---@param VariableArrayValue TArray_UObject_
---@return boolean
function UDataflowBlueprintLibrary.OverrideDataflowVariableObjectArray(Asset, VariableName, VariableArrayValue) end

---Override an Unreal Object dataflow variable for a specific asset
---@param Asset UObject
---@param VariableName string
---@param VariableValue UObject
---@return boolean
function UDataflowBlueprintLibrary.OverrideDataflowVariableObject(Asset, VariableName, VariableValue) end

---Override an Integer Array dataflow variable for a specific asset
---@param Asset UObject
---@param VariableName string
---@param VariableArrayValue TArray_integer_
---@return boolean
function UDataflowBlueprintLibrary.OverrideDataflowVariableIntArray(Asset, VariableName, VariableArrayValue) end

---Override an Integer dataflow variable for a specific asset
---@param Asset UObject
---@param VariableName string
---@param VariableValue integer
---@return boolean
function UDataflowBlueprintLibrary.OverrideDataflowVariableInt(Asset, VariableName, VariableValue) end

---Override a Float Array dataflow variable for a specific asset
---@param Asset UObject
---@param VariableName string
---@param VariableArrayValue TArray_number_
---@return boolean
function UDataflowBlueprintLibrary.OverrideDataflowVariableFloatArray(Asset, VariableName, VariableArrayValue) end

---Override a Float dataflow variable for a specific asset
---@param Asset UObject
---@param VariableName string
---@param VariableValue number
---@return boolean
function UDataflowBlueprintLibrary.OverrideDataflowVariableFloat(Asset, VariableName, VariableValue) end

---Override an Boolean Array dataflow variable for a specific asset
---@param Asset UObject
---@param VariableName string
---@param VariableArrayValue TArray_boolean_
---@return boolean
function UDataflowBlueprintLibrary.OverrideDataflowVariableBoolArray(Asset, VariableName, VariableArrayValue) end

---Override a Boolean dataflow variable for a specific asset
---@param Asset UObject
---@param VariableName string
---@param VariableValue boolean
---@return boolean
function UDataflowBlueprintLibrary.OverrideDataflowVariableBool(Asset, VariableName, VariableValue) end

---Find a specific terminal node by name evaluate it using a specific UObject
---@param Dataflow UDataflow
---@param TerminalNodeName string
---@param ResultAsset UObject
function UDataflowBlueprintLibrary.EvaluateTerminalNodeByName(Dataflow, TerminalNodeName, ResultAsset) end

