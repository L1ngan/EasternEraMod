---An exposed camera rig parameter that drives a specific parameter on one of
---its camera nodes.
---@class UCameraObjectInterfaceBlendableParameter : UCameraObjectInterfaceParameterBase
---@field public ParameterType ECameraVariableType @The type of this parameter.
---@field public BlendableStructType UScriptStruct @The struct type of this parameter if it is a blendable struct.
---@field public bIsPreBlended boolean @Whether this parameter's value should be pre-blended. Pre-blending means that if two blending camera rigs share this parameter, each of their values will be blended in a first evaluation pass, and then both camera rigs will evaluate with the same blended value.
---@field public PrivateVariableID FCameraVariableID @The ID to use to access the underlying variable value in the variable table.
local UCameraObjectInterfaceBlendableParameter = {}

