---@class UValueOrBBKeyBlueprintUtility : UBlueprintFunctionLibrary
local UValueOrBBKeyBlueprintUtility = {}

---@param Value FValueOrBBKey_Vector
---@param BehaviorTreeComp UBehaviorTreeComponent
---@return FVector
function UValueOrBBKeyBlueprintUtility.GetVector(Value, BehaviorTreeComp) end

---@param Value FValueOrBBKey_Struct
---@param BehaviorTreeComp UBehaviorTreeComponent
---@return FInstancedStruct
function UValueOrBBKeyBlueprintUtility.GetStruct(Value, BehaviorTreeComp) end

---@param Value FValueOrBBKey_String
---@param BehaviorTreeComp UBehaviorTreeComponent
---@return string
function UValueOrBBKeyBlueprintUtility.GetString(Value, BehaviorTreeComp) end

---@param Value FValueOrBBKey_Rotator
---@param BehaviorTreeComp UBehaviorTreeComponent
---@return FRotator
function UValueOrBBKeyBlueprintUtility.GetRotator(Value, BehaviorTreeComp) end

---@param Value FValueOrBBKey_Object
---@param BehaviorTreeComp UBehaviorTreeComponent
---@return UObject
function UValueOrBBKeyBlueprintUtility.GetObject(Value, BehaviorTreeComp) end

---@param Value FValueOrBBKey_Name
---@param BehaviorTreeComp UBehaviorTreeComponent
---@return string
function UValueOrBBKeyBlueprintUtility.GetName(Value, BehaviorTreeComp) end

---@param Value FValueOrBBKey_Int32
---@param BehaviorTreeComp UBehaviorTreeComponent
---@return integer
function UValueOrBBKeyBlueprintUtility.GetInt32(Value, BehaviorTreeComp) end

---@param Value FValueOrBBKey_Float
---@param BehaviorTreeComp UBehaviorTreeComponent
---@return number
function UValueOrBBKeyBlueprintUtility.GetFloat(Value, BehaviorTreeComp) end

---@param Value FValueOrBBKey_Enum
---@param BehaviorTreeComp UBehaviorTreeComponent
---@return integer
function UValueOrBBKeyBlueprintUtility.GetEnum(Value, BehaviorTreeComp) end

---@param Value FValueOrBBKey_Class
---@param BehaviorTreeComp UBehaviorTreeComponent
---@return TSubclassOf_UObject_
function UValueOrBBKeyBlueprintUtility.GetClass(Value, BehaviorTreeComp) end

---@param Value FValueOrBBKey_Bool
---@param BehaviorTreeComp UBehaviorTreeComponent
---@return boolean
function UValueOrBBKeyBlueprintUtility.GetBool(Value, BehaviorTreeComp) end

