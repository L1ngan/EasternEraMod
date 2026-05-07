---ContinuouslyInjectedInputs Map is not managed.
---Continuous input injections seem to be getting garbage collected and
---crashing in UObject::ProcessEvent when calling ModifyRaw.
---Band-aid fix: Making these managed references. Also check modifications to
---IEnhancedInputSubsystemInterface::Start/StopContinuousInputInjectionForAction.
---@class FInjectedInput
---@field public Triggers TArray<UInputTrigger>
---@field public Modifiers TArray<UInputModifier>
local FInjectedInput = {}
