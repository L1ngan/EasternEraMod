---Wrapper for array of system instance outliner data so that it can be placed in a map.
---@class FNiagaraOutlinerSystemData
---@field public SystemInstances TArray<FNiagaraOutlinerSystemInstanceData> @Map of System Instance data indexed by the UNiagaraSystem name.
---@field public AveragePerFrameTime FNiagaraOutlinerTimingData
---@field public MaxPerFrameTime FNiagaraOutlinerTimingData
---@field public AveragePerInstanceTime FNiagaraOutlinerTimingData
---@field public MaxPerInstanceTime FNiagaraOutlinerTimingData
local FNiagaraOutlinerSystemData = {}
