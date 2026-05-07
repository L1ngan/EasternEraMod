---@class FConstraintDrive
---@field public Stiffness number @The spring strength of the drive. Force proportional to the position error. In force mode the unit is kg * cm / s^-2. In acceleration mode the unit is cm / s^-2.
---@field public Damping number @The damping strength of the drive. Force proportional to the velocity error. In force mode the unit is kg * cm / s^-1. In acceleration mode the unit is cm / s^-1.
---@field public MaxForce number @The force limit of the drive.
---@field public bEnablePositionDrive boolean @Enables/Disables position drive (orientation if using angular drive)
---@field public bEnableVelocityDrive boolean @Enables/Disables velocity drive (angular velocity if using angular drive)
local FConstraintDrive = {}
