---Exposes operations to be performed on anim node contexts
---@class UAnimExecutionContextLibrary : UBlueprintFunctionLibrary
local UAnimExecutionContextLibrary = {}

---Prototype function for thread-safe anim update calls
---@param Context FAnimUpdateContext
---@param Node FAnimNodeReference
function UAnimExecutionContextLibrary:Prototype_ThreadSafeAnimUpdateCall(Context, Node) end

---Prototype function for thread-safe anim node calls
---@param Context FAnimExecutionContext
---@param Node FAnimNodeReference
function UAnimExecutionContextLibrary:Prototype_ThreadSafeAnimNodeCall(Context, Node) end

---Get whether this branch of the graph is active (i.e. NOT blending out).
---@param Context FAnimExecutionContext
---@return boolean
function UAnimExecutionContextLibrary.IsActive(Context) end

---Get the current delta time in seconds
---@param Context FAnimUpdateContext
---@return number
function UAnimExecutionContextLibrary.GetDeltaTime(Context) end

---Get the current weight of this branch of the graph
---@param Context FAnimUpdateContext
---@return number
function UAnimExecutionContextLibrary.GetCurrentWeight(Context) end

---Internal compiler use only - Get a reference to an anim node by index
---@param Instance UAnimInstance
---@param Index integer
---@return FAnimNodeReference
function UAnimExecutionContextLibrary.GetAnimNodeReference(Instance, Index) end

---Get the anim instance that hosts this context
---@param Context FAnimExecutionContext
---@return UAnimInstance
function UAnimExecutionContextLibrary.GetAnimInstance(Context) end

---Convert to an update context
---@param Context FAnimExecutionContext
---@param Result EAnimExecutionContextConversionResult @[out] 
---@return FAnimUpdateContext
function UAnimExecutionContextLibrary.ConvertToUpdateContext(Context, Result) end

---Convert to a pose context
---@param Context FAnimExecutionContext
---@param Result EAnimExecutionContextConversionResult @[out] 
---@return FAnimPoseContext
function UAnimExecutionContextLibrary.ConvertToPoseContext(Context, Result) end

---Convert to an initialization context
---@param Context FAnimExecutionContext
---@param Result EAnimExecutionContextConversionResult @[out] 
---@return FAnimInitializationContext
function UAnimExecutionContextLibrary.ConvertToInitializationContext(Context, Result) end

---Convert to a component space pose context
---@param Context FAnimExecutionContext
---@param Result EAnimExecutionContextConversionResult @[out] 
---@return FAnimComponentSpacePoseContext
function UAnimExecutionContextLibrary.ConvertToComponentSpacePoseContext(Context, Result) end

