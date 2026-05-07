---Material output expression for setting absorption properties of thin translucent materials.
---@class UMaterialExpressionThinTranslucentMaterialOutput : UMaterialExpressionCustomOutput
---@field public TransmittanceColor FExpressionInput @Input for the transmittance color for a view perpendicular to the surface. Valid range is [0,1].
---@field public SurfaceCoverage FExpressionInput @Input for the surface coverage of both the thin surface part and the material on top (controled using Opacity input of the graph root node). Valid range is [0,1].
local UMaterialExpressionThinTranslucentMaterialOutput = {}

