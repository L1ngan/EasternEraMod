---The various call sites we can call into the property access library
---@class EAnimPropertyAccessCallSite
---@field public WorkerThread_Unbatched integer
---@field public WorkerThread_Batched_PreEventGraph integer
---@field public WorkerThread_Batched_PostEventGraph integer
---@field public GameThread_Batched_PreEventGraph integer
---@field public GameThread_Batched_PostEventGraph integer
---@field public EAnimPropertyAccessCallSite_MAX integer
local EAnimPropertyAccessCallSite = {}
