---The World is the top level object representing a map or a sandbox in which Actors and Components will exist and be rendered.
---A World can be a single Persistent Level with an optional list of streaming levels that are loaded and unloaded via volumes and blueprint functions
---or it can be a collection of levels organized with a World Composition.
---In a standalone game, generally only a single World exists except during seamless area transitions when both a destination and current world exists.
---In the editor many Worlds exist: The level being edited, each PIE instance, each editor tool which has an interactive rendered viewport, and many more.
---@class UWorld : UObject
---@field public Layers TArray<ULayer> @List of all the layers referenced by the world's actors
---@field public ActiveGroupActors TArray<AActor> @Group actors currently "active"
---@field public ThumbnailInfo UThumbnailInfo @Information for thumbnail rendering
---@field public PersistentLevel ULevel @Persistent level containing the world info, default brush and actors spawned during gameplay among other things
---@field public NetDriver UNetDriver @The NAME_GameNetDriver game connection(s) for client/server communication
---@field public NetworkManager AGameNetworkManager @Instance of this world's game-specific networking management
---@field public PhysicsCollisionHandler UPhysicsCollisionHandler @Instance of this world's game-specific physics collision handler
---@field public PhysicsQueryHandler UPhysicsQueryHandler @Instance of this world's game-specific physics query handler
---@field public ExtraReferencedObjects TArray<UObject> @Array of any additional objects that need to be referenced by this world, to make sure they aren't GC'd
---@field public PerModuleDataObjects TArray<UObject> @External modules can have additional data associated with this UWorld. This is a list of per module world data objects. These aren't loaded/saved by default.
---@field private StreamingLevels TArray<ULevelStreaming> @Level collection. ULevels are referenced by FName (Package name) to avoid serialized references. Also contains offsets in world units
---@field private StreamingLevelsToConsider FStreamingLevelsToConsider @This is the list of streaming levels that are actively being considered for what their state should be. It will be a subset of StreamingLevels
---@field private ServerStreamingLevelsVisibility AServerStreamingLevelsVisibility
---@field public StreamingLevelsPrefix string @Prefix we used to rename streaming levels, non empty in PIE and standalone preview
---@field private LineBatchers ULineBatchComponent @Line Batchers. Persistent types don't get flushed every frame.
---@field private MakingVisibleLevels TArray<ULevel> @Level(s) in the queue to be made visible.
---@field private MakingInvisibleLevels TArray<ULevel> @Level(s) in the queue to be made invisible.
---@field private DemoNetDriver UDemoNetDriver @NetDriver for capturing network traffic to record demos
---@field public MyParticleEventManager AParticleEventManager @Particle event manager *
---@field private DefaultPhysicsVolume APhysicsVolume @DefaultPhysicsVolume used for whole game *
---@field public bAreConstraintsDirty boolean @Keeps track whether actors moved via PostEditMove and therefore constraint syncup should be performed.
---@field private NavigationSystem UNavigationSystemBase @The world's navigation data manager
---@field private AuthorityGameMode AGameModeBase @The current GameMode, valid only on the server
---@field private GameState AGameStateBase @The replicated actor which contains game state information that can be accessible to clients. Direct access is not allowed, use GetGameState<>()
---@field private AISystem UAISystemBase @The AI System handles generating pathing information and AI behavior
---@field private AvoidanceManager UAvoidanceManager @RVO avoidance manager used by game
---@field private Levels TArray<ULevel> @Array of levels currently in this world. Not serialized to disk to avoid hard references.
---@field private LevelCollections TArray<FLevelCollection> @Array of level collections currently in this world.
---@field private CurrentLevel ULevel @Pointer to the current level being edited. Level has to be in the Levels array and == PersistentLevel in the game.
---@field private OwningGameInstance UGameInstance
---@field private ParameterCollectionInstances TArray<UMaterialParameterCollectionInstance> @Parameter collection instances that hold parameter overrides for this world.
---@field private CanvasForRenderingToTarget UCanvas @Canvas object used for drawing to render targets from blueprint functions eg DrawMaterialToRenderTarget. This is cached as UCanvas creation takes >100ms.
---@field private CanvasForDrawMaterialToRenderTarget UCanvas
---@field public EditorViews TArray<FLevelViewportInfo> @Saved editor viewport states - one for each view type. Indexed using ELevelViewportType from UnrealEdTypes.h.
---@field public PhysicsField UPhysicsFieldComponent @Physics Field component.
---@field private ComponentsThatNeedPreEndOfFrameSync TSet<UActorComponent> @Array of components that need to wait on tasks before end of frame updates
---@field private ComponentsThatNeedEndOfFrameUpdate TArray<UActorComponent> @Array of components that need updates at the end of the frame
---@field private ComponentsThatNeedEndOfFrameUpdate_OnGameThread TArray<UActorComponent> @Array of components that need game thread updates at the end of the frame
---@field private SelectedLevels TArray<ULevel> @Array of selected levels currently in this world. Not serialized to disk to avoid hard references.
---@field public WorldComposition UWorldComposition @All levels information from which our world is composed
---@field public ContentBundleManager UContentBundleManager
---@field private PSCPool FWorldPSCPool
local UWorld = {}

---Returns the AWorldSettings actor associated with this world.
---@return AWorldSettings
function UWorld:K2_GetWorldSettings() end

---Called from DemoNetDriver when playing back a replay and the timeline is successfully scrubbed
function UWorld:HandleTimelineScrubbed() end

---Returns the UDataLayerManager associated with this world.
---@return UDataLayerManager
function UWorld:GetDataLayerManager() end

---@return number
function UWorld:GetTimeSeconds() end
