---Create a geometry collection from an asset
---@class FBlueprintToCollectionDataflowNode_v2 : FDataflowNode
---@field private Blueprint UBlueprint @Asset input
---@field private bSplitComponents boolean @Split components
---@field private Collection FManagedArrayCollection @Geometry collection newly created
---@field private Materials TArray<UMaterialInterface> @Material instances array from the static mesh
---@field private InstancedMeshes TArray<FGeometryCollectionAutoInstanceMesh> @Array of instanced meshes
---@field private RootProxyMeshes TArray<FDataflowRootProxyMesh> @corresponding source proxies
local FBlueprintToCollectionDataflowNode_v2 = {}
