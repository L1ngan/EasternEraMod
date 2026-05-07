---UDataflow (UObject)
---UObject wrapper for the UE::Dataflow::FGraph
---@class UDataflow : UEdGraph
---@field public bActive boolean
---@field public Targets TArray<UObject>
---@field public Material UMaterial
---@field public Type EDataflowType
---@field public Variables FInstancedPropertyBag
---@field public PreviewCacheParams FDataflowPreviewCacheParams @Cachie params used in this asset
---@field public PreviewCacheAsset TSoftObjectPtr<UObject> @Cache asset used in this asset
---@field public PreviewBlueprintClass TSubclassOf<AActor> @Caching blueprint actor class to spawn
---@field public PreviewBlueprintTransform FTransform @Caching blueprint actor transform to spawn
---@field public PreviewGeometryCacheAsset TSoftObjectPtr<UObject> @Geometry cache asset used to extract skeletal mesh results from simulation
---@field public PreviewEmbeddedSkeletalMesh TSoftObjectPtr<UObject> @SkeletalMesh interpolated from simulation
---@field public PreviewEmbeddedStaticMesh TSoftObjectPtr<UObject> @Static Mesh interpolated from simulation
---@field private DataflowSubGraphs TArray<UDataflowSubGraph> @List of Dataflow SubGraphs In editor they also exists in the SubGraphs parent class property
local UDataflow = {}

