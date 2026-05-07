---Describe a LODActor
---@class UHLODProxyDesc : UObject
---@field private SubActors TArray<string>
---@field private StaticMesh UStaticMesh
---@field private ISMComponentsDesc TArray<FHLODISMComponentDesc>
---@field private LODDrawDistance number
---@field private bOverrideMaterialMergeSettings boolean
---@field private MaterialSettings FMaterialProxySettings
---@field private bOverrideTransitionScreenSize boolean
---@field private TransitionScreenSize number
---@field private bOverrideScreenSize boolean
---@field private ScreenSize integer
---@field private Key string
---@field private LODLevel integer
---@field private LODActorTag string
---@field private Location FVector
---@field private HLODBakingTransform FTransform
---@field private SubHLODDescs TArray<TSoftObjectPtr<UHLODProxyDesc>>
local UHLODProxyDesc = {}

