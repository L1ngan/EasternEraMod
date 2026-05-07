---UEnhancedPlayerInput : UPlayerInput extensions for enhanced player input system
---@class UEnhancedPlayerInput : UPlayerInput
---@field protected KeyConsumptionData TMap<UInputAction, FKeyConsumptionOptions> @Array of data that represents what keys should be consumed if an enhanced input action is in a specific triggered state
---@field protected ActionInstanceData TMap<UInputAction, FInputActionInstance> @Tracked action values. Queryable.
---@field private AppliedInputContextData TMap<UInputMappingContext, FAppliedInputContextData> @Currently applied key mappings Note: Source reference only. Use EnhancedActionMappings for the actual mappings (with properly instanced triggers/modifiers) These mapping contexts will only have their mappings processed if the current input mode matches the query set on them.
---@field private AppliedInputContexts TMap<UInputMappingContext, integer>
---@field private EnhancedActionMappings TArray<FEnhancedActionKeyMapping> @This player's version of the Action Mappings
---@field private CurrentInputMode FGameplayTagContainer @The current input mode that is active on this player. If Input Mapping contexts have requirements which this container does not meet, then their mappings will not be applied.
---@field private KeysPressedThisTick TMap<FKey, FVector> @A map of Keys to the amount they were depressed this frame. This is reset with each call to ProcessInputStack and is populated within UEnhancedPlayerInput::InputKey.
---@field private InputsInjectedThisTick TMap<UInputAction, FInjectedInputArray> @Inputs injected since the last call to ProcessInputStack
---@field private LastInjectedActions TSet<UInputAction> @Last frame's injected inputs
local UEnhancedPlayerInput = {}

