---The Enhanced Input Editor Subsystem can be used to process input outside of PIE within the editor.
---Calling StartConsumingInput will allow the input preprocessor to drive Input Action delegates
---to be fired in the editor.
---This allows you to hook up Input Action delegates in Editor Utilities to make editor tools driven by
---input.
---@class UEnhancedInputEditorSubsystem : UEditorSubsystem
---@field private PlayerInput UEnhancedPlayerInput @The player input that is processing the input within this subsystem
---@field private CurrentInputStack TArray<TWeakObjectPtr<UInputComponent>> @Internal. This is the current stack of InputComponents that is being processed by the PlayerInput.
---@field protected ContinuouslyInjectedInputs TMap<UInputAction, FInjectedInput> @Map of inputs that should be injected every frame. These inputs will be injected when ForcedInput is ticked.
local UEnhancedInputEditorSubsystem = {}

---Tells this subsystem to stop ticking and consuming any input. This will stop any Input Action Delegates from being called.
function UEnhancedInputEditorSubsystem:StopConsumingInput() end

---Start the consumption of input messages in this subsystem. This is required to have any Input Action delegates be fired.
function UEnhancedInputEditorSubsystem:StartConsumingInput() end

---Pushes this input component onto the stack to be processed by this subsystem's tick function
---@param InInputComponent UInputComponent
function UEnhancedInputEditorSubsystem:PushInputComponent(InInputComponent) end

---Removes this input component onto the stack to be processed by this subsystem's tick function
---@param InInputComponent UInputComponent
---@return boolean
function UEnhancedInputEditorSubsystem:PopInputComponent(InInputComponent) end

---Returns true if this subsystem is currently consuming input
---@return boolean
function UEnhancedInputEditorSubsystem:IsConsumingInput() end

---Update the value of a continuous input injection for the given player mapping name, preserving the state of triggers and modifiers.
---@param MappingName string
---@param RawValue FInputActionValue
function UEnhancedInputEditorSubsystem:UpdateValueOfContinuousInputInjectionForPlayerMapping(MappingName, RawValue) end

---Update the value of a continuous input injection, preserving the state of triggers and modifiers.
---@param Action UInputAction
---@param RawValue FInputActionValue
function UEnhancedInputEditorSubsystem:UpdateValueOfContinuousInputInjectionForAction(Action, RawValue) end

---Stops continuous input injection for the given player mapping name.
---@param MappingName string
function UEnhancedInputEditorSubsystem:StopContinuousInputInjectionForPlayerMapping(MappingName) end

---Stops continuous input injection for the given action.
---@param Action UInputAction
function UEnhancedInputEditorSubsystem:StopContinuousInputInjectionForAction(Action) end

---Starts simulation of input via injection. This injects the given input every tick until it is stopped with StopContinuousInputInjectionForAction.
---@param MappingName string
---@param RawValue FInputActionValue
---@param Modifiers TArray_UInputModifier_
---@param Triggers TArray_UInputTrigger_
function UEnhancedInputEditorSubsystem:StartContinuousInputInjectionForPlayerMapping(MappingName, RawValue, Modifiers, Triggers) end

---Starts simulation of input via injection. This injects the given input every tick until it is stopped with StopContinuousInputInjectionForAction.
---@param Action UInputAction
---@param RawValue FInputActionValue
---@param Modifiers TArray_UInputModifier_
---@param Triggers TArray_UInputTrigger_
function UEnhancedInputEditorSubsystem:StartContinuousInputInjectionForAction(Action, RawValue, Modifiers, Triggers) end

---Sets the current input mode on the player and triggers a rebuild of control mappings.
---@param NewMode FGameplayTagContainer
---@param Options FModifyContextOptions @[opt] 
function UEnhancedInputEditorSubsystem:SetInputMode(NewMode, Options) end

---Flag player for reapplication of all mapping contexts at the end of this frame.
---This is called automatically when adding or removing mappings contexts.
---@param Options FModifyContextOptions @[opt] 
---@param RebuildType EInputMappingRebuildType @[opt] 
function UEnhancedInputEditorSubsystem:RequestRebuildControlMappings(Options, RebuildType) end

---Removes tags from the current input mode and triggers a rebuild of control mappings.
---@param TagsToRemove FGameplayTagContainer
---@param Options FModifyContextOptions @[opt] 
function UEnhancedInputEditorSubsystem:RemoveTagsFromInputMode(TagsToRemove, Options) end

---Removes the given tag from the current input mode and triggers a rebuild of control mappings.
---@param TagToRemove FGameplayTag
---@param Options FModifyContextOptions @[opt] 
function UEnhancedInputEditorSubsystem:RemoveTagFromInputMode(TagToRemove, Options) end

---Remove a specific control context.
---This is safe to call even if the context is not applied.
---@param MappingContext UInputMappingContext
---@param Options FModifyContextOptions @[opt] 
function UEnhancedInputEditorSubsystem:RemoveMappingContext(MappingContext, Options) end

---= DefaultMappingIssues::StandardFatal
---@param PrioritizedActiveContexts TArray_UInputMappingContext_
---@param InputContext UInputMappingContext
---@param Action UInputAction
---@param Key FKey
---@param OutIssues TArray_FMappingQueryIssue_ @[out] 
---@param BlockingIssues EMappingQueryIssue
---@return EMappingQueryResult
function UEnhancedInputEditorSubsystem:QueryMapKeyInContextSet(PrioritizedActiveContexts, InputContext, Action, Key, OutIssues, BlockingIssues) end

---= DefaultMappingIssues::StandardFatal
---@param InputContext UInputMappingContext
---@param Action UInputAction
---@param Key FKey
---@param OutIssues TArray_FMappingQueryIssue_ @[out] 
---@param BlockingIssues EMappingQueryIssue
---@return EMappingQueryResult
function UEnhancedInputEditorSubsystem:QueryMapKeyInActiveContextSet(InputContext, Action, Key, OutIssues, BlockingIssues) end

---Returns the keys mapped to the given action in the active input mapping contexts.
---@param Action UInputAction
---@return TArray_FKey_
function UEnhancedInputEditorSubsystem:QueryKeysMappedToAction(Action) end

---Callback for when any Enhanced Input user settings have been changed (a new key mapping for example)
---@param Settings UEnhancedInputUserSettings
function UEnhancedInputEditorSubsystem:OnUserSettingsChanged(Settings) end

---A callback for when the user has applied a new mappable key profile.
---@param InNewProfile UEnhancedPlayerMappableKeyProfile
function UEnhancedInputEditorSubsystem:OnUserKeyProfileChanged(InNewProfile) end

---Input simulation via injection. Runs modifiers and triggers delegates as if the input had come through the underlying input system as FKeys.
---Applies action modifiers and triggers on top.
---@param MappingName string
---@param Value FVector
---@param Modifiers TArray_UInputModifier_
---@param Triggers TArray_UInputTrigger_
function UEnhancedInputEditorSubsystem:InjectInputVectorForPlayerMapping(MappingName, Value, Modifiers, Triggers) end

---Input simulation via injection. Runs modifiers and triggers delegates as if the input had come through the underlying input system as FKeys.
---Applies action modifiers and triggers on top.
---@param Action UInputAction
---@param Value FVector
---@param Modifiers TArray_UInputModifier_
---@param Triggers TArray_UInputTrigger_
function UEnhancedInputEditorSubsystem:InjectInputVectorForAction(Action, Value, Modifiers, Triggers) end

---Input simulation via injection. Runs modifiers and triggers delegates as if the input had come through the underlying input system as FKeys.
---Applies action modifiers and triggers on top.
---@param MappingName string
---@param RawValue FInputActionValue
---@param Modifiers TArray_UInputModifier_
---@param Triggers TArray_UInputTrigger_
function UEnhancedInputEditorSubsystem:InjectInputForPlayerMapping(MappingName, RawValue, Modifiers, Triggers) end

---Input simulation via injection. Runs modifiers and triggers delegates as if the input had come through the underlying input system as FKeys.
---Applies action modifiers and triggers on top.
---@param Action UInputAction
---@param RawValue FInputActionValue
---@param Modifiers TArray_UInputModifier_
---@param Triggers TArray_UInputTrigger_
function UEnhancedInputEditorSubsystem:InjectInputForAction(Action, RawValue, Modifiers, Triggers) end

---Check if a mapping context is applied to this subsystem's owner.
---@param MappingContext UInputMappingContext
---@param OutFoundPriority integer @[out] 
---@return boolean
function UEnhancedInputEditorSubsystem:HasMappingContext(MappingContext, OutFoundPriority) end

---@return UEnhancedInputUserSettings
function UEnhancedInputEditorSubsystem:GetUserSettings() end

---Returns the current input mode set on Enhanced Input. This mode will control what mappings are
---currently being processed by the player. If the Input Mapping Context's InputModeQuery is
---not empty and does not match this tag container, then it's mappings will not be processed.
---@return FGameplayTagContainer
function UEnhancedInputEditorSubsystem:GetInputMode() end

---Get an array of the currently applied key mappings that are marked as Player Mappable.
---@return TArray_FEnhancedActionKeyMapping_
function UEnhancedInputEditorSubsystem:GetAllPlayerMappableActionKeyMappings() end

---Remove all applied mapping contexts.
function UEnhancedInputEditorSubsystem:ClearAllMappings() end

---Appends the given "TagsToAdd" to the current input mode tag container and triggers a rebuild of control mappings.
---@param TagsToAdd FGameplayTagContainer
---@param Options FModifyContextOptions @[opt] 
function UEnhancedInputEditorSubsystem:AppendTagsToInputMode(TagsToAdd, Options) end

---Adds the given "TagToAdd" to the current input mode tag container and triggers a rebuild of control mappings.
---@param TagToAdd FGameplayTag
---@param Options FModifyContextOptions @[opt] 
function UEnhancedInputEditorSubsystem:AddTagToInputMode(TagToAdd, Options) end

---Add a control mapping context.
---@param MappingContext UInputMappingContext
---@param Priority integer
---@param Options FModifyContextOptions @[opt] 
function UEnhancedInputEditorSubsystem:AddMappingContext(MappingContext, Priority, Options) end

