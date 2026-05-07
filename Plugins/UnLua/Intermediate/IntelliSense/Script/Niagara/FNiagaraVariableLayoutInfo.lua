---Helper class defining the layout and location of an FNiagaraVariable in an FNiagaraDataBuffer->
---@class FNiagaraVariableLayoutInfo
---@field private FloatComponentStart integer @Start index for the float components in the main buffer.
---@field private Int32ComponentStart integer @Start index for the int32 components in the main buffer.
---@field private HalfComponentStart integer @Start index for the half components in the main buffer.
---@field public LayoutInfo FNiagaraTypeLayoutInfo @This variable's type layout info.
local FNiagaraVariableLayoutInfo = {}
