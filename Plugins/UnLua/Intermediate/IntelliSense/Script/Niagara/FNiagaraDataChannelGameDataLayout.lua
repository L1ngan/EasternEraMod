---@class FNiagaraDataChannelGameDataLayout
---@field public VariableIndices TMap<FNiagaraVariableBase, integer> @Map of all variables contained in this DataChannel data and the indices into data arrays for game data.
---@field public LwcConverters TArray<FNiagaraLwcStructConverter> @Helpers for converting LWC types into Niagara simulation SWC types.
local FNiagaraDataChannelGameDataLayout = {}
