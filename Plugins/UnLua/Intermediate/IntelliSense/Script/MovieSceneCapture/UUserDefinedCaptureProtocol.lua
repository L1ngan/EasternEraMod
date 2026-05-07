---A blueprintable capture protocol that defines how to capture frames from the engine
---@class UUserDefinedCaptureProtocol : UMovieSceneImageCaptureProtocolBase
---@field protected World UWorld @World pointer assigned on Setup
local UUserDefinedCaptureProtocol = {}

---Instruct this protocol to stop capturing LDR final pixels
function UUserDefinedCaptureProtocol:StopCapturingFinalPixels() end

---Instruct this protocol to start capturing LDR final pixels (including slate widgets and burn-ins)
---@param StreamID FCapturedPixelsID
function UUserDefinedCaptureProtocol:StartCapturingFinalPixels(StreamID) end

---* Resolve the specified buffer and pass it directly to the specified handler when done (does not pass to any bound streams)
---*
---* @@param Buffer          The desired buffer to save
---* @@param BufferID        The ID of this buffer that is passed to the pixel handler (e.g. a composition pass name).
---@param Buffer UTexture
---@param BufferID FCapturedPixelsID
function UUserDefinedCaptureProtocol:ResolveBuffer(Buffer, BufferID) end

---Called when the capture process is warming up. Protocols may transition from either an initialized, or capturing state to warm-up
function UUserDefinedCaptureProtocol:OnWarmUp() end

---Called after the capture process itself is ticked, after the frame is set up for capture, but before most actors have ticked
function UUserDefinedCaptureProtocol:OnTick() end

---Called when this protocol should start capturing frames
function UUserDefinedCaptureProtocol:OnStartCapture() end

---Called once at the start of the capture process, but before any warmup frames
---@return boolean
function UUserDefinedCaptureProtocol:OnSetup() end

---Called before the capture process itself is ticked, before each frame is set up for capture
---Useful for any pre-frame set up or resetting the previous frame's state
function UUserDefinedCaptureProtocol:OnPreTick() end

---Called when pixels have been received for the specified stream name
---@param Pixels FCapturedPixels
---@param ID FCapturedPixelsID
---@param FrameMetrics FFrameMetrics
function UUserDefinedCaptureProtocol:OnPixelsReceived(Pixels, ID, FrameMetrics) end

---Called when this protocol should temporarily stop capturing frames
function UUserDefinedCaptureProtocol:OnPauseCapture() end

---Called to complete finalization of this protocol
function UUserDefinedCaptureProtocol:OnFinalize() end

---Called when this protocol should capture the current frame
function UUserDefinedCaptureProtocol:OnCaptureFrame() end

---Called to check whether this protocol has finished any pending tasks, and can now be shut down
---@return boolean
function UUserDefinedCaptureProtocol:OnCanFinalize() end

---Called when this protocol is going to be shut down - should not capture any more frames
function UUserDefinedCaptureProtocol:OnBeginFinalize() end

---Access this protocol's current frame metrics
---@return FFrameMetrics
function UUserDefinedCaptureProtocol:GetCurrentFrameMetrics() end

---Generate a filename for the current frame
---@param InFrameMetrics FFrameMetrics
---@return string
function UUserDefinedCaptureProtocol:GenerateFilename(InFrameMetrics) end

