---Enables composition of multiple deformer instances dynamically
---@class UOptimusDeformerDynamicInstanceManager : UMeshDeformerInstance
---@field public DefaultInstance UOptimusDeformerInstance
---@field public GuidToRigDeformerInstanceMap TMap<FGuid, UOptimusDeformerInstance>
---@field private GuidToInstanceMap TMap<FGuid, UOptimusDeformerInstance> @Guid to deformer instance map
local UOptimusDeformerDynamicInstanceManager = {}

