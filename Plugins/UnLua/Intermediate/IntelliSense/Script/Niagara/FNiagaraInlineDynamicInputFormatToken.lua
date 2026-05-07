---Defines a single token in a format for displaying dynamic input trees inline in the UI.  These tokens can represent the
---      inputs to the dynamic input or additional text and layout options.
---@class FNiagaraInlineDynamicInputFormatToken
---@field public Usage ENiagaraInlineDynamicInputFormatTokenUsage @Defines how the value of this token should be used when formatting the dynamic input tree.
---@field public Value string @The value of this token which is used for formatting an inline dynamic input tree.  The purpose of this value is different               depending on the value of the Usage property.
local FNiagaraInlineDynamicInputFormatToken = {}
