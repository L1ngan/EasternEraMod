---Control the Engine TimeStep via a fixed frame rate.
---Philosophy:
---  * Quantized increments but keeping up with platform time.
---  * FApp::GetDeltaTime
---      - Forced to a multiple of the desired FrameTime.
---  * FApp::GetCurrentTime
---      - Incremented in multiples of the desired FrameTime.
---      - Corresponds to platform time minus any fractional FrameTime.
---@class UGenlockedFixedRateCustomTimeStep : UGenlockedCustomTimeStep
---@field public FrameRate FFrameRate @Desired frame rate
---@field public bShouldBlock boolean @Indicates that this custom time step should block to enforce the specified frame rate. Set to false if this is enforced elsewhere.
---@field public bForceSingleFrameDeltaTime boolean @When true, delta time will always be 1/FrameRate, regardless of how much real time has elapsed
local UGenlockedFixedRateCustomTimeStep = {}

