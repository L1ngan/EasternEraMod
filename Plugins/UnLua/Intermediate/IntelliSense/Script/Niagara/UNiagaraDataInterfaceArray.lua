---@class UNiagaraDataInterfaceArray : UNiagaraDataInterfaceRWBase
---@field public GpuSyncMode ENiagaraGpuSyncMode @How to do we want to synchronize modifications to the array data.
---@field public MaxElements integer @When greater than 0 sets the maximum number of elements the array can hold, only relevant when using operations that modify the array size.
local UNiagaraDataInterfaceArray = {}

