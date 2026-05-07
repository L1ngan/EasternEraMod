---@class FCRSimPointConstraint
---@field public Type ECRSimConstraintType @The type of the constraint
---@field public SubjectA integer @The first point affected by this constraint
---@field public SubjectB integer @The (optional) second point affected by this constraint This is currently only used for the distance constraint
---@field public DataA FVector @The first data member for the constraint.
---@field public DataB FVector @The second data member for the constraint.
local FCRSimPointConstraint = {}
