---@class UISMEditorTool : UInteractiveTool
---@field public ClickOrDragBehavior USingleClickOrDragInputBehavior
---@field public RectangleMarqueeMechanic URectangleMarqueeMechanic
---@field protected TransformProps UISMEditorToolProperties
---@field protected ToolActions UISMEditorToolActionPropertySet
---@field protected ReplaceAction UISMEditorToolReplacePropertySet
---@field protected TargetComponents TArray<UInstancedStaticMeshComponent>
---@field protected ActiveGizmos TArray<FISMEditorTarget>
---@field protected PreviewGeometry UPreviewGeometry
local UISMEditorTool = {}

