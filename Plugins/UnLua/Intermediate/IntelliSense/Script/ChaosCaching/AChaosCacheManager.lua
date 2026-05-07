---@class AChaosCacheManager : AActor
---@field public CacheCollection UChaosCacheCollection @The Cache Collection asset to use for this observer. This can be used for playback and record simultaneously across multiple components depending on the settings for that component.
---@field public CacheMode ECacheMode @How to use the cache - playback or record
---@field public StartMode EStartMode @How to trigger the cache record or playback, timed will start counting at BeginPlay, Triggered will begin counting from when the owning cache manager is requested to trigger the cache action
---@field public StartTime number @Defines the (random access) time that represents the rest pose of the components managed by this cache. When in Play mode, the components are set to the state provided by the caches at this evaluated time.
---@field private ObservedComponents TArray<FObservedComponent> @List of observed objects and their caches
---@field private EditorIconComponent UBillboardComponent
local AChaosCacheManager = {}

---Triggers a component to play or record.
---Searches the observed component list for an entry matching InCacheName and triggers the
---playback or recording of the linked observed component
---@param InCacheName string
function AChaosCacheManager:TriggerComponentByCache(InCacheName) end

---Triggers a component to play or record.
---If the cache manager has an observed component entry for InComponent and it is a triggered entry
---this will begin the playback or record for that component, otherwise no action is taken.
---@param InComponent UPrimitiveComponent
function AChaosCacheManager:TriggerComponent(InComponent) end

---Triggers the recording or playback of all observed components
function AChaosCacheManager:TriggerAll() end

---Expose StartTime property to Sequencer. GetStartTime will be called on keys.
---@param InStartTime number
function AChaosCacheManager:SetStartTime(InStartTime) end

---@param CurrentTime number
function AChaosCacheManager:SetCurrentTime(CurrentTime) end

---change the cache collection for this player
---if the cache is playing or recording this will have no effect
---@param InCacheCollection UChaosCacheCollection
function AChaosCacheManager:SetCacheCollection(InCacheCollection) end

---Resets the component at the specified index in the observed list back to the world space transform it had when the
---cache for it was originally recorded if one is available
---@param InIndex integer
function AChaosCacheManager:ResetSingleTransform(InIndex) end

---Resets all components back to the world space transform they had when the cache for them was originally recorded
---if one is available
function AChaosCacheManager:ResetAllComponentTransforms() end

---Enable playback for a specific component using its cache name
---@param InCacheName string
---@param bEnable boolean
function AChaosCacheManager:EnablePlaybackByCache(InCacheName, bEnable) end

---Enable playback for a specific component using its index in the list of observed component
---@param Index integer
---@param bEnable boolean
function AChaosCacheManager:EnablePlayback(Index, bEnable) end

