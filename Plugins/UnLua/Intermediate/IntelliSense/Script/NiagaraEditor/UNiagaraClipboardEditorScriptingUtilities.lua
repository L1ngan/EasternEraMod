---@class UNiagaraClipboardEditorScriptingUtilities : UObject
local UNiagaraClipboardEditorScriptingUtilities = {}

---@param InInput UNiagaraClipboardFunctionInput
---@param bOutSucceeded boolean @[out] 
---@param InValue integer
---@param bLooseTyping boolean @[opt] 
function UNiagaraClipboardEditorScriptingUtilities.TrySetLocalValueAsInt(InInput, bOutSucceeded, InValue, bLooseTyping) end

---@param InInput UNiagaraClipboardFunctionInput
---@param bOutSucceeded boolean @[out] 
---@param OutValue integer @[out] 
function UNiagaraClipboardEditorScriptingUtilities.TryGetLocalValueAsInt(InInput, bOutSucceeded, OutValue) end

---@param InInput UNiagaraClipboardFunctionInput
---@param bOutSucceeded boolean @[out] 
---@param OutValue number @[out] 
function UNiagaraClipboardEditorScriptingUtilities.TryGetLocalValueAsFloat(InInput, bOutSucceeded, OutValue) end

---@param InInputs TArray_UNiagaraClipboardFunctionInput_
---@param InInputName string
---@param bOutSucceeded boolean @[out] 
---@param OutInput UNiagaraClipboardFunctionInput @[out] 
function UNiagaraClipboardEditorScriptingUtilities.TryGetInputByName(InInputs, InInputName, bOutSucceeded, OutInput) end

---@param InInput UNiagaraClipboardFunctionInput
---@return string
function UNiagaraClipboardEditorScriptingUtilities.GetTypeName(InInput) end

---@param InOuter UObject
---@param InInputName string
---@param bInHasEditCondition boolean
---@param bInEditConditionValue boolean
---@param InVec3Value FVector
---@return UNiagaraClipboardFunctionInput
function UNiagaraClipboardEditorScriptingUtilities.CreateVec3LocalValueInput(InOuter, InInputName, bInHasEditCondition, bInEditConditionValue, InVec3Value) end

---@param InOuter UObject
---@param InInputName string
---@param bInHasEditCondition boolean
---@param bInEditConditionValue boolean
---@param InVec2Value FVector2D
---@return UNiagaraClipboardFunctionInput
function UNiagaraClipboardEditorScriptingUtilities.CreateVec2LocalValueInput(InOuter, InInputName, bInHasEditCondition, bInEditConditionValue, InVec2Value) end

---@param InOuter UObject
---@param InInputName string
---@param bInHasEditCondition boolean
---@param bInEditConditionValue boolean
---@param InStructValue UUserDefinedStruct
---@return UNiagaraClipboardFunctionInput
function UNiagaraClipboardEditorScriptingUtilities.CreateStructLocalValueInput(InOuter, InInputName, bInHasEditCondition, bInEditConditionValue, InStructValue) end

---@param InOuter UObject
---@param InInputName string
---@param InInputTypeName string
---@param bInHasEditCondition boolean
---@param bInEditConditionValue boolean
---@param InLinkedValue string
---@return UNiagaraClipboardFunctionInput
function UNiagaraClipboardEditorScriptingUtilities.CreateLinkedValueInput(InOuter, InInputName, InInputTypeName, bInHasEditCondition, bInEditConditionValue, InLinkedValue) end

---@param InOuter UObject
---@param InInputName string
---@param bInHasEditCondition boolean
---@param bInEditConditionValue boolean
---@param InLocalValue integer
---@return UNiagaraClipboardFunctionInput
function UNiagaraClipboardEditorScriptingUtilities.CreateIntLocalValueInput(InOuter, InInputName, bInHasEditCondition, bInEditConditionValue, InLocalValue) end

---@param InOuter UObject
---@param InInputName string
---@param bInHasEditCondition boolean
---@param bInEditConditionValue boolean
---@param InLocalValue number
---@return UNiagaraClipboardFunctionInput
function UNiagaraClipboardEditorScriptingUtilities.CreateFloatLocalValueInput(InOuter, InInputName, bInHasEditCondition, bInEditConditionValue, InLocalValue) end

---@param InOuter UObject
---@param InInputName string
---@param InInputTypeName string
---@param bInHasEditCondition boolean
---@param bInEditConditionValue boolean
---@param InExpressionValue string
---@return UNiagaraClipboardFunctionInput
function UNiagaraClipboardEditorScriptingUtilities.CreateExpressionValueInput(InOuter, InInputName, InInputTypeName, bInHasEditCondition, bInEditConditionValue, InExpressionValue) end

---@param InOuter UObject
---@param InInputName string
---@param bInHasEditCondition boolean
---@param bInEditCoditionValue boolean
---@param InEnumType UUserDefinedEnum
---@param InEnumValue integer
---@return UNiagaraClipboardFunctionInput
function UNiagaraClipboardEditorScriptingUtilities.CreateEnumLocalValueInput(InOuter, InInputName, bInHasEditCondition, bInEditCoditionValue, InEnumType, InEnumValue) end

---@param InOuter UObject
---@param InInputName string
---@param InInputTypeName string
---@param bInHasEditCondition boolean
---@param bInEditConditionValue boolean
---@param InDynamicValueName string
---@param InDynamicValue UNiagaraScript
---@return UNiagaraClipboardFunctionInput
function UNiagaraClipboardEditorScriptingUtilities.CreateDynamicValueInput(InOuter, InInputName, InInputTypeName, bInHasEditCondition, bInEditConditionValue, InDynamicValueName, InDynamicValue) end

---@param InOuter UObject
---@param InInputName string
---@param bInHasEditCondition boolean
---@param bInEditConditionValue boolean
---@param InDataValue UNiagaraDataInterface
---@return UNiagaraClipboardFunctionInput
function UNiagaraClipboardEditorScriptingUtilities.CreateDataValueInput(InOuter, InInputName, bInHasEditCondition, bInEditConditionValue, InDataValue) end

---@param InOuter UObject
---@param InInputName string
---@param bInHasEditCondition boolean
---@param bInEditConditionValue boolean
---@param InBoolValue boolean
---@return UNiagaraClipboardFunctionInput
function UNiagaraClipboardEditorScriptingUtilities.CreateBoolLocalValueInput(InOuter, InInputName, bInHasEditCondition, bInEditConditionValue, InBoolValue) end

