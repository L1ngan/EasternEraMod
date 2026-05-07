---@class FHairStretchConstraint
---@field public SolveStretch boolean @Enable the solve of the stretch constraint during the xpbd loop
---@field public ProjectStretch boolean @Enable ther projection of the stretch constraint after the xpbd loop
---@field public StretchDamping number @Damping for the stretch constraint between 0 and 1
---@field public StretchStiffness number @Stiffness for the stretch constraint in GPa
---@field public StretchScale FRuntimeFloatCurve @This curve determines how much the stretch stiffness will be scaled along each strand.   The X axis range is [0,1], 0 mapping the root and 1 the tip
local FHairStretchConstraint = {}
