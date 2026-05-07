---settings object used in details view of the batch retarget window
---@class UBatchRetargetSettings : UObject
---@field public SourceSkeletalMesh USkeletalMesh @The skeletal mesh with the proportions you want to copy animation FROM.
---@field public TargetSkeletalMesh USkeletalMesh @The skeletal mesh with the proportions you want to copy animation TO.
---@field public bAutoGenerateRetargeter boolean @When true, the system will attempt to generate an IK Retargeter compatible with the supplied source and target skeletal meshes. If the skeletons are successfully characterized, it will align the retarget poses automatically. Automatic retargeting is currently limited to common, predefined skeleton types that Unreal knows about (see documentation for full list). If you attempt to use a skeletal mesh that is not compatible with a predefined template, warnings will be displayed in the output log and the export button will be disabled. In that case, you must supply a custom retargeter asset.
---@field public RetargetAsset UIKRetargeter @You may also supply a custom IK Retargeter if needed.
local UBatchRetargetSettings = {}

