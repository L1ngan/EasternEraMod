---N-to-1 Detail Map Baking Tool
---@class UBakeMultiMeshAttributeMapsTool : UBakeMeshAttributeMapsToolBase
---@field protected Settings UBakeMultiMeshAttributeMapsToolProperties @need to update bResultValid if these are modified, so we don't publicly expose them.
---@field protected InputMeshSettings UBakeMultiMeshInputToolProperties
---@field protected ResultSettings UBakeMeshAttributeMapsResultToolProperties
local UBakeMultiMeshAttributeMapsTool = {}

