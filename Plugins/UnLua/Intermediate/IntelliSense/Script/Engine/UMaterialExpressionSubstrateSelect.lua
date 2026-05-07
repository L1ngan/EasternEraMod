---@class UMaterialExpressionSubstrateSelect : UMaterialExpressionSubstrateBSDF
---@field public A FExpressionInput @Substrate material
---@field public B FExpressionInput @Substrate material
---@field public SelectValue FExpressionInput @If <=0, A is selected, otherwise B is selected. (Default: 0))
---@field public Threshold number @The threshold to use to select between A or B (Default: 0.5)
local UMaterialExpressionSubstrateSelect = {}

