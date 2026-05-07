---Constraint Data that is contained in Node Datat
---You can have as many of these per node
---@class FConstraintData
---@field public Constraint FConstraintDescriptor @Constraint Description
---@field public Weight number @Weight of the constraint
---@field public bMaintainOffset boolean @When the constraint is first applied, maintain the offset from the target node
---@field public Offset FTransform @Constraint offset if bMaintainOffset is used
---@field public CurrentTransform FTransform
local FConstraintData = {}
