---@class UAsyncNiagaraCaptureSimCache : UCancellableAsyncAction
---@field public CaptureSimCache UNiagaraSimCache
---@field public CaptureComponent UNiagaraComponent
---@field public CaptureComplete MulticastDelegate
local UAsyncNiagaraCaptureSimCache = {}

---@param bSuccess boolean
function UAsyncNiagaraCaptureSimCache:OnCaptureComplete__DelegateSignature(bSuccess) end

---Capture frames from the provided simulation into a SimCache until the simulation becomes inactive or completes.
---Capture occurs at the end of each frame with the first frame being this frame.
---CaptureRate allows you to reduce the rate of capture, i.e. a rate of 2 would capture frames 0, 2, 4, etc.
---When AdvanceSimulation is true we will manually advance the simulation until the capture is complete inside a loop, rather than reading from the component each frame.
---@param SimCache UNiagaraSimCache
---@param CreateParameters FNiagaraSimCacheCreateParameters
---@param NiagaraComponent UNiagaraComponent
---@param OutSimCache UNiagaraSimCache @[out] 
---@param CaptureRate integer @[opt] 
---@param bAdvanceSimulation boolean @[opt] 
---@param AdvanceDeltaTime number @[opt] 
---@return UAsyncNiagaraCaptureSimCache
function UAsyncNiagaraCaptureSimCache.CaptureNiagaraSimCacheUntilComplete(SimCache, CreateParameters, NiagaraComponent, OutSimCache, CaptureRate, bAdvanceSimulation, AdvanceDeltaTime) end

---Capture multiple frames from the provided simulation into a SimCache until the simulation becomes inactive, completes or we hit the NumFrames limit.
---Capture occurs at the end of each frame with the first frame being this frame.
---CaptureRate allows you to reduce the rate of capture, i.e. a rate of 2 would capture frames 0, 2, 4, etc.
---When AdvanceSimulation is true we will manually advance the simulation in a loop until we have captured the number of frames request, rather than reading from the component each frame.
---@param SimCache UNiagaraSimCache
---@param CreateParameters FNiagaraSimCacheCreateParameters
---@param NiagaraComponent UNiagaraComponent
---@param OutSimCache UNiagaraSimCache @[out] 
---@param NumFrames integer @[opt] 
---@param CaptureRate integer @[opt] 
---@param bAdvanceSimulation boolean @[opt] 
---@param AdvanceDeltaTime number @[opt] 
---@return UAsyncNiagaraCaptureSimCache
function UAsyncNiagaraCaptureSimCache.CaptureNiagaraSimCacheMultiFrame(SimCache, CreateParameters, NiagaraComponent, OutSimCache, NumFrames, CaptureRate, bAdvanceSimulation, AdvanceDeltaTime) end

---Capture a simulation cache with customizable capture parameters.
---@param SimCache UNiagaraSimCache
---@param CreateParameters FNiagaraSimCacheCreateParameters
---@param NiagaraComponent UNiagaraComponent
---@param CaptureParameters FNiagaraSimCacheCaptureParameters
---@param OutSimCache UNiagaraSimCache @[out] 
---@return UAsyncNiagaraCaptureSimCache
function UAsyncNiagaraCaptureSimCache.CaptureNiagaraSimCache(SimCache, CreateParameters, NiagaraComponent, CaptureParameters, OutSimCache) end

