---@class FConstraintBaseParams
---@field public Stiffness number @Stiffness of the soft constraint. Only used when Soft Constraint is on.
---@field public Damping number @Damping of the soft constraint. Only used when Soft Constraint is on.
---@field public Restitution number @Controls the amount of bounce when the constraint is violated. A restitution value of 1 will bounce back with the same velocity the limit was hit. A value of 0 will stop dead.
---@field public ContactDistance number @Determines how close to the limit we have to get before turning the joint on. Larger value will be more expensive, but will do a better job not violating constraints. A smaller value will be more efficient, but easier to violate.
---@field public bSoftConstraint boolean @Whether we want to use a soft constraint (spring).
local FConstraintBaseParams = {}
