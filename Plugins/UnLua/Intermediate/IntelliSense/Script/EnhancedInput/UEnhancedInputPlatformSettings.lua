---Settings for Enhanced Input that can be set per-platform
---@class UEnhancedInputPlatformSettings : UPlatformSettings
---@field protected InputData TArray<TSoftClassPtr<UEnhancedInputPlatformData>> @Input data that can be populated with Enhanced Input Platform Data blueprints
---@field protected InputDataClasses TArray<TSubclassOf<UEnhancedInputPlatformData>> @A transient array of the subclasses for the Enhanced Input Platform data. This will prevent us from from having to load the class' default object during game time.
---@field protected bShouldLogMappingContextRedirects boolean @If true, then Enhanced Input will log which mapping contexts have been redirected when building the control mappings.
local UEnhancedInputPlatformSettings = {}

