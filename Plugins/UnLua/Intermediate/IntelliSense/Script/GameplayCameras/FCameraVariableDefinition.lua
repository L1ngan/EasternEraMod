---A structure that describes a camera variable.
---@class FCameraVariableDefinition
---@field public VariableID FCameraVariableID @The ID of the variable.
---@field public VariableType ECameraVariableType @The type of the variable.
---@field public BlendableStructType UScriptStruct @The type of a blendable struct (only valid when VariableType == BlendableStruct).
---@field public bIsPrivate boolean @Whether the variable is private. Private variables are not propagated from one table to another when interpolating or overriding a table.
---@field public bIsInput boolean @Whether the variable is an input variable. Input variables are blended during the pre-blend parameter update phase.
---@field public bAutoReset boolean @Whether the variable should auto-reset to an "unset" state after every evaluation.
---@field public VariableName string @The name of the variable, for debugging purposes.
local FCameraVariableDefinition = {}
