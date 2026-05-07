---@class UCurveLinearColor : UCurveBase
---@field public FloatCurves FRichCurve @Keyframe data, one curve for red, green, blue, and alpha
---@field public AdjustHue number @Properties for adjusting the color of the gradient
---@field public AdjustSaturation number
---@field public AdjustBrightness number
---@field public AdjustBrightnessCurve number
---@field public AdjustVibrance number
---@field public AdjustMinAlpha number
---@field public AdjustMaxAlpha number
local UCurveLinearColor = {}

---@param InTime number
---@return FLinearColor
function UCurveLinearColor:GetUnadjustedLinearColorValue(InTime) end

---@param InTime number
---@return FLinearColor
function UCurveLinearColor:GetLinearColorValue(InTime) end

---@param InTime number
---@return FLinearColor
function UCurveLinearColor:GetClampedLinearColorValue(InTime) end

