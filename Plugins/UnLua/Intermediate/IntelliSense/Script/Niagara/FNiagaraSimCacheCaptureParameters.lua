---@class FNiagaraSimCacheCaptureParameters
---@field public bAppendToSimCache boolean @When enabled we will append to the existing simulation cache rather than destroying the existing contents.
---@field public bCaptureFixedNumberOfFrames boolean @When enabled we capture NumFrames number of frames, otherwise the capture will continue until cancelled or the simulation is complete.
---@field public NumFrames integer @The max number of frames to capture. The capture will stop when the simulation completes or we have rendered this many frames, whichever happens first. Set to 0 to capture until simulation completes.
---@field public CaptureRate integer @Allows for reducing the frequency of captured frames in relation to the simulation's frames. The ratio is 1 / CaptureRate, so a CaptureRate of 2 would captures frames 0, 2, 4, etc.
---@field public bUseTimeout boolean @When enabled the capture will time out if we reach the defined number of frames without anything new to capture.
---@field public TimeoutFrameCount integer @When we fail to capture a new frame after this many frames the capture will complete automatically.
---@field public bCaptureAllFramesImmediatly boolean @When enabled we will capture all the requested frames immediatly. This will capture the simulation outside of the main work tick, i.e. if you request a 10 frame capture we will loop capturing 10 frames on the capture call rather than over 10 world ticks.
---@field public ImmediateCaptureDeltaTime number @The delta time in seconds to use when manually advancing the simulation.Defaults to 1 / 60th of a second(0.01666).
local FNiagaraSimCacheCaptureParameters = {}
