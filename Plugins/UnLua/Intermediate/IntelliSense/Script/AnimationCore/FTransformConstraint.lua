---@class FTransformConstraint
---@field public Operator FConstraintDescription @ but something to think about if that seems better
---@field public SourceNode string
---@field public TargetNode string
---@field public Weight number
---@field public bMaintainOffset boolean @When the constraint is first applied, maintain the offset from the target node
local FTransformConstraint = {}
