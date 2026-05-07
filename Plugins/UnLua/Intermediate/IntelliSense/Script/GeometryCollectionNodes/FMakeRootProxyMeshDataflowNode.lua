---Create a RootProxyMesh object
---(used by geometry collection assets)
---@class FMakeRootProxyMeshDataflowNode : FDataflowNode
---@field private Mesh UStaticMesh @mesh to use as a proxy
---@field private Transform FTransform @transform to use for the proxy, relative to the asset it will be used for
---@field private RootProxyMesh FDataflowRootProxyMesh @mesh to use as a proxy
local FMakeRootProxyMeshDataflowNode = {}
