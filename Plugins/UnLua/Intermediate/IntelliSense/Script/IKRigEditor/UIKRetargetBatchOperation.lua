---Encapsulate ability to batch duplicate and retarget a set of animation assets
---@class UIKRetargetBatchOperation : UObject
local UIKRetargetBatchOperation = {}

---Convenience function to run a batch animation retarget from Blueprint / Python. This function will duplicate a list of
---       * assets and use the supplied IK Retargeter to retarget the animation from the source to the target using the
---       * settings in the provided IK Retargeter asset.
---       *
---       * @@param AssetsToRetarget A list of animation assets to retarget (sequences, blendspaces or montages)
---       * @@param SourceMesh The skeletal mesh with desired proportions to playback the assets to retarget
---       * @@param TargetMesh The skeletal mesh to retarget the animation onto.
---       * @@param IKRetargetAsset The IK Retargeter asset with IK Rigs appropriate for the source and target skeletal mesh
---       * @@param Search A string to search for in the file name (replaced with "Replace" string)
---       * @@param Replace A string to replace with in the file name
---       * @@param Suffix A string to add at the end of the new file name
---       * @@param Prefix A string to add to the start of the new file name
---       * @@param bRemapReferencedAssets Whether to remap existing references in the animation assets
---       *
---       * Return: list of new animation files created.
---@param AssetsToRetarget TArray_FAssetData_
---@param SourceMesh USkeletalMesh
---@param TargetMesh USkeletalMesh
---@param IKRetargetAsset UIKRetargeter
---@param Search string
---@param Replace string
---@param Prefix string
---@param Suffix string
---@param bIncludeReferencedAssets boolean @[opt] 
---@return TArray_FAssetData_
function UIKRetargetBatchOperation.DuplicateAndRetarget(AssetsToRetarget, SourceMesh, TargetMesh, IKRetargetAsset, Search, Replace, Prefix, Suffix, bIncludeReferencedAssets) end

