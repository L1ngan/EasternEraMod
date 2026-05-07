---* Add a root proxy object to an array of root proxy mesh
---* * (used by geometry collection assets)
---@class FAddRootProxyMeshToArrayDataflowNode : FDataflowNode
---@field private RootProxyMeshes TArray<FDataflowRootProxyMesh> @Root proxy array to add the mesh to
---@field private RootProxyMesh FDataflowRootProxyMesh
local FAddRootProxyMeshToArrayDataflowNode = {}
