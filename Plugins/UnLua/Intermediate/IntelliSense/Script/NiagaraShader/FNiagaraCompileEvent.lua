---Records necessary information to give UI cues for errors/logs/warnings during compile.
---@class FNiagaraCompileEvent
---@field public Severity FNiagaraCompileEventSeverity @Whether or not this is an error, warning, or info
---@field public Message string @The message itself
---@field public ShortDescription string @A short, optional description of the event.
---@field public NodeGuid FGuid @The node guid that generated the compile event
---@field public PinGuid FGuid @The pin persistent id that generated the compile event
---@field public StackGuids TArray<FGuid> @The compile stack frame of node id's
---@field public Source FNiagaraCompileEventSource @The source of the compile event for partial invalidation purposes.
local FNiagaraCompileEvent = {}
