---Sets the mesh index to use with mesh renderers
---@class UNiagaraStatelessModule_MeshIndex : UNiagaraStatelessModule
---@field public MeshIndex FNiagaraDistributionRangeInt
---@field public MeshIndexWeight TArray<number> @Weight for each potential mesh index when using a range.
local UNiagaraStatelessModule_MeshIndex = {}

---@return boolean
function UNiagaraStatelessModule_MeshIndex:NeedsMeshIndexWeights() end

