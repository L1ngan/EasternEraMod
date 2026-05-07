---Because physics cooking uses GetOuter() to get the IInterface_CollisionDataProvider and provides no way to determine which physics body it
---is currently working on we are wrapping each body in this Holder so that it can be the Outer and provide the correct data.
---@class UMRMeshBodyHolder : UObject
---@field public BodySetup UBodySetup
---@field public BodyInstance FBodyInstance
local UMRMeshBodyHolder = {}

