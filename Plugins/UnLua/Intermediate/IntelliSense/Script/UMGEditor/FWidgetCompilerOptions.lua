---@class FWidgetCompilerOptions
---@field public bAllowBlueprintTick boolean @If you disable this, these widgets these compiler options apply to will not be allowed to implement Tick.
---@field public bAllowBlueprintPaint boolean @If you disable this, these widgets these compiler options apply to will not be allowed to implement Paint.
---@field public PropertyBindingRule EPropertyBindingPermissionLevel @Controls if you allow property bindings in widgets.  They can have a large performance impact if used.
---@field public Rules TArray<TSoftClassPtr<UWidgetCompilerRule>> @Custom rules.
local FWidgetCompilerOptions = {}
