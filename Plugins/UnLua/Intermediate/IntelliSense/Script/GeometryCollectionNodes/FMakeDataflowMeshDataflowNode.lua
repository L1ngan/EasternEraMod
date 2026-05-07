---Create a UDataflow mesh from an input UDynamicMesh and material array
---@class FMakeDataflowMeshDataflowNode : FDataflowNode
---@field private InMesh UDynamicMesh @DynamicMesh input
---@field private InMaterials TArray<UMaterialInterface> @Materials input
---@field private Mesh UDataflowMesh @DataflowMesh output
local FMakeDataflowMeshDataflowNode = {}
