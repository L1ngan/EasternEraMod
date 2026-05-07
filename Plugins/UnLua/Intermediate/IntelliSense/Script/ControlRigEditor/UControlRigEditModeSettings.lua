---Settings object used to show useful information in the details panel
---@class UControlRigEditModeSettings : UObject
---@field public bDisplayHierarchy boolean @Whether to show all bones in the hierarchy
---@field public bDisplayNulls boolean @Whether to show all nulls in the hierarchy
---@field public bDisplaySockets boolean @Should we show sockets in the viewport
---@field public bHideControlShapes boolean @Should we always hide control shapes in viewport
---@field public bShowAllProxyControls boolean @Should we always hide control shapes in viewport
---@field public bShowControlsAsOverlay boolean @Determins if controls should be rendered on top of other controls
---@field public DrivenControlColor FLinearColor @Indicates a control being driven by a proxy control
---@field public bDisplayAxesOnSelection boolean @Should we show axes for the selected elements
---@field public AxisScale number @The scale for axes to draw on the selection
---@field public bCoordSystemPerWidgetMode boolean @If true we restore the coordinate space when changing Widget Modes in the Viewport
---@field public bOnlySelectRigControls boolean @If true we can only select Rig Controls in the scene not other Actors.
---@field public bLocalTransformsInEachLocalSpace boolean @If true when we transform multiple selected objects in the viewport they each transforms along their own local transform space
---@field public GizmoScale number @The scale for Gizmos
---@field public LastInViewportTweenWidgetLocation FVector2D
local UControlRigEditModeSettings = {}

