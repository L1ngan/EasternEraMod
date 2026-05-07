---Settings for Per Element Scale in the Pattern Tool
---@class UPatternTool_ScaleSettings : UInteractiveToolPropertySet
---@field public bProportional boolean @If true, changes to Start Scale, End Scale, and Jitter are proportional along all the axes
---@field public bInterpolate boolean @If true, Scale is linearly interpolated between StartScale and Scale values
---@field public bJitter boolean @If true, Scale at each Pattern Element is offset by a uniformly chosen random value in the range of [-ScaleJitterRange, ScaleJitterRange]
---@field public StartScale FVector @Scale applied to all Pattern Elements, or to first Pattern Element for Interpolated scale
---@field public EndScale FVector @Scale applied to last Pattern Element for Interpolated scale
---@field public Jitter FVector @Upper bound of the range which is sampled to randomly scale each Pattern Element if Jitter is true
local UPatternTool_ScaleSettings = {}

