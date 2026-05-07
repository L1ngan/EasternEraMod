---Base class for nodes that applying Geometry Script Mesh Processors
---@class FMeshProcessorDataflowNodeBase : FDataflowNode
---@field protected MeshProcessor TSubclassOf<UDynamicMeshProcessorBlueprint>
---@field protected MeshProcessorInstance UDynamicMeshProcessorBlueprint
---@field private OwningObject UObject @Remember the parent UObject so that we can properly parent MeshProcessorInstance when the MeshProcessor changes
local FMeshProcessorDataflowNodeBase = {}
