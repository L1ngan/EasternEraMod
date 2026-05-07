---An audio slider widget with customizable curves.
---@class UAudioSlider : UAudioSliderBase
---@field public LinToOutputCurve TWeakObjectPtr<UCurveFloat> @Curves for mapping linear to output values.
---@field public OutputToLinCurve TWeakObjectPtr<UCurveFloat>
local UAudioSlider = {}

