---@class FNiagaraBoolParameterMetaData
---@field public DisplayMode ENiagaraBoolDisplayMode @The mode used determines the cases in which a bool parameter is displayed. If set to DisplayAlways, both True and False cases will display. If set to DisplayIfTrue, it will only display if the bool evaluates to True.
---@field public OverrideNameTrue string @If specified, this name will be used for the given bool if it evaluates to True.
---@field public OverrideNameFalse string @If specified, this name will be used for the given bool if it evaluates to False.
---@field public IconOverrideTrue UTexture2D @If specified, this icon will be used for the given bool if it evaluates to True. If OverrideName isn't empty, the icon takes priority.
---@field public IconOverrideFalse UTexture2D @If specified, this icon will be used for the given bool if it evaluates to False. If OverrideName isn't empty, the icon takes priority.
local FNiagaraBoolParameterMetaData = {}
