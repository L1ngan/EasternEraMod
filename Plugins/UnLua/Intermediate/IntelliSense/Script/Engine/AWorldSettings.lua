---Actor containing all script accessible world properties.
---@class AWorldSettings : AInfo
---@field public VisibilityCellSize integer @World space size of precomputed visibility cells in x and y. Smaller sizes produce more effective occlusion culling at the cost of increased runtime memory usage and lighting build times.
---@field public VisibilityAggressiveness integer @Determines how aggressive precomputed visibility should be. More aggressive settings cull more objects but also cause more visibility errors like popping.
---@field public bPrecomputeVisibility boolean @Whether to place visibility cells inside Precomputed Visibility Volumes and along camera tracks in this level. Precomputing visibility reduces rendering thread time at the cost of some runtime memory and somewhat increased lighting build times.
---@field public bPlaceCellsOnlyAlongCameraTracks boolean @Whether to place visibility cells only along camera tracks or only above shadow casting surfaces.
---@field public bEnableWorldBoundsChecks boolean @If true, enables CheckStillInWorld checks
---@field protected bEnableNavigationSystem boolean
---@field protected bEnableAISystem boolean @if set to false AI system will not get created. Use it to disable all AI-related activity on a map
---@field public bEnableWorldComposition boolean @Enables tools for composing a tiled world. Level has to be saved and all sub-levels removed before enabling this option.
---@field public bUseClientSideLevelStreamingVolumes boolean @Enables client-side streaming volumes instead of server-side. Expected usage scenario: server has all streaming levels always loaded, clients independently stream levels in/out based on streaming volumes.
---@field public bEnableWorldOriginRebasing boolean @World origin will shift to a camera position when camera goes far away from current origin
---@field public bWorldGravitySet boolean @if set to true, when we call GetGravityZ we assume WorldGravityZ has already been initialized and skip the lookup of DefaultGravityZ and GlobalGravityZ
---@field public bGlobalGravitySet boolean @If set to true we will use GlobalGravityZ instead of project setting DefaultGravityZ
---@field public bMinimizeBSPSections boolean @Causes the BSP build to generate as few sections as possible. This is useful when you need to reduce draw calls but can reduce texture streaming efficiency and effective lightmap resolution. Note - changes require a rebuild to propagate.  Also, be sure to select all surfaces and make sure they all have the same flags to minimize section count.
---@field public bForceNoPrecomputedLighting boolean @Whether to force lightmaps and other precomputed lighting to not be created even when the engine thinks they are needed. This is useful for improving iteration in levels with fully dynamic lighting and shadowing. Note that any lighting and shadowing interactions that are usually precomputed will be lost if this is enabled.
---@field public bForceVolumetricLightmapsOnly boolean @Force precomputed lighting to only use VolumetricLightmaps.
---@field public bHighPriorityLoading boolean @when this flag is set, more time is allocated to background loading (replicated)
---@field public bHighPriorityLoadingLocal boolean @copy of bHighPriorityLoading that is not replicated, for clientside-only loading operations
---@field public bOverrideDefaultBroadphaseSettings boolean
---@field public bGenerateSingleClusterForLevel boolean @If set to true, all eligible actors in this level will be added to a single cluster representing the entire level (used for small sublevels)
---@field public bAllowTimeDilation boolean @Allows game logic to temporarily disable all forms of time dilation (when using GetEffectiveTimeDilation(). When false, logic is still allowed to set time dilation values, but their values will be ignored when calling GetEffectiveTimeDilation() until this is set back to true. Transient because it's used for temporary overrides and shouldn't be saved/loaded from level packages. Not replicated because in multiplayer a server should modify the real time dilation, instead of ignoring it on a client (which will lead to position desyncs due to delta time mismatches).
---@field public bHideEnableStreamingWarning boolean @if set to true, this hide the streaming disabled warning available in the viewport
---@field public bIncludeGridSizeInNameForFoliageActors boolean @Whether Foliage actors of this world contain their grid size in their name. This should only be changed by UWorldPartitionFoliageBuilder or when creating new worlds so that older worlds are unaffected and is used by the UActorPartitionSubsystem to find existing foliage actors by name.
---@field public bIncludeGridSizeInNameForPartitionedActors boolean @Whether partitioned actors of this world contain their grid size in their name. This should only be changed when creating new worlds so that older worlds are unaffected and is used by the UActorPartitionSubsystem to find existing foliage actors by name.
---@field public bReuseAddressAndPort boolean @Whether to configure the listening socket to allow reuse of the address and port. If this is true, be sure no other servers can run on the same port, otherwise this can lead to undefined behavior since packets will go to two servers.
---@field public AISystemClass TSoftClassPtr<UAISystemBase>
---@field public LevelInstancePivotOffset FVector @Additional transform applied when applying LevelStreaming Transform to LevelInstance
---@field protected NavigationSystemConfig UNavigationSystemConfig @Holds parameters for NavigationSystem's creation. Set to Null will result     in NavigationSystem instance not being created for this world. Note that     if set NavigationSystemConfigOverride will be used instead.
---@field protected NavigationSystemConfigOverride UNavigationSystemConfig @Overrides NavigationSystemConfig.
---@field protected WorldPartition UWorldPartition
---@field public InstancedFoliageGridSize integer @Size of the grid for instanced foliage actors, only used for partitioned worlds
---@field public bShowInstancedFoliageGrid boolean
---@field public LandscapeSplineMeshesGridSize integer
---@field public NavigationDataChunkGridSize integer @Size of the grid for navigation data chunk actors
---@field public NavigationDataBuilderLoadingCellSize integer @Loading cell size used when building navigation data iteratively. The actual cell size used will be rounded using the NavigationDataChunkGridSize. It's recommended to use a value as high as the hardware memory allows to load.
---@field public DefaultPlacementGridSize integer @Default size of the grid for placed elements from the editor
---@field public BaseNavmeshDataLayers TArray<UDataLayerAsset> @A list of runtime data layers that should be included in the base navmesh. Editor data layers and actors outside data layers will be included.
---@field public WorldToMeters number @scale of 1uu to 1m in real world measurements, for HMD and other physically tracked devices (e.g. 1uu = 1cm would be 100.0)
---@field public KillZ number @any actor falling below this level gets destroyed
---@field public KillZDamageType TSubclassOf<UDamageType> @The type of damage inflicted when a actor falls below KillZ
---@field public WorldGravityZ number @current gravity actually being used
---@field public GlobalGravityZ number @Set a custom gravity value for this level, in distance units per second squared. For example, when the project's distance unit is set to centimeters (the default), normal earth gravity would be -980.0.
---@field public DefaultPhysicsVolumeClass TSubclassOf<ADefaultPhysicsVolume> @level specific default physics volume
---@field public PhysicsCollisionHandlerClass TSubclassOf<UPhysicsCollisionHandler> @optional level specific collision handler
---@field public DefaultGameMode TSubclassOf<AGameModeBase> @The default GameMode to use when starting this map in the game. If this value is NULL, the INI setting for default game type is used.
---@field public GameNetworkManagerClass TSubclassOf<AGameNetworkManager> @Class of GameNetworkManager to spawn for network games
---@field public PackedLightAndShadowMapTextureSize integer @Maximum size of textures for packed light and shadow maps
---@field public DefaultColorScale FVector @Default color scale for the level
---@field public DefaultMaxDistanceFieldOcclusionDistance number @Max occlusion distance used by mesh distance fields, overridden if there is a movable skylight.
---@field public GlobalDistanceFieldViewDistance number @Distance from the camera that the global distance field should cover.
---@field public DynamicIndirectShadowsSelfShadowingIntensity number @Controls the intensity of self-shadowing from capsule indirect shadows. These types of shadows use approximate occluder representations, so reducing self-shadowing intensity can hide those artifacts.
---@field public LightmassSettings FLightmassWorldInfoSettings @LIGHTMASS RELATED SETTINGS *
---@field public VolumetricLightmapLoadingRange number @Range in which volumetric lightmaps will be loaded.
---@field public NaniteSettings FNaniteSettings @NANITE SETTINGS *
---@field public DefaultReverbSettings FReverbSettings @Default reverb settings used by audio volumes.
---@field public DefaultAmbientZoneSettings FInteriorSettings @Default interior settings applied to sounds that have "apply ambient volumes" set to true on their SoundClass.
---@field public DefaultBaseSoundMix USoundMix @Default Base SoundMix.
---@field public HLODSetupAsset TSoftClassPtr<UHierarchicalLODSetup> @If set overrides the level settings and global project settings
---@field public OverrideBaseMaterial TSoftObjectPtr<UMaterialInterface> @If set overrides the project-wide base material used for Proxy Materials
---@field protected HierarchicalLODSetup TArray<FHierarchicalSimplification> @Hierarchical LOD Setup
---@field public NumHLODLevels integer
---@field public HLODBakingTransform FTransform @Specify the transform to apply to the source meshes when building HLODs.
---@field public BookMarks UBookMark
---@field public TimeDilation number @Normally 1 - scales real time passage. Warning - most use cases should use GetEffectiveTimeDilation() instead of reading from this directly
---@field public CinematicTimeDilation number @Additional time dilation used by Sequencer slomo track.  Transient because this is often temporarily modified by the editor when previewing slow motion effects, yet we don't want it saved or loaded from level packages.
---@field public DemoPlayTimeDilation number @Additional TimeDilation used to control demo playback speed
---@field public MinGlobalTimeDilation number @Lowest acceptable global time dilation.
---@field public MaxGlobalTimeDilation number @Highest acceptable global time dilation.
---@field public MinCinematicTimeDilation number @Lowest acceptable cinematic time dilation.
---@field public MaxCinematicTimeDilation number @Highest acceptable cinematic time dilation.
---@field public MinUndilatedFrameTime number @Smallest possible frametime, not considering dilation. Equiv to 1/FastestFPS.
---@field public MaxUndilatedFrameTime number @Largest possible frametime, not considering dilation. Equiv to 1/SlowestFPS.
---@field public BroadphaseSettings FBroadphaseSettings
---@field public ReplicationViewers TArray<FNetViewer> @valid only during replication - information about the player(s) being replicated to (there could be more than one in the case of a splitscreen client)
---@field protected AssetUserData TArray<UAssetUserData> @Array of user data stored with the asset
---@field protected AssetUserDataEditorOnly TArray<UAssetUserData> @Array of editor-only user data stored with the asset
---@field protected PauserPlayerState APlayerState @If paused, PlayerState of person pausing the game.
---@field protected DefaultWorldPartitionSettings FWorldPartitionPerWorldSettings
---@field private MaxNumberOfBookmarks integer @Maximum number of bookmarks allowed. Changing this will change the allocation of the bookmarks array, and when shrinking may cause some bookmarks to become eligible for GC.
---@field private DefaultBookmarkClass TSubclassOf<UBookmarkBase> @Class that will be used when creating new bookmarks. Old bookmarks may be recreated with the new class where possible.
---@field private BookmarkArray TArray<UBookmarkBase>
---@field private LastBookmarkClass TSubclassOf<UBookmarkBase> @Tracked so we can detect changes from Config
---@field private DefaultBookmark UBookmarkBase @Bookmark that will be applied when the level is loaded in the editor.
local AWorldSettings = {}

function AWorldSettings:OnRep_WorldGravityZ() end

function AWorldSettings:OnRep_NaniteSettings() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function AWorldSettings:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function AWorldSettings:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function AWorldSettings:AddAssetUserDataOfClass(InUserDataClass) end

