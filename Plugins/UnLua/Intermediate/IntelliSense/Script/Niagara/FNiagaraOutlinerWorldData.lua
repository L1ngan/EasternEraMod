---All information about a specific world for the Niagara Outliner.
---@class FNiagaraOutlinerWorldData
---@field public Systems TMap<string, FNiagaraOutlinerSystemData> @Map of System Instance data indexed by the UNiagaraSystem name.
---@field public bHasBegunPlay boolean
---@field public WorldType integer
---@field public NetMode integer
---@field public AveragePerFrameTime FNiagaraOutlinerTimingData
---@field public MaxPerFrameTime FNiagaraOutlinerTimingData
local FNiagaraOutlinerWorldData = {}
