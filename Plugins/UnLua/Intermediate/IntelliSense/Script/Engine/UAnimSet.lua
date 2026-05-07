---@class UAnimSet : UObject
---@field private bAnimRotationOnly boolean @Indicates that only the rotation should be taken from the animation sequence and the translation should come from the USkeletalMesh ref pose. Note that the root bone always takes translation from the animation, even if this flag is set. You can use the UseTranslationBoneNames array to specify other bones that should use translation with this flag set.
---@field public TrackBoneNames TArray<string> @Bone name that each track relates to. TrackBoneName.Num() == Number of tracks.
---@field public Sequences TArray<UAnimSequence> @Actual animation sequence information.
---@field private LinkupCache TArray<FAnimSetMeshLinkup> @Non-serialised cache of linkups between different skeletal meshes and this AnimSet. // Do not change private - they will go away
---@field private BoneUseAnimTranslation TArray<integer> @Array of booleans that indicate whether or not to read the translation of a bone from animation or ref skeleton. This is basically a cooked down version of UseTranslationBoneNames for speed. Size matches the number of tracks.    // Do not change private - they will go away
---@field private ForceUseMeshTranslation TArray<integer> @Cooked down version of ForceMeshTranslationBoneNames // Do not change private - they will go away
---@field private UseTranslationBoneNames TArray<string> @Names of bones that should use translation from the animation, if bAnimRotationOnly is set. // Do not change private - they will go away
---@field private ForceMeshTranslationBoneNames TArray<string> @List of bones which are ALWAYS going to use their translation from the mesh and not the animation. // Do not change private - they will go away
---@field public PreviewSkelMeshName string @In the AnimSetEditor, when you switch to this AnimSet, it sees if this skeletal mesh is loaded and if so switches to it.
---@field public BestRatioSkelMeshName string @Holds the name of the skeletal mesh whose reference skeleton best matches the TrackBoneName array.
local UAnimSet = {}

