---This helps create a 3D transform gizmo that can be used to adjust fracture placement
---Note it is tailored to UFractureToolCutterBase, and expects Setup(), Shutdown()
---and ResetGizmo() to be called on tool setup, shutdown, and selection change respectively
---@class UFractureTransformGizmoSettings : UFractureToolSettings
---@field public bUseGizmo boolean @Use a 3D rigid transform gizmo to place the fracture pattern.  Only supports grouped fracture.
---@field public bCenterOnSelection boolean @Recenter the gizmo to the center of the selection when selection changes
---@field public bShowUseGizmoOption boolean
---@field public TransformGizmo UCombinedTransformGizmo
---@field public TransformProxy UTransformProxy
---@field protected AttachedCutter UFractureToolCutterBase
---@field protected UsedToolsContext UInteractiveToolsContext @the tools context responsible for the gizmo
local UFractureTransformGizmoSettings = {}

