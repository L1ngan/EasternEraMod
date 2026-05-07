---Describes an entire curve that is used to compute a float output value from a float input.
---@class FInterpCurveFloat
---@field public Points TArray<FInterpCurvePointFloat> @Holds the collection of interpolation points.
---@field public bIsLooped boolean @Specify whether the curve is looped or not
---@field public LoopKeyOffset number @Specify the offset from the last point's input key corresponding to the loop point
local FInterpCurveFloat = {}
