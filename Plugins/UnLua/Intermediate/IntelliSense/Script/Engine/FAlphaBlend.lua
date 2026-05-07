---Alpha Blend class that supports different blend options as well as custom curves
---@class FAlphaBlend
---@field private CustomCurve UCurveFloat @If you're using Custom BlendOption, you can specify curve
---@field private BlendTime number @Blend Time
---@field private BlendOption EAlphaBlendOption @Type of blending used (Linear, Cubic, etc.)
local FAlphaBlend = {}
