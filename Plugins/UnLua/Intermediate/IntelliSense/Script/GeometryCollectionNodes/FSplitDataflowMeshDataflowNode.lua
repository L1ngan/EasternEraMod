---Split a UDataflow mesh into a UDynamicMesh and a material array
---@class FSplitDataflowMeshDataflowNode : FDataflowNode
---@field private InMesh UDataflowMesh @DataflowMesh input
---@field private Mesh UDynamicMesh @DyanmicMesh output
---@field private MaterialArray TArray<UMaterialInterface> @Materials output
local FSplitDataflowMeshDataflowNode = {}
