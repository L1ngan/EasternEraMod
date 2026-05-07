---Messaged broadcast from debugger to request a connection to a particular session.
---If any matching client is found and it accepts, it will return a FNiagaraDebuggerAcceptConnection message to the sender.
---@class FNiagaraDebuggerRequestConnection
---@field public SessionId FGuid
---@field public InstanceId FGuid
local FNiagaraDebuggerRequestConnection = {}
