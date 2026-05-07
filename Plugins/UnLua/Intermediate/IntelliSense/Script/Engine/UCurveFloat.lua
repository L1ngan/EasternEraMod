---@class UCurveFloat : UCurveBase
---@field public FloatCurve FRichCurve @Keyframe data
---@field public bIsEventCurve boolean @Flag to represent event curve
local UCurveFloat = {}

---Evaluate this float curve at the specified time
---@param InTime number
---@return number
function UCurveFloat:GetFloatValue(InTime) end

