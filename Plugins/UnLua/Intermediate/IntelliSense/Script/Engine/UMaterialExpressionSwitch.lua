---@class UMaterialExpressionSwitch : UMaterialExpression
---@field public Description string
---@field public SwitchValue FExpressionInput @Defaults to 'ConstSwitchValue' if not specified
---@field public ConstSwitchValue number @only used if Selector is not hooked up
---@field public Default FExpressionInput @Defaults to 'ConstDefault' if not specified
---@field public ConstDefault number @only used if Selector is not hooked up
---@field public Inputs TArray<FSwitchCustomInput>
local UMaterialExpressionSwitch = {}

