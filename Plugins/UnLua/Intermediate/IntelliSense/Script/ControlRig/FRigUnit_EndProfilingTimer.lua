---Ends an existing profiling timer for debugging, used in conjunction with Start Profiling Timer
---@class FRigUnit_EndProfilingTimer : FRigVMFunction_DebugBaseMutable
---@field public NumberOfMeasurements integer
---@field public Prefix string
---@field public AccumulatedTime number
---@field public MeasurementsLeft integer
---@field public bIsInitialized boolean
local FRigUnit_EndProfilingTimer = {}
