---@class UK2Node_GetClassDefaults : UK2Node
---@field private BlueprintSubscribedTo UBlueprint @Blueprint that we subscribed OnBlueprintChangedDelegate and OnBlueprintCompiledDelegate to
---@field private ShowPinForProperties TArray<FOptionalPinFromProperty> @Output pin visibility control
---@field private bExcludeObjectContainers boolean @Whether or not to exclude object container properties
local UK2Node_GetClassDefaults = {}

