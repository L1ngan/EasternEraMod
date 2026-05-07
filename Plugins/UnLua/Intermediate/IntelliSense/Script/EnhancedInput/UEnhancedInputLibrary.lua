---@class UEnhancedInputLibrary : UBlueprintFunctionLibrary
local UEnhancedInputLibrary = {}

---Flag all enhanced input subsystems making use of the mapping context for reapplication of all control mappings at the end of this frame.
---@param Context UInputMappingContext
---@param bForceImmediately boolean @[opt] 
function UEnhancedInputLibrary.RequestRebuildControlMappingsUsingContext(Context, bForceImmediately) end

---Builds an ActionValue from X, Y, Z. Inherits type from an existing ActionValue. Ignores axis values unused by the provided value type.
---@param X number
---@param Y number
---@param Z number
---@param ValueType EInputActionValueType
---@return FInputActionValue
function UEnhancedInputLibrary.MakeInputActionValueOfType(X, Y, Z, ValueType) end

---Returns true if this Action Key Mapping either holds a Player Mappable Key Settings or is set bIsPlayerMappable.
---@param ActionKeyMapping FEnhancedActionKeyMapping
---@return boolean
function UEnhancedInputLibrary.IsActionKeyMappingPlayerMappable(ActionKeyMapping) end

---Returns the Player Mappable Key Settings owned by the Action Key Mapping or by the referenced Input Action, or nothing based of the Setting Behavior.
---@param ActionKeyMapping FEnhancedActionKeyMapping
---@return UPlayerMappableKeySettings
function UEnhancedInputLibrary.GetPlayerMappableKeySettings(ActionKeyMapping) end

---Returns the name of the mapping based on setting behavior used. If no name is found in the Mappable Key Settings it will return the name set in Player Mappable Options if bIsPlayerMappable is true.
---@param ActionKeyMapping FEnhancedActionKeyMapping
---@return string
function UEnhancedInputLibrary.GetMappingName(ActionKeyMapping) end

---GetInputActionvalue internal accessor function for actions that have been bound to from a UEnhancedInputComponent
---@param Actor AActor
---@param Action UInputAction
---@return FInputActionValue
function UEnhancedInputLibrary.GetBoundActionValue(Actor, Action) end

---Flushes the player controller's pressed keys
---@param PlayerController APlayerController
function UEnhancedInputLibrary.FlushPlayerInput(PlayerController) end

---Converts an ETriggerEvent to a string
---@param TriggerEvent ETriggerEvent
---@return string
function UEnhancedInputLibrary.Conv_TriggerEventValueToString(TriggerEvent) end

---Converts a FInputActionValue to a string
---@param ActionValue FInputActionValue
---@return string
function UEnhancedInputLibrary.Conv_InputActionValueToString(ActionValue) end

---Interpret an InputActionValue as a boolean input
---@param InValue FInputActionValue
---@return boolean
function UEnhancedInputLibrary.Conv_InputActionValueToBool(InValue) end

---Interpret an InputActionValue as a 3D axis (Vector) input
---@param ActionValue FInputActionValue
---@return FVector
function UEnhancedInputLibrary.Conv_InputActionValueToAxis3D(ActionValue) end

---Interpret an InputActionValue as a 2D axis (Vector2D) input
---@param InValue FInputActionValue
---@return FVector2D
function UEnhancedInputLibrary.Conv_InputActionValueToAxis2D(InValue) end

---Interpret an InputActionValue as a 1D axis (double) input
---@param InValue FInputActionValue
---@return number
function UEnhancedInputLibrary.Conv_InputActionValueToAxis1D(InValue) end

---Breaks an ActionValue into X, Y, Z. Axes not supported by value type will be 0.
---@param InActionValue FInputActionValue
---@param X number @[out] 
---@param Y number @[out] 
---@param Z number @[out] 
---@param Type EInputActionValueType @[out] 
function UEnhancedInputLibrary.BreakInputActionValue(InActionValue, X, Y, Z, Type) end

