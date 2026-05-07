---@class FDirectoryWidgetCompilerOptions
---@field public Directory FDirectoryPath @The directory to limit the rules effects to.
---@field public IgnoredWidgets TArray<TSoftObjectPtr<UWidgetBlueprint>> @These widgets are ignored, and they will use the next most applicable directory to determine their rules.
---@field public Options FWidgetCompilerOptions @The directory specific compiler options for these widgets.
local FDirectoryWidgetCompilerOptions = {}
