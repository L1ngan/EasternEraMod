---@class FTransformCurve : FAnimCurveBase
---@field public TranslationCurve FVectorCurve @Curve data for each transform.
---@field public RotationCurve FVectorCurve @Rotation curve - right now we use euler because quat also doesn't provide linear interpolation - curve editor can't handle quat interpolation If you hit gimbal lock, you should add extra key to fix it. This will cause gimbal lock.
---@field public ScaleCurve FVectorCurve
local FTransformCurve = {}
