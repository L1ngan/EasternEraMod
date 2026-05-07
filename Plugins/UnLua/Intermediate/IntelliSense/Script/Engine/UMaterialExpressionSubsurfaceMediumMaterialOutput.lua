---Material output expression for setting the mean free path and scattering distribution properties of subsurface profile (for the Path Tracer Only).
---@class UMaterialExpressionSubsurfaceMediumMaterialOutput : UMaterialExpressionCustomOutput
---@field public MeanFreePath FExpressionInput @Input for mean free path (cm). Fallback to the default behavior if not set (e.g., Subsurfaceprofile shading: Use the derived MFP)
---@field public ScatteringDistribution FExpressionInput @Input for scattering distribution. Valid range is (-1, 1). Fallback to zero if not set
local UMaterialExpressionSubsurfaceMediumMaterialOutput = {}

