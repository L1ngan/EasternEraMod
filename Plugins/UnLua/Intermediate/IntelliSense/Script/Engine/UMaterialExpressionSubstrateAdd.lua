---@class UMaterialExpressionSubstrateAdd : UMaterialExpressionSubstrateBSDF
---@field public A FExpressionInput @Substrate material
---@field public B FExpressionInput @Substrate material
---@field public bUseParameterBlending boolean @Merge A and B into a single material by mixing their inputs rather than their evaluation. This makes lighting evaluation cheaper (Default: off)
local UMaterialExpressionSubstrateAdd = {}

