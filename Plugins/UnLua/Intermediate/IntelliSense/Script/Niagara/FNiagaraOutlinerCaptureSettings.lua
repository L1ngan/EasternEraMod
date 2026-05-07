---@class FNiagaraOutlinerCaptureSettings
---@field public bTriggerCapture boolean @Press to trigger a single capture of Niagara data from the connected debugger client.
---@field public CaptureDelayFrames integer @How many frames to delay capture. If gathering performance data, this is how many frames will be collected.
---@field public bGatherPerfData boolean
---@field public SimCacheCaptureFrames integer @How many frames capture when capturing a sim cache.
local FNiagaraOutlinerCaptureSettings = {}
