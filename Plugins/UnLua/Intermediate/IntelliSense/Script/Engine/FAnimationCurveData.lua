---Structure encapsulating animated curve data. Currently only contains Float and Transform curves.
---@class FAnimationCurveData
---@field public FloatCurves TArray<FFloatCurve> @Float-based animation curves
---@field public TransformCurves TArray<FTransformCurve> @FTransform-based animation curves, used for animation layer editing
local FAnimationCurveData = {}
