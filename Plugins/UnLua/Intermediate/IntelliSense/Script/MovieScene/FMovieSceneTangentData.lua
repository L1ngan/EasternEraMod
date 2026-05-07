---Tangents for curve channel control points.
---@class FMovieSceneTangentData
---@field public ArriveTangent number @If RCIM_Cubic, the arriving tangent at this key
---@field public LeaveTangent number @If RCIM_Cubic, the leaving tangent at this key
---@field public ArriveTangentWeight number @If RCTWM_WeightedArrive or RCTWM_WeightedBoth, the weight of the left tangent
---@field public LeaveTangentWeight number @If RCTWM_WeightedLeave or RCTWM_WeightedBoth, the weight of the right tangent
---@field public TangentWeightMode integer @If RCIM_Cubic, the tangent weight mode
local FMovieSceneTangentData = {}
