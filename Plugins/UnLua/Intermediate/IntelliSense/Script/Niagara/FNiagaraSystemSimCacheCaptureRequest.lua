---Message sent from the debugger to a client to request a sim cache capture for a particular component.
---@class FNiagaraSystemSimCacheCaptureRequest
---@field public ComponentName string @Name of the component we're going to capture.
---@field public CaptureDelayFrames integer @How many frames to delay capture.
---@field public CaptureFrames integer @How many frames to capture.
local FNiagaraSystemSimCacheCaptureRequest = {}
