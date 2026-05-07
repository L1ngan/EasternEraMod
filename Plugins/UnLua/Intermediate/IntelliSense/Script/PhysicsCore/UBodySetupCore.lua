---@class UBodySetupCore : UObject
---@field public BoneName string @Used in the PhysicsAsset case. Associates this Body with Bone in a skeletal mesh.
---@field public PhysicsType integer @If simulated it will use physics, if kinematic it will not be affected by physics, but can interact with physically simulated bodies. Default will inherit from OwnerComponent's behavior.
---@field public CollisionTraceFlag integer @Collision Trace behavior - by default, it will keep simple(convex)/complex(per-poly) separate *
---@field public CollisionReponse integer @Collision Type for this body. This eventually changes response to collision to others *
local UBodySetupCore = {}

