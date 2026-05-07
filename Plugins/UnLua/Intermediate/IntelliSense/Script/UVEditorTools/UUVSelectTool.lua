---The tool in the UV editor that secretly runs when other tools are not running. It uses the
---selection api to allow the user to select elements, and has a gizmo that can be used to
---transform these elements.
---@class UUVSelectTool : UInteractiveTool
---@field protected Targets TArray<UUVEditorToolMeshInput>
---@field protected ViewportButtonsAPI UUVToolViewportButtonsAPI
---@field protected EmitChangeAPI UUVToolEmitChangeAPI
---@field protected SelectionAPI UUVToolSelectionAPI
---@field protected SelectionMechanic UUVEditorMeshSelectionMechanic
---@field protected TransformGizmo UCombinedTransformGizmo
local UUVSelectTool = {}

