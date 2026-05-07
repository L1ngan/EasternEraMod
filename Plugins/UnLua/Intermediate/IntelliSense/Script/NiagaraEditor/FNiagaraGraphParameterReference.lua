---@class FNiagaraGraphParameterReference
---@field public Key FGuid
---@field public Value TWeakObjectPtr<UObject>
---@field public bIsUserFacing boolean @If false then it is just a technical reference (e.g. setting the default value)
local FNiagaraGraphParameterReference = {}
