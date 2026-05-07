---@class FCRSimLinearSpring
---@field public SubjectA integer @The first point affected by this spring
---@field public SubjectB integer @The second point affected by this spring
---@field public Coefficient number @The power of this spring
---@field public Equilibrium number @The rest length of this spring. A value of lower than zero indicates that the equilibrium should be based on the current distance of the two subjects.
local FCRSimLinearSpring = {}
