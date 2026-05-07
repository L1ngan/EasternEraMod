---@class FAnimPhysBodyDefinition
---@field public BoundBone FBoneReference
---@field public BoxExtents FVector @Extents of the box to use for simulation
---@field public LocalJointOffset FVector @Vector relative to the body being simulated to attach the constraint to
---@field public ConstraintSetup FAnimPhysConstraintSetup @Data describing the constraints we will apply to the body
---@field public CollisionType AnimPhysCollisionType @Resolution method for planar limits
---@field public SphereCollisionRadius number @Radius to use if CollisionType is set to CustomSphere
local FAnimPhysBodyDefinition = {}
