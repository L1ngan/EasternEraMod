---@class UAnimGraphNode_AnimDynamics : UAnimGraphNode_SkeletalControlBase
---@field public Node FAnimNode_AnimDynamics
---@field public bPreviewLive boolean @Preview the live physics object on the mesh
---@field public bShowLinearLimits boolean @Show linear (prismatic) limits in the viewport
---@field public bShowAngularLimits boolean @Show angular limit ranges in the viewport
---@field public bShowPlanarLimit boolean @Show planar limit info (actual plane, plane normal) in the viewport
---@field public bShowSphericalLimit boolean @Show spherical limits in the viewport (preview live only)
---@field public bShowCollisionSpheres boolean @If planar limits are enabled and the collision mode isn't CoM, draw sphere collision sizes
local UAnimGraphNode_AnimDynamics = {}

