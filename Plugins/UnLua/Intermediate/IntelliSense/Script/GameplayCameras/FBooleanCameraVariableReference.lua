---All camera references have:
---- Variable: a variable chosen by the user.
---- VariableID: the ID of the variable to use for this reference.
---When Variable is set, VariableID is the ID of that variable.
---When Variable is not set, VariableID is the ID of something else that
---the caller code should use, such as a camera rig parameter override.
---@class FBooleanCameraVariableReference
---@field public VariableID FCameraVariableID
---@field public Variable UBooleanCameraVariable
local FBooleanCameraVariableReference = {}
