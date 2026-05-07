---A Level is a collection of Actors (lights, volumes, mesh instances etc.).
---Multiple Levels can be loaded and unloaded into the World to create a streaming experience.
---@class ULevel : UObject
---@field public bUseExternalActors boolean @Use external actors, new actor spawned in this level will be external and existing external actors will be loaded on load.
---@field public OwningWorld UWorld @The World that has this level in its Levels array. This is not the same as GetOuter(), because GetOuter() for a streaming level is a vestigial world that is not used. It should not be accessed during BeginDestroy(), just like any other UObject references, since GC may occur in any order.
---@field public Model UModel @BSP UModel.
---@field public ModelComponents TArray<UModelComponent> @BSP Model components used for rendering.
---@field public ActorCluster ULevelActorContainer
---@field public LevelScriptBlueprint ULevelScriptBlueprint @Reference to the blueprint for level scripting
---@field public TextureStreamingResourceGuids TArray<FGuid> @The Guid list of all materials and meshes Guid used in the last texture streaming build. Used to know if the streaming data needs rebuild. Only used for the persistent level.
---@field public NumTextureStreamingUnbuiltComponents integer @Num of components missing valid texture streaming data. Updated in map check.
---@field public NumTextureStreamingDirtyResources integer @Num of resources that have changed since the last texture streaming build. Updated in map check.
---@field public LevelScriptActor ALevelScriptActor @The level scripting actor, created by instantiating the class from LevelScriptBlueprint.  This handles all level scripting
---@field public NavListStart ANavigationObjectBase @Start and end of the navigation list for this level, used for quickly fixing up when streaming this level in/out. @@TODO DEPRECATED - DELETE
---@field public NavListEnd ANavigationObjectBase
---@field public NavDataChunks TArray<UNavigationDataChunk> @Navigation related data that can be stored per level
---@field public LightmapTotalSize number @Total number of KB used for lightmap textures in the level.
---@field public ShadowmapTotalSize number @Total number of KB used for shadowmap textures in the level.
---@field public StaticNavigableGeometry TArray<FVector> @threes of triangle vertices - AABB filtering friendly. Stored if there's a runtime need to rebuild navigation that accepts BSPs     as well - it's a lot easier this way than retrieve this data at runtime
---@field public StreamingTextureGuids TArray<FGuid> @The Guid of each streamable texture refered by FStreamingTextureBuildInfo::TextureLevelIndex
---@field public StreamingTextures TArray<string> @The name of each streamable texture referred by FStreamingTextureBuildInfo::TextureLevelIndex
---@field public PackedTextureStreamingQualityLevelFeatureLevel integer @Packed quality level and feature level used when building texture streaming data. This is used by runtime to determine if built data can be used or not.
---@field public LevelBuildDataId FGuid @Identifies map build data specific to this level, eg lighting volume samples.
---@field public MapBuildData UMapBuildDataRegistry @Registry for data from the map build.  This is stored in a separate package from the level to speed up saving / autosaving. ReleaseRenderingResources must be called before changing what is referenced, to update the rendering thread state.
---@field public LightBuildLevelOffset FIntVector @Level offset at time when lighting was built
---@field public bIsLightingScenario boolean @Whether the level is a lighting scenario.  Lighting is built separately for each lighting scenario level with all other scenario levels hidden. Only one lighting scenario level should be visible at a time for correct rendering, and lightmaps from that level will be used on the rest of the world. Note: When a lighting scenario level is present, lightmaps for all streaming levels are placed in the scenario's _BuildData package.              This means that lightmaps for those streaming levels will not be streamed with them.
---@field public bTextureStreamingRotationChanged boolean @Whether a level transform rotation was applied since the texture streaming builds. Invalidates the precomputed streaming bounds.
---@field public bStaticComponentsRegisteredInStreamingManager boolean @Whether the level has finished registering all static components in the streaming manager. Once a level static components are registered, all new components need to go through the dynamic path. This flag is used to direct the registration to the right path with a low perf impact.
---@field public bIsVisible boolean @Whether the level is currently visible/ associated with the world. If false, may not yet be fully removed from the world.
---@field public bLocked boolean @Whether this level is locked; that is, its actors are read-only     Used by WorldBrowser to lock a level when corresponding ULevelStreaming does not exist
---@field public bIsPartitioned boolean @Whether the level is partitioned or not.
---@field public LevelSimplification FLevelSimplificationDetails @Level simplification settings for each LOD
---@field public LevelColor FLinearColor @The level color used for visualization. (Show -> Advanced -> Level Coloration) Used only in world composition mode
---@field public bPromptWhenAddingToLevelBeforeCheckout boolean
---@field public bPromptWhenAddingToLevelOutsideBounds boolean
---@field public ActorPackagingScheme EActorPackagingScheme
---@field private WorldSettings AWorldSettings
---@field private WorldDataLayers AWorldDataLayers
---@field private WorldPartitionRuntimeCell TSoftObjectPtr<UWorldPartitionRuntimeCell>
---@field protected AssetUserData TArray<UAssetUserData> @Array of user data stored with the asset
---@field private DestroyedReplicatedStaticActors TArray<FReplicatedStaticActorDestructionInfo> @List of replicated static actors that have been destroyed. Used by net drivers to replicate destruction to clients.
---@field private bUseActorFolders boolean @Use actor folder objects, actor folders of this level will be persistent in their own object.
---@field private ActorFolders TMap<FGuid, UActorFolder> @Actor folder objects. They can either be saved inside level or in their own package.
---@field private FolderLabelToActorFolders TMap<string, FActorFolderSet> @Acceleration table used to find an ActorFolder object for a given folder path.
---@field private LoadedExternalActorFolders TArray<UActorFolder> @Temporary array containing actor folder objects manually loaded from their external packages (only used while loading the level).
---@field private EditorPathOwner TWeakObjectPtr<UObject>
local ULevel = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function ULevel:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function ULevel:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function ULevel:AddAssetUserDataOfClass(InUserDataClass) end

