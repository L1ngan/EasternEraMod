---@class FUIComponentTarget
---@field private TargetName string @We use a TargetName to resolve the Widget only at compile time and on the Runtime Widget. It simplify edition in UMG Designer and make sure we do not need to keep Association in sync with the WidgetTree.
---@field private Component UUIComponent
local FUIComponentTarget = {}
