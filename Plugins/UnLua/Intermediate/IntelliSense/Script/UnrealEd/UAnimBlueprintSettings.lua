---Implements Editor settings for animation blueprints
---@class UAnimBlueprintSettings : UObject
---@field public bAllowAnimBlueprints boolean @Whether to allow using animation blueprints
---@field public bAllowEventGraphs boolean @Whether to allow event graphs to be created/displayed in animation blueprints
---@field public bAllowMacros boolean @Whether to allow macros to be created/displayed in animation blueprints
---@field public bAllowDelegates boolean @Whether to allow delegates to be created/displayed in animation blueprints
---@field public bAllowPoseWatches boolean @Whether to allow pose watches to be created/displayed in animation blueprints
---@field public bRestrictBaseFunctionOverrides boolean @Whether to allow restrict which base function overrides can created/displayed in animation blueprints
---@field public bSupportInputEventsForBackwardsCompatibility boolean @Whether to allow input events to be created/displayed in animation blueprints. You used to be able to place input event nodes in anim graphs and they would just not work, sometimes causing an ensure. If needed, you can enable this legacy behavior by setting this property to true (allowing input events to be placed in a graph). Default value is false.
---@field public bPerformValidation boolean @Whether or not anim blueprint should perform allow-list validation
---@field public BaseFunctionOverrideAllowList TArray<string> @The set of allowed base functions if restricted
local UAnimBlueprintSettings = {}

