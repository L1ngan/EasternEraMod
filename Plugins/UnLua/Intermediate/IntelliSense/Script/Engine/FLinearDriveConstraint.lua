---Linear Drive
---@class FLinearDriveConstraint
---@field public PositionTarget FVector @Target position the linear drive.
---@field public VelocityTarget FVector @Target velocity the linear drive.
---@field public XDrive FConstraintDrive
---@field public YDrive FConstraintDrive
---@field public ZDrive FConstraintDrive
---@field public bAccelerationMode boolean @Whether the specified strength is acceleration or force. (default: acceleration)
local FLinearDriveConstraint = {}
