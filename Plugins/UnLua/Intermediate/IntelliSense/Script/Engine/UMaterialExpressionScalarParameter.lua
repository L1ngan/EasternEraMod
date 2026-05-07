---@class UMaterialExpressionScalarParameter : UMaterialExpressionParameter
---@field public DefaultValue number
---@field public bUseCustomPrimitiveData boolean
---@field public PrimitiveDataIndex integer
---@field public SliderMin number @Sets the lower bound for the slider on this parameter in the material instance editor.
---@field public SliderMax number @Sets the upper bound for the slider on this parameter in the material instance editor. The slider will be disabled if SliderMax <= SliderMin.
local UMaterialExpressionScalarParameter = {}

