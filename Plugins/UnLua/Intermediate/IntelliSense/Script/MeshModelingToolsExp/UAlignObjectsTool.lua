---UAlignObjectsTool transforms the input Components so that they are aligned in various ways, depending on the current settings.
---The object positions move after every change in the parameters. Currently those changes are not transacted.
---On cancel the original positions are restored, and on accept the positions are updated with a transaction.
---@class UAlignObjectsTool : UMultiSelectionMeshEditingTool
---@field public AlignProps UAlignObjectsToolProperties
local UAlignObjectsTool = {}

