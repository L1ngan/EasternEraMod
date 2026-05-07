---Implement an Actor component for input bindings.
---An Enhanced Input Component is a transient component that enables an Actor to bind enhanced actions to delegate functions, or monitor those actions.
---Input components are processed from a stack managed by the PlayerController and processed by the PlayerInput.
---These bindings will not consume input events, but this behaviour can be replicated using UInputMappingContext::Priority.
---@class UEnhancedInputComponent : UInputComponent
local UEnhancedInputComponent = {}

---Helper function to pull the action value for a bound action value.
---@param Action UInputAction
---@return FInputActionValue
function UEnhancedInputComponent:GetBoundActionValue(Action) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UEnhancedInputComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UEnhancedInputComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UEnhancedInputComponent:AddAssetUserDataOfClass(InUserDataClass) end

