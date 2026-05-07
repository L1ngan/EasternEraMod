---A niagara graph node which represents an emitter and it's parameters.
---@class UNiagaraNodeEmitter : UNiagaraNodeWithDynamicPins
---@field private OwnerSystem UNiagaraSystem @The System that owns the emitter which is represented by this node.
---@field private EmitterHandleId FGuid @The id of the emitter handle which points to the emitter represented by this node.
---@field private DisplayName string @The display name for the title bar of this node.
---@field private ScriptType ENiagaraScriptUsage
local UNiagaraNodeEmitter = {}

