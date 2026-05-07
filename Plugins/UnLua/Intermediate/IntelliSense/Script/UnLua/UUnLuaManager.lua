---@class UUnLuaManager : UObject
local UUnLuaManager = {}

function UUnLuaManager:TriggerAnimNotify() end

---@param Class TSubclassOf_UObject_
---@param FunctionName string
---@param LuaFunctionName string
function UUnLuaManager:Override(Class, FunctionName, LuaFunctionName) end

---@param LinkID integer
function UUnLuaManager:OnLatentActionCompleted(LinkID) end

---@param AxisValue FVector
function UUnLuaManager:InputVectorAxis(AxisValue) end

---@param FingerIndex integer
---@param Location FVector
function UUnLuaManager:InputTouch(FingerIndex, Location) end

---@param Value number
function UUnLuaManager:InputGesture(Value) end

---@param AxisValue number
function UUnLuaManager:InputAxis(AxisValue) end

---@param Key FKey
function UUnLuaManager:InputAction(Key) end

---@param Class TSubclassOf_UObject_
---@param BindingClass TSubclassOf_UObject_
---@return UDynamicBlueprintBinding
function UUnLuaManager:GetOrAddBindingObject(Class, BindingClass) end

---@param ActionValue boolean
---@param ElapsedSeconds number
---@param TriggeredSeconds number
function UUnLuaManager:EnhancedInputActionDigital(ActionValue, ElapsedSeconds, TriggeredSeconds) end

---@param ActionValue FVector
---@param ElapsedSeconds number
---@param TriggeredSeconds number
function UUnLuaManager:EnhancedInputActionAxis3D(ActionValue, ElapsedSeconds, TriggeredSeconds) end

---@param ActionValue FVector2D
---@param ElapsedSeconds number
---@param TriggeredSeconds number
function UUnLuaManager:EnhancedInputActionAxis2D(ActionValue, ElapsedSeconds, TriggeredSeconds) end

---@param ActionValue number
---@param ElapsedSeconds number
---@param TriggeredSeconds number
function UUnLuaManager:EnhancedInputActionAxis1D(ActionValue, ElapsedSeconds, TriggeredSeconds) end

