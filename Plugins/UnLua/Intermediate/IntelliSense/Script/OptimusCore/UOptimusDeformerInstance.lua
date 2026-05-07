---Class representing an instance of an Optimus Mesh Deformer, used in a OptimusDeformerDynamicInstanceManager
---It contains the per instance deformer variable state and local state for each of the graphs in the deformer.
---@class UOptimusDeformerInstance : UMeshDeformerInstance
---@field private MeshComponent TWeakObjectPtr<UMeshComponent> @The Mesh Component that owns this Mesh Deformer Instance.
---@field private InstanceSettings TWeakObjectPtr<UOptimusDeformerInstanceSettings> @The settings for this Mesh Deformer Instance.
---@field private ComputeGraphExecInfos TArray<FOptimusDeformerInstanceExecInfo> @An array of state. One for each graph owned by the deformer.
local UOptimusDeformerInstance = {}

---@param InVariableName string
---@param InValue FVector
---@return boolean
function UOptimusDeformerInstance:SetVectorVariable(InVariableName, InValue) end

---@param InVariableName string
---@param InValue TArray_FVector_
---@return boolean
function UOptimusDeformerInstance:SetVectorArrayVariable(InVariableName, InValue) end

---@param InVariableName string
---@param InValue FVector4
---@return boolean
function UOptimusDeformerInstance:SetVector4Variable(InVariableName, InValue) end

---@param InVariableName string
---@param InValue TArray_FVector4_
---@return boolean
function UOptimusDeformerInstance:SetVector4ArrayVariable(InVariableName, InValue) end

---@param InVariableName string
---@param InValue FVector2D
---@return boolean
function UOptimusDeformerInstance:SetVector2Variable(InVariableName, InValue) end

---@param InVariableName string
---@param InValue TArray_FVector2D_
---@return boolean
function UOptimusDeformerInstance:SetVector2ArrayVariable(InVariableName, InValue) end

---Set the value of a transform variable.
---@param InVariableName string
---@param InValue FTransform
---@return boolean
function UOptimusDeformerInstance:SetTransformVariable(InVariableName, InValue) end

---@param InVariableName string
---@param InValue TArray_FTransform_
---@return boolean
function UOptimusDeformerInstance:SetTransformArrayVariable(InVariableName, InValue) end

---@param InVariableName string
---@param InValue FRotator
---@return boolean
function UOptimusDeformerInstance:SetRotatorVariable(InVariableName, InValue) end

---@param InVariableName string
---@param InValue TArray_FRotator_
---@return boolean
function UOptimusDeformerInstance:SetRotatorArrayVariable(InVariableName, InValue) end

---@param InVariableName string
---@param InValue FQuat
---@return boolean
function UOptimusDeformerInstance:SetQuatVariable(InVariableName, InValue) end

---@param InVariableName string
---@param InValue TArray_FQuat_
---@return boolean
function UOptimusDeformerInstance:SetQuatArrayVariable(InVariableName, InValue) end

---@param InVariableName string
---@param InValue string
---@return boolean
function UOptimusDeformerInstance:SetNameVariable(InVariableName, InValue) end

---@param InVariableName string
---@param InValue TArray_string_
---@return boolean
function UOptimusDeformerInstance:SetNameArrayVariable(InVariableName, InValue) end

---@param InVariableName string
---@param InValue FLinearColor
---@return boolean
function UOptimusDeformerInstance:SetLinearColorVariable(InVariableName, InValue) end

---@param InVariableName string
---@param InValue TArray_FLinearColor_
---@return boolean
function UOptimusDeformerInstance:SetLinearColorArrayVariable(InVariableName, InValue) end

---Set the value of an integer variable.
---@param InVariableName string
---@param InValue integer
---@return boolean
function UOptimusDeformerInstance:SetIntVariable(InVariableName, InValue) end

---@param InVariableName string
---@param InValue TArray_integer_
---@return boolean
function UOptimusDeformerInstance:SetIntArrayVariable(InVariableName, InValue) end

---@param InVariableName string
---@param InValue FIntVector4
---@return boolean
function UOptimusDeformerInstance:SetInt4Variable(InVariableName, InValue) end

---@param InVariableName string
---@param InValue TArray_FIntVector4_
---@return boolean
function UOptimusDeformerInstance:SetInt4ArrayVariable(InVariableName, InValue) end

---@param InVariableName string
---@param InValue FIntVector
---@return boolean
function UOptimusDeformerInstance:SetInt3Variable(InVariableName, InValue) end

---@param InVariableName string
---@param InValue TArray_FIntVector_
---@return boolean
function UOptimusDeformerInstance:SetInt3ArrayVariable(InVariableName, InValue) end

---@param InVariableName string
---@param InValue FIntPoint
---@return boolean
function UOptimusDeformerInstance:SetInt2Variable(InVariableName, InValue) end

---@param InVariableName string
---@param InValue TArray_FIntPoint_
---@return boolean
function UOptimusDeformerInstance:SetInt2ArrayVariable(InVariableName, InValue) end

---@param InVariableName string
---@param InValue number
---@return boolean
function UOptimusDeformerInstance:SetFloatVariable(InVariableName, InValue) end

---@param InVariableName string
---@param InValue TArray_number_
---@return boolean
function UOptimusDeformerInstance:SetFloatArrayVariable(InVariableName, InValue) end

---Set the value of a boolean variable.
---@param InVariableName string
---@param InValue boolean
---@return boolean
function UOptimusDeformerInstance:SetBoolVariable(InVariableName, InValue) end

---@param InVariableName string
---@param InValue TArray_boolean_
---@return boolean
function UOptimusDeformerInstance:SetBoolArrayVariable(InVariableName, InValue) end

---Trigger a named trigger graph to run on the next tick
---@param InTriggerGraphName string
---@return boolean
function UOptimusDeformerInstance:EnqueueTriggerGraph(InTriggerGraphName) end

