---Converts BSP brushes to static meshes.
---Known limitations:
---- Preview does not respond to property changes in the brush detail panel while the tool is running. User would need
---  to create some event that does change the preview (such as tool property change, or selection change).
---- BSP brushes with non-manifold geometry (specifically, the stair brushes) cannot be used with the "Convert, then combine"
---  path because boolean operations do not allow them. The user gets properly notified of this if it comes up.
---@class UBspConversionTool : UInteractiveTool
---@field public Settings UBspConversionToolProperties
---@field public ToolActions UBspConversionToolActionPropertySet
---@field protected PreviewMesh UPreviewMesh
local UBspConversionTool = {}

