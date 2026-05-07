---Control the Engine TimeStep via a fixed frame rate that catches up with real time.
---  - Stays in sync with platform time.
---  - Blocks to prevent getting ahead of real time.
---  - Does not block when it needs to catch up
---  - If it falls behind too much, it will increase simulation delta times.
---@class UCatchupFixedRateCustomTimeStep : UFixedFrameRateCustomTimeStep
---@field public FrameRate FFrameRate @Desired simulation frame rate
---@field public MaxCatchupSeconds number @Maximum catchup time in seconds. Simulation will catch up instantly if it falls behind beyond this time with respect to platform time
local UCatchupFixedRateCustomTimeStep = {}

