---@class FNiagaraMeshMaterialOverride
---@field public ExplicitMat UMaterialInterface @Use this UMaterialInterface if set to a valid value. This will be subordinate to UserParamBinding if it is set to a valid user variable.
---@field public UserParamBinding FNiagaraUserParameterBinding @Use the UMaterialInterface bound to this user variable if it is set to a valid value. If this is bound to a valid value and ExplicitMat is also set, UserParamBinding wins.
local FNiagaraMeshMaterialOverride = {}
