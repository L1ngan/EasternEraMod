---@class UMaterialExpressionSphereMask : UMaterialExpression
---@field public A FExpressionInput @1 to 4 dimensional vector, should be the same type as B
---@field public B FExpressionInput @1 to 4 dimensional vector, should be the same type as A
---@field public Radius FExpressionInput @Defaults to 'AttenuationRadius' if not specified
---@field public Hardness FExpressionInput @Defaults to 'HardnessPercent' if not specified
---@field public AttenuationRadius number @in the unit that A and B are measured
---@field public HardnessPercent number @in percent 0%=soft .. 100%=hard
local UMaterialExpressionSphereMask = {}

