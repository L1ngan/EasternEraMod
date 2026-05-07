---Simple controller to copy a bone's transform to another one.
---@class FAnimNode_CopyPoseFromMesh : FAnimNode_Base
---@field public SourceMeshComponent TWeakObjectPtr<USkeletalMeshComponent> @This is used by default if it's valid
---@field public bUseAttachedParent boolean @If SourceMeshComponent is not valid, and if this is true, it will look for attahced parent as a source
---@field public bCopyCurves boolean @Copy curves also from SouceMeshComponent. This will copy the curves if this instance also contains curve attributes
---@field public bCopyCustomAttributes boolean @Copy custom attributes (animation attributes) from SourceMeshComponent
---@field public bUseMeshPose boolean @Use root space transform to copy to the target pose. By default, it copies their relative transform (bone space)
---@field public RootBoneToCopy string @If you want to specify copy root, use this - this will ensure copy only below of this joint (inclusively)
local FAnimNode_CopyPoseFromMesh = {}
