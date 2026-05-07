---@class UCurveEditorFFTFilter : UCurveEditorFilterBase
---@field public CutoffFrequency number @Normalized between 0-1. In a low pass filter, the lower the value is the smoother the output. In a high pass filter the higher the value the smoother the output.
---@field public Type ECurveEditorFFTFilterType @Which frequencies are allowed through. For example, low-pass will let low frequency through and remove high frequency noise.
---@field public Response ECurveEditorFFTFilterClass @Which FFT filter implementation to use.
---@field public Order integer @The number of samples used to filter in the time domain. It maps how steep the roll off is for the filter.
local UCurveEditorFFTFilter = {}

