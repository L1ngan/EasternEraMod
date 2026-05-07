---The brush select tool allows for brush selection of triangles on the unwrap or the live
--- preview.
---@class UUVEditorBrushSelectTool : UInteractiveTool
---@field private Targets TArray<UUVEditorToolMeshInput>
---@field private EmitChangeAPI UUVToolEmitChangeAPI
---@field private SelectionAPI UUVToolSelectionAPI
---@field private LivePreviewAPI UUVToolLivePreviewAPI
---@field private LivePreviewBehaviorSet UInputBehaviorSet
---@field private LivePreviewBehaviorSource ULocalInputBehaviorSource
---@field private Settings UUVEditorBrushSelectToolProperties
---@field private UnwrapBrushIndicator UBrushStampIndicator
---@field private LivePreviewBrushIndicator UBrushStampIndicator
local UUVEditorBrushSelectTool = {}

