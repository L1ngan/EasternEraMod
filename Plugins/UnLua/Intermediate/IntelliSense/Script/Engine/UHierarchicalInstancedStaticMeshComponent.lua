---@class UHierarchicalInstancedStaticMeshComponent : UInstancedStaticMeshComponent
---@field public bUseTranslatedInstanceSpace boolean @If true then we allow a translated space when building the cluster tree. This can help for implementations (foliage) where we can have instances with offsets to large for single float precision.
---@field public TranslatedInstanceSpaceOrigin FVector @Origin of the translated space used when building the cluster tree.
---@field public SortedInstances TArray<integer> @Table for remapping instances from cluster tree to PerInstanceSMData order
---@field public NumBuiltInstances integer @The number of instances in the ClusterTree. Subsequent instances will always be rendered.
---@field public BuiltInstanceBounds FBox @Bounding box of any built instances (cached from the ClusterTree)
---@field public UnbuiltInstanceBounds FBox @Bounding box of any unbuilt instances
---@field public UnbuiltInstanceBoundsList TArray<FBox> @Bounds of each individual unbuilt instance, used for LOD calculation
---@field public bEnableDensityScaling boolean @Enable for detail meshes that don't really affect the game. Disable for anything important. Typically, this will be enabled for small meshes without collision (e.g. grass) and disabled for large meshes with collision (e.g. trees)
---@field public OcclusionLayerNumNodes integer @The number of nodes in the occlusion layer
---@field public CacheMeshExtendedBounds FBoxSphereBounds @The last mesh bounds that was cache
---@field public InstanceCountToRender integer @Instances to render (including removed one until the build is complete)
local UHierarchicalInstancedStaticMeshComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UHierarchicalInstancedStaticMeshComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UHierarchicalInstancedStaticMeshComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UHierarchicalInstancedStaticMeshComponent:AddAssetUserDataOfClass(InUserDataClass) end

