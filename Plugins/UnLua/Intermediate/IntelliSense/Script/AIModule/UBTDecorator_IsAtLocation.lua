---Is At Location decorator node.
---A decorator node that checks if AI controlled pawn is at given location.
---@class UBTDecorator_IsAtLocation : UBTDecorator_BlackboardBase
---@field public AcceptableRadius number @distance threshold to accept as being at location
---@field public ParametrizedAcceptableRadius FAIDataProviderFloatValue
---@field public GeometricDistanceType FAIDistanceType
---@field public bUseParametrizedRadius boolean
---@field public bUseNavAgentGoalLocation FValueOrBBKey_Bool @if moving to an actor and this actor is a nav agent, then we will move to their nav agent location
---@field public bPathFindingBasedTest FValueOrBBKey_Bool @If true the result will be consistent with tests done while following paths.     Set to false to use geometric distance as configured with DistanceType
local UBTDecorator_IsAtLocation = {}

