---@class FHairBendConstraint
---@field public SolveBend boolean @Enable the solve of the bend constraint during the xpbd loop
---@field public ProjectBend boolean @Enable ther projection of the bend constraint after the xpbd loop
---@field public BendDamping number @Damping for the bend constraint between 0 and 1
---@field public BendStiffness number @Stiffness for the bend constraint in GPa
---@field public BendScale FRuntimeFloatCurve @This curve determines how much the bend stiffness will be scaled along each strand.   The X axis range is [0,1], 0 mapping the root and 1 the tip
local FHairBendConstraint = {}
