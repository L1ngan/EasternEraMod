---Tool that allows for blocky boolean operations on an orientable power-of-two grid.
---@class UCubeGridTool : UInteractiveTool
---@field protected GridGizmo UCombinedTransformGizmo
---@field protected GridGizmoAlignmentMechanic UDragAlignmentMechanic
---@field protected GridGizmoTransformProxy UTransformProxy
---@field protected LineSets UPreviewGeometry
---@field protected ClickDragBehavior UClickDragInputBehavior
---@field protected HoverBehavior UMouseHoverBehavior
---@field protected CtrlMiddleClickBehavior ULocalSingleClickInputBehavior
---@field protected MiddleClickDragBehavior ULocalClickDragInputBehavior
---@field protected Settings UCubeGridToolProperties @Properties, etc
---@field protected ToolActions UCubeGridToolActions
---@field protected MaterialProperties UNewMeshMaterialProperties
---@field protected OutputTypeProperties UCreateMeshObjectTypeProperties
---@field protected Target UToolTarget @Existing asset to modify, if one was selected
---@field protected Preview UMeshOpPreviewWithBackgroundCompute
local UCubeGridTool = {}

