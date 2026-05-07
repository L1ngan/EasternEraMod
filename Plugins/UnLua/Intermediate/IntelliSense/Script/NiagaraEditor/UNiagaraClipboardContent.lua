---@class UNiagaraClipboardContent : UObject
---@field public Functions TArray<UNiagaraClipboardFunction>
---@field public FunctionInputs TArray<UNiagaraClipboardFunctionInput>
---@field public Renderers TArray<UNiagaraClipboardRenderer>
---@field public Scripts TArray<UNiagaraScript>
---@field public ScriptVariables TArray<FNiagaraClipboardScriptVariable>
---@field public StatelessModules TArray<UObject>
---@field public ExportedNodes string @We expect nodes to be exported into this string using FEdGraphUtilities::ExportNodesToText
---@field public bFixupPasteIndexForScriptDependenciesInStack boolean @Markup MetaData to specify that if scripts are pasted from the clipboard to automatically fixup their order in the stack to satisfy dependencies.
---@field public StackNote FNiagaraStackNoteData
---@field public PortableValues TArray<FNiagaraClipboardPortableValue>
local UNiagaraClipboardContent = {}

