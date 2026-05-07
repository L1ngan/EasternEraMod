---Material output expression for writing single layer water volume material properties.
---@class UMaterialExpressionSingleLayerWaterMaterialOutput : UMaterialExpressionCustomOutput
---@field public ScatteringCoefficients FExpressionInput @Input for scattering coefficient describing how light scatter around and is absorbed. Valid range is [0,+inf[. Unit is 1/cm.
---@field public AbsorptionCoefficients FExpressionInput @Input for scattering coefficient describing how light bounce is absorbed. Valid range is [0,+inf[. Unit is 1/cm.
---@field public PhaseG FExpressionInput @Input for phase function 'g' parameter describing how much forward(g>0) or backward (g<0) light scatter around. Valid range is [-1,1].
---@field public ColorScaleBehindWater FExpressionInput @Input for custom color multiplier for scene color behind water. Can be used for caustics textures etc. Defaults to 1.0. Valid range is [0,+inf[.
local UMaterialExpressionSingleLayerWaterMaterialOutput = {}

