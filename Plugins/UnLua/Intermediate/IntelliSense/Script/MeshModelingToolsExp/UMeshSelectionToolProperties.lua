---@class UMeshSelectionToolProperties : UInteractiveToolPropertySet
---@field public SelectionMode EMeshSelectionToolPrimaryMode @The Selection Mode defines the behavior of the selection brush
---@field public AngleTolerance number @Angle in Degrees used for Angle-based Selection Modes
---@field public bHitBackFaces boolean @Allow the brush to hit back-facing parts of the surface
---@field public bShowPoints boolean @Toggle drawing of highlight points on/off
---@field public FaceColorMode EMeshFacesColorMode @Color each triangle based on the selected mesh attribute
local UMeshSelectionToolProperties = {}

