---@class UPoseAssetFactory : UFactory
---@field public SourceAnimation UAnimSequence @Used when creating a composite from an AnimSequence, becomes the only AnimSequence contained
---@field public PoseNames TArray<string> @Optional. If specified the poses will be named according to this array.       If you don't specify, or you don't specify enough names for all poses, then default names will be generated.
---@field public TargetSkeleton USkeleton @Only used for AnimationEditorUtils::ExecuteNewAnimAsset template. Do not use directly.
---@field public PreviewSkeletalMesh USkeletalMesh
local UPoseAssetFactory = {}

