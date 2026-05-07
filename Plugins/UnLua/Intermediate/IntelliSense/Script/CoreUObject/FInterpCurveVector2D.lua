---Describes an entire curve that is used to compute a 2D vector output value from a float input.
---@class FInterpCurveVector2D
---@field public Points TArray<FInterpCurvePointVector2D> @Holds the collection of interpolation points.
---@field public bIsLooped boolean @Specify whether the curve is looped or not
---@field public LoopKeyOffset number @Specify the offset from the last point's input key corresponding to the loop point
local FInterpCurveVector2D = {}
