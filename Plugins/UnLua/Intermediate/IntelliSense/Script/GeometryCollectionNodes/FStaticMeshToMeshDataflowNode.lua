---Converts a StaticMesh into a DynamicMesh
---@class FStaticMeshToMeshDataflowNode : FDataflowNode
---@field public StaticMesh UStaticMesh @StaticMesh to convert
---@field public bUseHiRes boolean @Output the HiRes representation, if set to true and HiRes doesn't exist it will output empty mesh
---@field public LODLevel integer @Specifies the LOD level to use
---@field public Mesh UDynamicMesh @Output mesh
---@field public MaterialArray TArray<UMaterialInterface> @Output materials
local FStaticMeshToMeshDataflowNode = {}
