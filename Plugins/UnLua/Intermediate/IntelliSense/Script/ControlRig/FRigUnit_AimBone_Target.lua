---@class FRigUnit_AimBone_Target
---@field public Weight number @The amount of aim rotation to apply on this target.
---@field public Axis FVector @The axis to align with the aim on this target
---@field public Target FVector @The target to aim at - can be a direction or location based on the Kind setting
---@field public Kind EControlRigVectorKind @The kind of target this is representing - can be a direction or a location
---@field public Space string @The space in which the target is expressed
local FRigUnit_AimBone_Target = {}
