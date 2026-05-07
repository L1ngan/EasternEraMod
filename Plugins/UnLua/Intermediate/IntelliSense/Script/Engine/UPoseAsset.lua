---Pose Asset that can be blended by weight of curves
---@class UPoseAsset : UAnimationAsset
---@field private PoseContainer FPoseDataContainer @Animation Pose Data
---@field private bAdditivePose boolean @Whether or not Additive Pose or not - these are property that needs post process, so
---@field private BasePoseIndex integer @if -1, use ref pose
---@field public RetargetSource string @Base pose to use when retargeting
---@field public RetargetSourceAsset TSoftObjectPtr<USkeletalMesh>
---@field public RetargetSourceAssetReferencePose TArray<FTransform> @When using RetargetSourceAsset, use the post stored here
---@field public SourceAnimation UAnimSequence
---@field public SourceAnimationRawDataGUID FGuid @GUID cached when the contained poses were last updated according to SourceAnimation - used to keep track of out-of-date/sync data
local UPoseAsset = {}

---Update the retarget data pose from the source, if it exist, else clears the retarget data pose saved in RetargetSourceAssetReferencePose.
---Warning : This function calls LoadSynchronous at the retarget source asset soft object pointer, so it can not be used at PostLoad
function UPoseAsset:UpdateRetargetSourceAssetData() end

---Contained poses are re-generated from the provided Animation Sequence
---@param AnimSequence UAnimSequence
function UPoseAsset:UpdatePoseFromAnimation(AnimSequence) end

---Assigns the passed skeletal mesh to the retarget source
---@param InRetargetSourceAsset USkeletalMesh
function UPoseAsset:SetRetargetSourceAsset(InRetargetSourceAsset) end

---Set base pose index by name, NAME_None indicates reference pose - returns true if set successfully
---@param NewBasePoseName string
---@return boolean
function UPoseAsset:SetBasePoseName(NewBasePoseName) end

---Renames a specific pose
---@param OriginalPoseName string
---@param NewPoseName string
function UPoseAsset:RenamePose(OriginalPoseName, NewPoseName) end

---Returns the retarget source asset soft object pointer.
---@return TSoftObjectPtr_USkeletalMesh_
function UPoseAsset:GetRetargetSourceAsset() end

---Returns the name of all contained poses
---@param PoseNames TArray_string_ @[out] 
function UPoseAsset:GetPoseNames(PoseNames) end

---Returns base pose name, only valid when additive, NAME_None indicates reference pose
---@return string
function UPoseAsset:GetBasePoseName() end

---Resets the retarget source asset
function UPoseAsset:ClearRetargetSourceAsset() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPoseAsset:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UPoseAsset:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPoseAsset:AddAssetUserDataOfClass(InUserDataClass) end

