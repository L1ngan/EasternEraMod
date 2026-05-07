---This is the offset for constraint
---Saves individual component (translation, rotation, scale or parent)
---Used by Constraint for saving the offset, and recovering the offset
---@class FConstraintOffset
---@field public Translation FVector
---@field public Rotation FQuat
---@field public Scale FVector
---@field public Parent FTransform
local FConstraintOffset = {}
