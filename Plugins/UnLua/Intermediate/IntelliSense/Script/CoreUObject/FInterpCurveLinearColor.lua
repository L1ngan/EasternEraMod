---Describes an entire curve that is used to compute a color output value from a float input.
---@class FInterpCurveLinearColor
---@field public Points TArray<FInterpCurvePointLinearColor> @Holds the collection of interpolation points.
---@field public bIsLooped boolean @Specify whether the curve is looped or not
---@field public LoopKeyOffset number @Specify the offset from the last point's input key corresponding to the loop point
local FInterpCurveLinearColor = {}
