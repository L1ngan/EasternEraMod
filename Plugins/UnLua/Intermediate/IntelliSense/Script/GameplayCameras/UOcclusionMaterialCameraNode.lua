---@class UOcclusionMaterialCameraNode : UCameraNode
---@field public OcclusionTransparencyMaterial UMaterialInterface @Material to apply on objects causing occlusion.
---@field public OcclusionSphereRadius FFloatCameraParameter @Radius of the sphere used for occlusion testing.
---@field public OcclusionChannel integer @Collision channel to use for the occlusion testing.
---@field public OcclusionTargetPosition ECameraNodeOriginPosition @The position of the occlusion trace's target. Objects encountered between the current camera pose location and this target will have the transparency material applied to them until they move out of the way.
---@field public OcclusionTargetOffsetSpace ECameraNodeSpace @The space in which to apply the occlusion target offset.
---@field public OcclusionTargetOffset FVector3dCameraParameter @Offset from the target to the occlusion trace's end.
local UOcclusionMaterialCameraNode = {}

