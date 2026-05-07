---@class UMaterialExpressionTemporalSobol : UMaterialExpression
---@field public Index FExpressionInput @Sobol point number. Use Const Index if not connected.
---@field public Seed FExpressionInput @2D Seed for sequence randomization (0,0)-(1,1). Use Const Seed if not connected.
---@field public ConstIndex integer @Sobol point number. Only used if Index is not connected.
---@field public ConstSeed FVector2D @2D Seed for sequence randomization. Only used if Seed is not connected.
local UMaterialExpressionTemporalSobol = {}

