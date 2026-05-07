---Describes an entire curve that is used to compute two 3D vector values from a float input.
---@class FInterpCurveTwoVectors
---@field public Points TArray<FInterpCurvePointTwoVectors> @Holds the collection of interpolation points.
---@field public bIsLooped boolean @Specify whether the curve is looped or not
---@field public LoopKeyOffset number @Specify the offset from the last point's input key corresponding to the loop point
local FInterpCurveTwoVectors = {}
