---Angular Drive
---@class FAngularDriveConstraint
---@field public TwistDrive FConstraintDrive @Controls the twist (roll) constraint drive between current orientation/velocity and target orientation/velocity. This is available as long as the twist limit is set to free or limited.
---@field public SwingDrive FConstraintDrive @Controls the cone constraint drive between current orientation/velocity and target orientation/velocity. This is available as long as there is at least one swing limit set to free or limited.
---@field public SlerpDrive FConstraintDrive @Controls the SLERP (spherical lerp) drive between current orientation/velocity and target orientation/velocity. NOTE: This is only available when all three angular limits are either free or limited. Locking any angular limit will turn off the drive implicitly.
---@field public OrientationTarget FRotator @Target orientation relative to the the body reference frame.
---@field public AngularVelocityTarget FVector @Target angular velocity relative to the body reference frame in revolutions per second.
---@field public AngularDriveMode integer @Whether motors use SLERP (spherical lerp) or decompose into a Swing motor (cone constraints) and Twist motor (roll constraints). NOTE: SLERP will NOT work if any of the angular constraints are locked.
---@field public bAccelerationMode boolean @Whether to use acceleration mode for angular drive. The other option is force mode. (default:true)
local FAngularDriveConstraint = {}
