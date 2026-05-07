---@class FRigUnit_AimConstraint_WorldUp
---@field public Target FVector @The target to aim at - can be a direction or location based on the Kind setting
---@field public Kind EControlRigVectorKind @The kind of target this is representing - can be a direction or a location
---@field public Space FRigElementKey @The space in which the target is expressed, use None to indicate world space
local FRigUnit_AimConstraint_WorldUp = {}
