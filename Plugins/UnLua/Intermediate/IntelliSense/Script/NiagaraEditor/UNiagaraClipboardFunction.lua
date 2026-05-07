---@class UNiagaraClipboardFunction : UObject
---@field public FunctionName string
---@field public DisplayName string
---@field public ScriptMode ENiagaraClipboardFunctionScriptMode
---@field public Script TSoftObjectPtr<UNiagaraScript>
---@field public AssignmentTargets TArray<FNiagaraVariable>
---@field public AssignmentDefaults TArray<string>
---@field public Inputs TArray<UNiagaraClipboardFunctionInput>
---@field public OnPastedFunctionCallNodeDelegate Delegate
---@field public ScriptVersion FGuid
---@field public StackNoteData FNiagaraStackNoteData
local UNiagaraClipboardFunction = {}

---@param PastedFunctionCall UNiagaraNodeFunctionCall
function UNiagaraClipboardFunction:OnPastedFunctionCallNode__DelegateSignature(PastedFunctionCall) end

