---Defines override data for enum parameters displayed in the UI.
---@class FNiagaraEnumParameterMetaData
---@field public OverrideName string @If specified, this name will be used for the given enum entry. Useful for shortening names.
---@field public IconOverride UTexture2D @If specified, this icon will be used for the given enum entry. If OverrideName isn't empty, the icon takes priority.
---@field public bUseColorOverride boolean
---@field public ColorOverride FLinearColor
local FNiagaraEnumParameterMetaData = {}
