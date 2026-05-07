---@class UCurveVector : UCurveBase
---@field public FloatCurves FRichCurve @Keyframe data, one curve for X, Y and Z
local UCurveVector = {}

---Evaluate this float curve at the specified time
---@param InTime number
---@return FVector
function UCurveVector:GetVectorValue(InTime) end

