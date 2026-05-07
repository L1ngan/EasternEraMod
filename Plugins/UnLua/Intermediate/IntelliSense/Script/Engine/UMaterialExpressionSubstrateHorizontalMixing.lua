---/
--- Operator nodes
---@class UMaterialExpressionSubstrateHorizontalMixing : UMaterialExpressionSubstrateBSDF
---@field public Background FExpressionInput @Substrate material
---@field public Foreground FExpressionInput @Substrate material
---@field public Mix FExpressionInput @Lerp factor between Background (Mix == 0) and Foreground (Mix == 1).
---@field public bUseParameterBlending boolean @Merge Background and Foreground into a single material by mixing their inputs rather than their evaluation. This makes lighting evaluation cheaper (Default: off)
local UMaterialExpressionSubstrateHorizontalMixing = {}

