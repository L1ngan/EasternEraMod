---Data interface for handling latent (delayed 1 frame) traces against the scene for GPU simulations.
---@class UNiagaraDataInterfaceAsyncGpuTrace : UNiagaraDataInterface
---@field public MaxTracesPerParticle integer @The maximum number of traces (per particle) that can be created per frame.  Defines the size of the preallocated               buffer that is used to contain the traces.
---@field public MaxRetraces integer @If a collision is rejected, how many times do we attempt to retrace from that collision point forward to find a new, valid collision.
---@field public TraceProvider integer @Defines which technique is used to resolve the trace - see 'AsyncGpuTraceDI/Provider Priority' in the Niagara project settings.
local UNiagaraDataInterfaceAsyncGpuTrace = {}

