---Keep In Cone decorator node.
---A decorator node that bases its condition on whether the observed position is still inside a cone. The cone's direction is calculated when the node first becomes relevant.
---@class UBTDecorator_KeepInCone : UBTDecorator
---@field public ConeHalfAngle FValueOrBBKey_Float @max allowed time for execution of underlying node
---@field public ConeOrigin FBlackboardKeySelector @blackboard key selector
---@field public Observed FBlackboardKeySelector @blackboard key selector
---@field public bUseSelfAsOrigin boolean @deprecated, set value of ConeOrigin on initialization
---@field public bUseSelfAsObserved boolean @deprecated, set value of Observed on initialization
local UBTDecorator_KeepInCone = {}

