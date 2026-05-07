---Extension of the base parameter store to allow the user in the editor to use variable names without
---the "User." namespace prefix. The names without the prefix just redirect to the original variables, it is just done
---for better usability.
---@class FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore
---@field private UserParameterRedirects TMap<FNiagaraVariable, FNiagaraVariable> @Map from the variables with shortened display names to the original variables with the full namespace
local FNiagaraUserRedirectionParameterStore = {}
