---Recording of multiple frames of simulation data from a running Niagara system.
---Can be used to play back the captured recording or to inspect the captured data for debug purposes.
---Depending on the capture settings, not all attributes from the simulation are present in the cache.
---To capture a cache, either
---(1) use the baker tool in the system editor,
---(2) use the Niagara component cache track in sequencer or
---(3) manually capture a running system with the "CaptureNiagaraSimCache" Blueprint functions
---@class UNiagaraSimCache : UObject
---@field private CacheGuid FGuid
---@field private SoftNiagaraSystem TSoftObjectPtr<UNiagaraSystem>
---@field private StartSeconds number
---@field private DurationSeconds number
---@field private CreateParameters FNiagaraSimCacheCreateParameters
---@field private bNeedsReadComponentMappingRecache boolean
---@field private CachedScriptVMIds TArray<FNiagaraVMExecutableDataId>
---@field private CacheLayout FNiagaraSimCacheLayout
---@field private CacheFrames TArray<FNiagaraSimCacheFrame>
---@field private DataInterfaceStorage TMap<FNiagaraVariableBase, UObject>
---@field private DebugData UNiagaraSimCacheDebugData
local UNiagaraSimCache = {}

---Reads Niagara Vec3 attributes by name from the cache frame and appends them into the OutValues array.
---EmitterName - If left blank will return the system simulation attributes.
---@param OutValues TArray_FVector_ @[out] 
---@param AttributeName string
---@param EmitterName string
---@param FrameIndex integer @[opt] 
function UNiagaraSimCache:ReadVectorAttribute(OutValues, AttributeName, EmitterName, FrameIndex) end

---Reads Niagara Vec4 attributes by name from the cache frame and appends them into the OutValues array.
---EmitterName - If left blank will return the system simulation attributes.
---@param OutValues TArray_FVector4_ @[out] 
---@param AttributeName string
---@param EmitterName string
---@param FrameIndex integer @[opt] 
function UNiagaraSimCache:ReadVector4Attribute(OutValues, AttributeName, EmitterName, FrameIndex) end

---Reads Niagara Vec2 attributes by name from the cache frame and appends them into the OutValues array.
---EmitterName - If left blank will return the system simulation attributes.
---@param OutValues TArray_FVector2D_ @[out] 
---@param AttributeName string
---@param EmitterName string
---@param FrameIndex integer @[opt] 
function UNiagaraSimCache:ReadVector2Attribute(OutValues, AttributeName, EmitterName, FrameIndex) end

---Reads Niagara Quaternion attributes by name from the cache frame and appends them into the OutValues array.
---Only attributes that in the rebase list will be transform into the provided Quat space.  Therefore the cache
---must be captured with rebasing enabled to have any impact.
---EmitterName - If left blank will return the system simulation attributes.
---@param OutValues TArray_FQuat_ @[out] 
---@param Quat FQuat
---@param AttributeName string @[opt] 
---@param EmitterName string @[opt] 
---@param FrameIndex integer @[opt] 
function UNiagaraSimCache:ReadQuatAttributeWithRebase(OutValues, Quat, AttributeName, EmitterName, FrameIndex) end

---Reads Niagara Quaternion attributes by name from the cache frame and appends them into the OutValues array.
---Local space emitters provide data at local rotation unless bLocalSpaceToWorld is true.
---EmitterName - If left blank will return the system simulation attributes.
---LocalSpaceToWorld - Caches are always stored in the emitters space, i.e. local or world space.  You can set this to false if you want the local Quat rather than the world Quat.
---@param OutValues TArray_FQuat_ @[out] 
---@param AttributeName string @[opt] 
---@param EmitterName string @[opt] 
---@param bLocalSpaceToWorld boolean @[opt] 
---@param FrameIndex integer @[opt] 
function UNiagaraSimCache:ReadQuatAttribute(OutValues, AttributeName, EmitterName, bLocalSpaceToWorld, FrameIndex) end

---Reads Niagara Position attributes by name from the cache frame and appends them into the OutValues array.
---All attributes read with this method will be re-based from the captured space into the provided transform space,
---this will occur even if the cache was not captured with re-basing enabled.
---EmitterName - If left blank will return the system simulation attributes.
---@param OutValues TArray_FVector_ @[out] 
---@param Transform FTransform
---@param AttributeName string @[opt] 
---@param EmitterName string @[opt] 
---@param FrameIndex integer @[opt] 
function UNiagaraSimCache:ReadPositionAttributeWithRebase(OutValues, Transform, AttributeName, EmitterName, FrameIndex) end

---Reads Niagara Position attributes by name from the cache frame and appends them into the OutValues array.
---Local space emitters provide data at local locations unless bLocalSpaceToWorld is true.
---EmitterName - If left blank will return the system simulation attributes.
---LocalSpaceToWorld - Caches are always stored in the emitters space, i.e. local or world space.  You can set this to false if you want the local position rather than the world position.
---@param OutValues TArray_FVector_ @[out] 
---@param AttributeName string @[opt] 
---@param EmitterName string @[opt] 
---@param bLocalSpaceToWorld boolean @[opt] 
---@param FrameIndex integer @[opt] 
function UNiagaraSimCache:ReadPositionAttribute(OutValues, AttributeName, EmitterName, bLocalSpaceToWorld, FrameIndex) end

---Reads Niagara int attributes by name from the cache frame and appends them into the OutValues array.
---EmitterName - If left blank will return the system simulation attributes.
---@param OutValues TArray_integer_ @[out] 
---@param AttributeName string
---@param EmitterName string
---@param FrameIndex integer @[opt] 
function UNiagaraSimCache:ReadIntAttribute(OutValues, AttributeName, EmitterName, FrameIndex) end

---Reads Niagara ID attributes by name from the cache frame and appends them into the OutValues array.
---EmitterName - If left blank will return the system simulation attributes.
---@param OutValues TArray_FNiagaraID_ @[out] 
---@param AttributeName string
---@param EmitterName string
---@param FrameIndex integer @[opt] 
function UNiagaraSimCache:ReadIDAttribute(OutValues, AttributeName, EmitterName, FrameIndex) end

---Reads Niagara float attributes by name from the cache frame and appends them into the OutValues array.
---EmitterName - If left blank will return the system simulation attributes.
---@param OutValues TArray_number_ @[out] 
---@param AttributeName string
---@param EmitterName string
---@param FrameIndex integer @[opt] 
function UNiagaraSimCache:ReadFloatAttribute(OutValues, AttributeName, EmitterName, FrameIndex) end

---Reads data interface data from the cache as the requested type.
---This method will return nullptr if the attribute does not exists or the requests type is not supported by the storage type.
---@param RequestedType TSubclassOf_UObject_
---@param AttributeName string
---@param FrameIndex integer @[opt] 
---@return UObject
function UNiagaraSimCache:ReadDataInterfaceAs(RequestedType, AttributeName, FrameIndex) end

---Reads Niagara Color attributes by name from the cache frame and appends them into the OutValues array.
---EmitterName - If left blank will return the system simulation attributes.
---@param OutValues TArray_FLinearColor_ @[out] 
---@param AttributeName string @[opt] 
---@param EmitterName string @[opt] 
---@param FrameIndex integer @[opt] 
function UNiagaraSimCache:ReadColorAttribute(OutValues, AttributeName, EmitterName, FrameIndex) end

---An empty cache contains no frame data and can not be used
---@return boolean
function UNiagaraSimCache:IsEmpty() end

---A valid cache is one that contains at least 1 frames worth of data.
---@return boolean
function UNiagaraSimCache:IsCacheValid() end

---Get the time the simulation was at when recorded.
---@return number
function UNiagaraSimCache:GetStartSeconds() end

---Get number of frames stored in the cache.
---@return integer
function UNiagaraSimCache:GetNumFrames() end

---Get number of emitters stored inside the cache.
---@return integer
function UNiagaraSimCache:GetNumEmitters() end

---Returns a list of emitters we have captured in the SimCache.
---@return TArray_string_
function UNiagaraSimCache:GetEmitterNames() end

---Get the emitter name at the provided index.
---@param EmitterIndex integer
---@return string
function UNiagaraSimCache:GetEmitterName(EmitterIndex) end

---How were the attributes captured for this sim cache.
---@return ENiagaraSimCacheAttributeCaptureMode
function UNiagaraSimCache:GetAttributeCaptureMode() end

