---Raw Curve data for serialization
---@class FRawCurveTracks
---@field public FloatCurves TArray<FFloatCurve>
---@field public VectorCurves TArray<FVectorCurve> @                      Note that it doesn't have UPROPERTY tag yet. In the future, we'd like this to be serialized, but not for now
---@field public TransformCurves TArray<FTransformCurve> @
local FRawCurveTracks = {}
