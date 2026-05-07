---Blueprints with this parent class can define general processing to apply to a dynamic mesh
---which can then be used to define procedural operations e.g. in Dataflow or other contexts
---@class UDynamicMeshProcessorBlueprint : UObject
local UDynamicMeshProcessorBlueprint = {}

---Apply some processing to change the input mesh
---@param TargetMesh UDynamicMesh
---@param bFailed boolean @[out] 
function UDynamicMeshProcessorBlueprint:ProcessDynamicMesh(TargetMesh, bFailed) end

