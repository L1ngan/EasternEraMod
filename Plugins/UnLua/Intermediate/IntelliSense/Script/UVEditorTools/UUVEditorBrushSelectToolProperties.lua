---@class UUVEditorBrushSelectToolProperties : UInteractiveToolPropertySet
---@field public bClearSelectionOnEachDrag boolean @When true, each drag will clear the existing selection if neither Shift (add to selection) nor  Ctrl (remove from selection) nor both (toggle selection) are pressed. When false, selection  will not clear, requiring manual removal from selection using Ctrl.
---@field public bExpandToIslands boolean @When true, brush selects whole UV islands instead of individual triangles.
---@field public UnwrapBrushRadius number @Radius of the brush in the 2D UV unwrap view.
---@field public LivePreviewBrushRadius number @Radius of the brush in the 3D live preview view.
local UUVEditorBrushSelectToolProperties = {}

