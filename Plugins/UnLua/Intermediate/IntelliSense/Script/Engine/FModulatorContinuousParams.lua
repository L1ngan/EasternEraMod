---@class FModulatorContinuousParams
---@field public ParameterName string @The name of the sound instance parameter that specifies the current value.
---@field public Default number @The default value to be used if the parameter is not found.
---@field public MinInput number @The minimum input value. Values will be clamped to the [MinInput, MaxInput] range.
---@field public MaxInput number @The maximum input value. Values will be clamped to the [MinInput, MaxInput] range.
---@field public MinOutput number @The minimum output value. The input value will be scaled from the range [MinInput, MaxInput] to [MinOut, MaxOutput]
---@field public MaxOutput number @The maximum output value. The input value will be scaled from the range [MinInput, MaxInput] to [MinOut, MaxOutput]
---@field public ParamMode integer @The mode with which to treat the input value
local FModulatorContinuousParams = {}
