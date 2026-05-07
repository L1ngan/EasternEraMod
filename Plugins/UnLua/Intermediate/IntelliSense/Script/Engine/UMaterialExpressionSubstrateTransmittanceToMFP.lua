---@class UMaterialExpressionSubstrateTransmittanceToMFP : UMaterialExpressionSubstrateUtilityBase
---@field public TransmittanceColor FExpressionInput @The colored transmittance for a view perpendicular to the surface. The transmittance for other view orientations will automatically be deduced according to surface thickness.
---@field public Thickness FExpressionInput @Thickness of the layer in centimeter. Default value: 0.01cm. Example of use case: this node output called thickness can be modulated before it is plugged in a Vertical Layering node Thickness input. This can be used to achieve simple scattering/transmittance variation of the same material.
local UMaterialExpressionSubstrateTransmittanceToMFP = {}

