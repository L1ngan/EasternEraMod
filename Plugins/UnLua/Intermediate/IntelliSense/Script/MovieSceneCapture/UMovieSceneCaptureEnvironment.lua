---@class UMovieSceneCaptureEnvironment : UObject
local UMovieSceneCaptureEnvironment = {}

---Return true if there is any capture currently active (even in a warm-up state).
---Useful for checking whether to do certain operations in BeginPlay
---@return boolean
function UMovieSceneCaptureEnvironment.IsCaptureInProgress() end

---Get the frame number of the current capture
---@return integer
function UMovieSceneCaptureEnvironment.GetCaptureFrameNumber() end

---Get the total elapsed time of the current capture in seconds
---@return number
function UMovieSceneCaptureEnvironment.GetCaptureElapsedTime() end

---Attempt to locate a capture protocol - may not be in a capturing state
---@return UMovieSceneImageCaptureProtocolBase
function UMovieSceneCaptureEnvironment.FindImageCaptureProtocol() end

---Attempt to locate a capture protocol - may not be in a capturing state
---@return UMovieSceneAudioCaptureProtocolBase
function UMovieSceneCaptureEnvironment.FindAudioCaptureProtocol() end

