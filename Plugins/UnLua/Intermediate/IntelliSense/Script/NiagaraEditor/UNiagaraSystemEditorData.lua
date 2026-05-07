---Editor only data for systems.
---@class UNiagaraSystemEditorData : UNiagaraEditorDataBase
---@field public UserParameterHierarchy UHierarchyRoot @Contains the root ids for organizing user parameters.
---@field private RootFolder UNiagaraSystemEditorFolder
---@field private StackEditorData UNiagaraStackEditorData
---@field private OwnerTransform FTransform
---@field private PlaybackRangeMin number
---@field private PlaybackRangeMax number
---@field private PlaybackFrameRate FFrameRate
---@field private bLockPlaybackFrameRate boolean
---@field private SystemOverviewGraph UEdGraph @Graph presenting overview of the current system and its emitters.
---@field private OverviewGraphViewSettings FNiagaraGraphViewSettings
---@field private AssetViewportSettings FNiagaraPerAssetViewportSettings
---@field private bSystemIsPlaceholder boolean
---@field private UserParameterMetaData TArray<UNiagaraScriptVariable>
local UNiagaraSystemEditorData = {}

