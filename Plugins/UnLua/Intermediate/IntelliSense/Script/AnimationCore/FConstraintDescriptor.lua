---Constraint data container. It contains union of Constraints and node will contain array of these.
---These are the one contained in NodeData, and it will be iterated via evaluate process
---The goal is to have contiguous memory location where they can iterate through linearly
---@class FConstraintDescriptor
---@field public Type EConstraintType
local FConstraintDescriptor = {}
