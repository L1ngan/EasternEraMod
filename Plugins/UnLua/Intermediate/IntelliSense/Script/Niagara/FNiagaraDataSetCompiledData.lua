---@class FNiagaraDataSetCompiledData
---@field public Variables TArray<FNiagaraVariableBase> @Variables in the data set.
---@field public VariableLayouts TArray<FNiagaraVariableLayoutInfo> @Data describing the layout of variable data.
---@field public ID FNiagaraDataSetID @Unique ID for this DataSet. Used to allow referencing from other emitters and Systems.
---@field public TotalFloatComponents integer @Total number of components of each type in the data set.
---@field public TotalInt32Components integer
---@field public TotalHalfComponents integer
---@field public bRequiresPersistentIDs boolean @Whether or not this dataset require persistent IDs.
---@field public SimTarget ENiagaraSimTarget @Sim target this DataSet is targeting (CPU/GPU).
local FNiagaraDataSetCompiledData = {}
