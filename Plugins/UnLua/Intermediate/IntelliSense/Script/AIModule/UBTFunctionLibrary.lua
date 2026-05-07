---@class UBTFunctionLibrary : UBlueprintFunctionLibrary
local UBTFunctionLibrary = {}

---Save variables marked as "instance memory" and clear owning actor
---@param NodeOwner UBTNode
function UBTFunctionLibrary.StopUsingExternalEvent(NodeOwner) end

---Initialize variables marked as "instance memory" and set owning actor for blackboard operations
---@param NodeOwner UBTNode
---@param OwningActor AActor
function UBTFunctionLibrary.StartUsingExternalEvent(NodeOwner, OwningActor) end

---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@param Value FVector
function UBTFunctionLibrary.SetBlackboardValueAsVector(NodeOwner, Key, Value) end

---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@param Value string
function UBTFunctionLibrary.SetBlackboardValueAsString(NodeOwner, Key, Value) end

---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@param Value FRotator
function UBTFunctionLibrary.SetBlackboardValueAsRotator(NodeOwner, Key, Value) end

---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@param Value UObject
function UBTFunctionLibrary.SetBlackboardValueAsObject(NodeOwner, Key, Value) end

---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@param Value string
function UBTFunctionLibrary.SetBlackboardValueAsName(NodeOwner, Key, Value) end

---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@param Value integer
function UBTFunctionLibrary.SetBlackboardValueAsInt(NodeOwner, Key, Value) end

---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@param Value number
function UBTFunctionLibrary.SetBlackboardValueAsFloat(NodeOwner, Key, Value) end

---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@param Value integer
function UBTFunctionLibrary.SetBlackboardValueAsEnum(NodeOwner, Key, Value) end

---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@param Value TSubclassOf_UObject_
function UBTFunctionLibrary.SetBlackboardValueAsClass(NodeOwner, Key, Value) end

---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@param Value boolean
function UBTFunctionLibrary.SetBlackboardValueAsBool(NodeOwner, Key, Value) end

---@param NodeOwner UBTNode
---@return UBlackboardComponent
function UBTFunctionLibrary.GetOwnersBlackboard(NodeOwner) end

---@param NodeOwner UBTNode
---@return UBehaviorTreeComponent
function UBTFunctionLibrary.GetOwnerComponent(NodeOwner) end

---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@return FVector
function UBTFunctionLibrary.GetBlackboardValueAsVector(NodeOwner, Key) end

---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@return string
function UBTFunctionLibrary.GetBlackboardValueAsString(NodeOwner, Key) end

---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@return FRotator
function UBTFunctionLibrary.GetBlackboardValueAsRotator(NodeOwner, Key) end

---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@return UObject
function UBTFunctionLibrary.GetBlackboardValueAsObject(NodeOwner, Key) end

---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@return string
function UBTFunctionLibrary.GetBlackboardValueAsName(NodeOwner, Key) end

---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@return integer
function UBTFunctionLibrary.GetBlackboardValueAsInt(NodeOwner, Key) end

---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@return number
function UBTFunctionLibrary.GetBlackboardValueAsFloat(NodeOwner, Key) end

---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@return integer
function UBTFunctionLibrary.GetBlackboardValueAsEnum(NodeOwner, Key) end

---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@return TSubclassOf_UObject_
function UBTFunctionLibrary.GetBlackboardValueAsClass(NodeOwner, Key) end

---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@return boolean
function UBTFunctionLibrary.GetBlackboardValueAsBool(NodeOwner, Key) end

---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@return AActor
function UBTFunctionLibrary.GetBlackboardValueAsActor(NodeOwner, Key) end

---(DEPRECATED) Use ClearBlackboardValue instead
---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
function UBTFunctionLibrary.ClearBlackboardValueAsVector(NodeOwner, Key) end

---Resets indicated value to "not set" value, based on values type
---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
function UBTFunctionLibrary.ClearBlackboardValue(NodeOwner, Key) end

