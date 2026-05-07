---Helper structure for displaying the parameter.
---@class FEmitterDynamicParameter
---@field public ParamName string @The parameter name - from the material DynamicParameter expression. READ-ONLY
---@field public bUseEmitterTime boolean @If true, use the EmitterTime to retrieve the value, otherwise use Particle RelativeTime.
---@field public bSpawnTimeOnly boolean @If true, only set the value at spawn time of the particle, otherwise update each frame.
---@field public ValueMethod integer @Where to get the parameter value from.
---@field public bScaleVelocityByParamValue boolean @If true, scale the velocity value selected in ValueMethod by the evaluated ParamValue.
---@field public ParamValue FRawDistributionFloat @The distriubtion for the parameter value.
local FEmitterDynamicParameter = {}
