---Movement capabilities, determining available movement options for Pawns and used by AI for reachability tests.
---@class FMovementProperties
---@field public bCanCrouch boolean @If true, this Pawn is capable of crouching.
---@field public bCanJump boolean @If true, this Pawn is capable of jumping.
---@field public bCanWalk boolean @If true, this Pawn is capable of walking or moving on the ground.
---@field public bCanSwim boolean @If true, this Pawn is capable of swimming or moving through fluid volumes.
---@field public bCanFly boolean @If true, this Pawn is capable of flying.
local FMovementProperties = {}
