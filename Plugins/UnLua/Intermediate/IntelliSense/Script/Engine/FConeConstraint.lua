---Cone constraint
---@class FConeConstraint : FConstraintBaseParams
---@field public Swing1LimitDegrees number @Angle of movement along the XY plane. This defines the first symmetric angle of the cone.
---@field public Swing2LimitDegrees number @Angle of movement along the XZ plane. This defines the second symmetric angle of the cone.
---@field public Swing1Motion integer @Indicates whether the Swing1 limit is used.
---@field public Swing2Motion integer @Indicates whether the Swing2 limit is used.
local FConeConstraint = {}
