---@class FNiagaraClipboardScriptVariable
---@field public ScriptVariable UNiagaraScriptVariable
---@field public OriginalChangeId FGuid @We cache the original change Id here since deserialization of the clipboard will cause the change id to update. Using the original change id, we can identify during pasting whether we have already pasted this script variable before.
local FNiagaraClipboardScriptVariable = {}
