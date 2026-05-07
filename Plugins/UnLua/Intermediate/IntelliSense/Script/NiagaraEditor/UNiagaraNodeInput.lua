---@class UNiagaraNodeInput : UNiagaraNode
---@field public Input FNiagaraVariable
---@field public Usage ENiagaraInputNodeUsage
---@field public CallSortPriority integer @Controls where this input is relative to others in the calling node.
---@field public ExposureOptions FNiagaraInputExposureOptions @Controls this inputs exposure to callers.
---@field private DataInterface UNiagaraDataInterface
---@field private ObjectAsset UObject
local UNiagaraNodeInput = {}

