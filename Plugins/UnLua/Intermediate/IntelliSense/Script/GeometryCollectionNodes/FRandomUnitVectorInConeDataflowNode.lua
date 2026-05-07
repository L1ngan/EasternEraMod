---Returns a random vector with length of 1, within the specified cone, with uniform random distribution
---@class FRandomUnitVectorInConeDataflowNode : FDataflowNode
---@field public bDeterministic boolean
---@field public RandomSeed number
---@field public ConeDirection FVector @The base "center" direction of the cone
---@field public ConeHalfAngle number @The half-angle of the cone (from ConeDir to edge), in degrees
---@field public ReturnValue FVector
local FRandomUnitVectorInConeDataflowNode = {}
