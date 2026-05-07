---UInputMappingContext : A collection of key to action mappings for a specific input context
---Could be used to:
---     Store predefined controller mappings (allow switching between controller config variants). TODO: Build a system allowing redirects of UInputMappingContexts to handle this.
---     Define per-vehicle control mappings
---     Define context specific mappings (e.g. I switch from a gun (shoot action) to a grappling hook (reel in, reel out, disconnect actions).
---     Define overlay mappings to be applied on top of existing control mappings (e.g. Hero specific action mappings in a MOBA)
---@class UInputMappingContext : UDataAsset
---@field protected Mappings TArray<FEnhancedActionKeyMapping> @List of key to action mappings.
---@field protected InputModeFilterOptions EMappingContextInputModeFilterOptions @Defines how this input mapping context should be filtered based on the current input mode. Default is Use Project Default Query.
---@field protected InputModeQueryOverride FGameplayTagQuery @Tag Query which will be matched against the current Enhanced Input Subsystem's input mode if InputModeFilterOptions is set to UseCustomQuery. If this tag query does not match with the current input mode tag container, then the mappings will not be processed.
---@field protected RegistrationTrackingMode EMappingContextRegistrationTrackingMode @Select the behaviour when multiple AddMappingContext() calls are made for this Input Mapping Context
---@field public ContextDescription string @Localized context descriptor
local UInputMappingContext = {}

---Unmap a key from an action within the mapping context.
---@param Action UInputAction
---@param Key FKey
function UInputMappingContext:UnmapKey(Action, Key) end

---Unmap all key maps to an action within the mapping context.
---@param Action UInputAction
function UInputMappingContext:UnmapAllKeysFromAction(Action) end

---Unmap everything within the mapping context.
function UInputMappingContext:UnmapAll() end

---UFUNCTION helper to be used as en edit condition for displaying input mode query releated properties.
---@return boolean
function UInputMappingContext.ShouldShowInputModeQuery() end

---Map a key to an action within the mapping context.
---@param Action UInputAction
---@param ToKey FKey
---@return FEnhancedActionKeyMapping
function UInputMappingContext:MapKey(Action, ToKey) end

