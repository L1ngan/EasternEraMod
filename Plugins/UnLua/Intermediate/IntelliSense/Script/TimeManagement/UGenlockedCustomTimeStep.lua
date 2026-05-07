---Class to control the Engine Timestep from a Genlock signal.
---@class UGenlockedCustomTimeStep : UFixedFrameRateCustomTimeStep
---@field public bAutoDetectFormat boolean @Whether this custom time step should autodetect the video format if supported.
---@field public bWaitForBothFields boolean @When using interlace video as a custom time step, enabling this option will force the engine to wait for both fields to be received before ticking.
local UGenlockedCustomTimeStep = {}

