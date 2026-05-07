---Base class for building triggers.
---Transitions to Triggered state once the input meets or exceeds the actuation threshold.
---@class UInputTrigger : UObject
---@field public ActuationThreshold number @Point at which this trigger fires
---@field public bShouldAlwaysTick boolean @Decides whether this trigger ticks every frame or not.        * This WILL affect performance and should only be used in specific custom triggers.
---@field public LastValue FInputActionValue @Value passed to UpdateState on the previous tick. This will be updated automatically after the trigger is updated.
local UInputTrigger = {}

---This function checks if the requisite conditions have been met for the trigger to fire.
--- Returns Trigger State None              - No trigger conditions have been met. Trigger is inactive.
---                 Trigger State Ongoing   - Some trigger conditions have been met. Trigger is processing but not yet active.
---                 Trigger State Triggered - All trigger conditions have been met to fire. Trigger is active.
---@param PlayerInput UEnhancedPlayerInput
---@param ModifiedValue FInputActionValue
---@param DeltaTime number
---@return ETriggerState
function UInputTrigger:UpdateState(PlayerInput, ModifiedValue, DeltaTime) end

---* Is the value passed in sufficiently large to be of interest to the trigger.
---* This is a helper function that implements the most obvious (>=) interpretation of the actuation threshold.
---@param ForValue FInputActionValue
---@return boolean
function UInputTrigger:IsActuated(ForValue) end

---Changes the way this trigger affects an action with multiple triggers:
---        All implicit triggers must be triggering to trigger the action.
---        If there are any explicit triggers at least one must be triggering to trigger the action.
---@return ETriggerType
function UInputTrigger:GetTriggerType() end

