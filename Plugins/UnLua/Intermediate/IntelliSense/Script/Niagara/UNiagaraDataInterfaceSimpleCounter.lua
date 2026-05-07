---Thread safe counter starts at the initial value on start / reset.
---When operating between CPU & GPU ensure you set the appropriate sync mode.
---@class UNiagaraDataInterfaceSimpleCounter : UNiagaraDataInterfaceRWBase
---@field public GpuSyncMode ENiagaraGpuSyncMode @Select how we should synchronize the counter between Cpu & Gpu
---@field public InitialValue integer @This is the value the counter will have when the instance is reset / created.
local UNiagaraDataInterfaceSimpleCounter = {}

