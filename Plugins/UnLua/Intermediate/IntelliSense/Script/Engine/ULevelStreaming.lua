---Abstract base class of container object encapsulating data required for streaming and providing
---interface for when a level should be streamed in and out of memory.
---@class ULevelStreaming : UObject
---@field protected WorldAsset TSoftObjectPtr<UWorld> @The reference to the world containing the level to load
---@field protected StreamingPriority integer @The relative priority of considering the streaming level. Changing the priority will not interrupt the currently considered level, but will affect the next time a level is being selected for evaluation.
---@field public PackageNameToLoad string @If this isn't Name_None, then we load from this package on disk to the new package named PackageName
---@field public LODPackageNames TArray<string> @LOD versions of this level
---@field public LevelTransform FTransform @Transform applied to actors after loading.
---@field public bClientOnlyVisible boolean @Applied to LoadedLevel
---@field public EditorPathOwner TWeakObjectPtr<UObject> @Applied to LoadedLevel
---@field private LevelLODIndex integer @Requested LOD. Non LOD sub-levels have Index = -1
---@field private bShouldBeVisibleInEditor boolean @Whether this level should be visible in the Editor
---@field private bShouldBeVisible boolean @Whether the level should be visible if it is loaded
---@field protected bShouldBeLoaded boolean @Whether the level should be loaded
---@field public bLocked boolean @Whether this level is locked; that is, its actors are read-only.
---@field public bIsStatic boolean @Whether this level only contains static actors that aren't affected by gameplay or replication. If true, the engine can make certain optimizations and will add this level to the StaticLevels collection.
---@field public bShouldBlockOnLoad boolean @Whether we want to force a blocking load
---@field public bShouldBlockOnUnload boolean @Whether we want to force a blocking unload
---@field public bDisableDistanceStreaming boolean @Whether this level streaming object should be ignored by world composition distance streaming, so streaming state can be controlled by other systems (ex: in blueprints)
---@field public bDrawOnLevelStatusMap boolean @If true, will be drawn on the 'level streaming status' map (STAT LEVELMAP console command)
---@field public LevelColor FLinearColor @The level color used for visualization. (Show -> Advanced -> Level Coloration)
---@field public EditorStreamingVolumes TArray<ALevelStreamingVolume> @The level streaming volumes bound to this level.
---@field public MinTimeBetweenVolumeUnloadRequests number @Cooldown time in seconds between volume-based unload requests.  Used in preventing spurious unload requests.
---@field public Keywords TArray<string> @List of keywords to filter on in the level browser
---@field public OnLevelLoaded MulticastDelegate @Called when level is streamed in
---@field public OnLevelUnloaded MulticastDelegate @Called when level is streamed out
---@field public OnLevelShown MulticastDelegate @Called when level is added to the world and is visible
---@field public OnLevelHidden MulticastDelegate @Called when level is no longer visible, may not be removed from world yet
---@field protected LoadedLevel ULevel @Pointer to Level object if currently loaded/ streamed in.
---@field protected PendingUnloadLevel ULevel @Pointer to a Level object that was previously active and was replaced with a new LoadedLevel (for LOD switching)
---@field private FolderPath string @The folder path for this level within the world browser. This is only available in editor builds.               A NONE path indicates that it exists at the root. It is '/' separated.
local ULevelStreaming = {}

---Return whether this level should be present in memory which in turn tells the
---streaming code to stream it in. Please note that a change in value from false
---to true only tells the streaming code that it needs to START streaming it in
---so the code needs to return true an appropriate amount of time before it is
---needed.
---@return boolean
function ULevelStreaming:ShouldBeLoaded() end

---Sets the should be visible flag and marks the streaming level as requiring consideration.
---@param bInShouldBeVisible boolean
function ULevelStreaming:SetShouldBeVisible(bInShouldBeVisible) end

---Virtual that can be overridden to change whether a streaming level should be loaded.
---Doesn't do anything at the base level as should be loaded defaults to true
---@param bInShouldBeLoaded boolean
function ULevelStreaming:SetShouldBeLoaded(bInShouldBeLoaded) end

---Sets the relative priority of considering the streaming level. Changing the priority will not interrupt the currently considered level, but will affect the next time a level is being selected for evaluation.
---@param NewPriority integer
function ULevelStreaming:SetPriority(NewPriority) end

---Sets the world composition level LOD index and marks the streaming level as requiring consideration.
---@param LODIndex integer
function ULevelStreaming:SetLevelLODIndex(LODIndex) end

---Sets if the streaming level should be unloaded and removed.
---@param bInIsRequestingUnloadAndRemoval boolean
function ULevelStreaming:SetIsRequestingUnloadAndRemoval(bInIsRequestingUnloadAndRemoval) end

---Returns whether level has streaming state change pending
---@return boolean
function ULevelStreaming:IsStreamingStatePending() end

---Returns whether streaming level is visible
---@return boolean
function ULevelStreaming:IsLevelVisible() end

---Returns whether streaming level is loaded
---@return boolean
function ULevelStreaming:IsLevelLoaded() end

---Gets the package name for the world asset referred to by this level streaming as an FName
---@return string
function ULevelStreaming:GetWorldAssetPackageFName() end

---Gets a pointer to the LoadedLevel value
---@return ULevel
function ULevelStreaming:GetLoadedLevel() end

---Returns the Level Script Actor of the level if the level is loaded and valid
---@return ALevelScriptActor
function ULevelStreaming:GetLevelScriptActor() end

---Returns if the streaming level has requested to be unloaded and removed.
---@return boolean
function ULevelStreaming:GetIsRequestingUnloadAndRemoval() end

---Creates a new instance of this streaming level with a provided unique instance name
---@param UniqueInstanceName string
---@return ULevelStreaming
function ULevelStreaming:CreateInstance(UniqueInstanceName) end

