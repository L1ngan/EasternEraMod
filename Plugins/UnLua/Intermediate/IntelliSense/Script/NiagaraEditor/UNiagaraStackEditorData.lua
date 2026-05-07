---Editor only UI data for emitters.
---@class UNiagaraStackEditorData : UNiagaraEditorDataBase
---@field public bHideDisabledModules boolean
---@field private StackEntryKeyToExpandedMap TMap<string, boolean>
---@field private StackEntryKeyToInlineDisplayModeMap TMap<string, ENiagaraStackEntryInlineDisplayMode>
---@field private StackEntryKeyToExpandedOverviewMap TMap<string, boolean>
---@field private StackNotes TMap<string, FNiagaraStackNoteData>
---@field private StackEntryKeyToStatelessModuleEditorData TMap<string, FNiagaraStatelessModuleEditorData>
---@field private StackEntryKeyToDisplayName TMap<string, string>
---@field private DismissedStackIssueIds TArray<string>
local UNiagaraStackEditorData = {}

