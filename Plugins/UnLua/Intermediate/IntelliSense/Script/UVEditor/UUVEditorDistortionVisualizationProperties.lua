---Visualization settings for the UUVEditorDistortionVisualization
---@class UUVEditorDistortionVisualizationProperties : UInteractiveToolPropertySet
---@field public bVisible boolean @Should the visualization be shown.
---@field public Metric EDistortionMetric @The specific metric used to classify and visualize distortion.
---@field public bCompareToAverageDensity boolean
---@field public bRespectUDIMTextureResolutions boolean @When computing average texel density, take into account specific UDIM tile resolutions for a more accurate representation
---@field public MapSize integer
---@field public TargetTexelDensity number
---@field public PerUDIMTextureResolution TMap<integer, integer>
local UUVEditorDistortionVisualizationProperties = {}

