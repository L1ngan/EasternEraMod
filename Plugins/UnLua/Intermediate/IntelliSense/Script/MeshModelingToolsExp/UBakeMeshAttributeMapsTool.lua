---Detail Map Baking Tool
---@class UBakeMeshAttributeMapsTool : UBakeMeshAttributeMapsToolBase
---@field protected InputMeshSettings UBakeInputMeshProperties @need to update bResultValid if these are modified, so we don't publicly expose them.
---@field protected Settings UBakeMeshAttributeMapsToolProperties
---@field protected ResultSettings UBakeMeshAttributeMapsResultToolProperties
---@field protected UVShellSettings UBakeUVShellMapToolProperties
local UBakeMeshAttributeMapsTool = {}

