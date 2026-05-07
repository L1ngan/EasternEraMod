---A capture protocol responsible for dealing with captured frames using some custom method (writing out to disk, streaming, etc)
---A typical process for capture consits of the following process:
---    Setup -> [ Warm up -> [ Capture Frame ] ] -> Begin Finalize -> [ HasFinishedProcessing ] -> Finalize
---@class UMovieSceneCaptureProtocolBase : UObject
---@field private State EMovieSceneCaptureProtocolState @The current state of the protocol
local UMovieSceneCaptureProtocolBase = {}

---Check whether we can capture a frame from this protocol
---@return boolean
function UMovieSceneCaptureProtocolBase:IsCapturing() end

---Get the current state of this capture protocol
---@return EMovieSceneCaptureProtocolState
function UMovieSceneCaptureProtocolBase:GetState() end

