---@class UMaterialExpressionReflectionVectorWS : UMaterialExpression
---@field public CustomWorldNormal FExpressionInput @Defaults to Reflection Vector if not specified
---@field public bNormalizeCustomWorldNormal boolean @(true): The specified world normal will be normalized. (false): WorldNormal will just be used as is, faster but possible artifacts if normal length isn't 1
local UMaterialExpressionReflectionVectorWS = {}

