---Structure representing an animated scalar parameter and it's associated animation curve.
---@class FScalarMaterialParameterInfoAndCurve
---@field public ParameterInfo FMaterialParameterInfo @The material parameter info of the scalar parameter which is being animated.
---@field public ParameterCurve FMovieSceneFloatChannel @The curve which contains the animation data for the scalar parameter.
---@field public ParameterLayerName string @Editor-only name of parameter layer, if applicable
---@field public ParameterAssetName string @Editor-only name of parameter asset, if applicable
local FScalarMaterialParameterInfoAndCurve = {}
