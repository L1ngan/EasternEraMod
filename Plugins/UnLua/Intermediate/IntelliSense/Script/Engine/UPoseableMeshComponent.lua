---UPoseableMeshComponent that allows bone transforms to be driven by blueprint.
---@class UPoseableMeshComponent : USkinnedMeshComponent
local UPoseableMeshComponent = {}

---@param BoneName string
---@param InTransform FTransform
---@param BoneSpace integer
function UPoseableMeshComponent:SetBoneTransformByName(BoneName, InTransform, BoneSpace) end

---@param BoneName string
---@param InScale3D FVector
---@param BoneSpace integer
function UPoseableMeshComponent:SetBoneScaleByName(BoneName, InScale3D, BoneSpace) end

---@param BoneName string
---@param InRotation FRotator
---@param BoneSpace integer
function UPoseableMeshComponent:SetBoneRotationByName(BoneName, InRotation, BoneSpace) end

---@param BoneName string
---@param InLocation FVector
---@param BoneSpace integer
function UPoseableMeshComponent:SetBoneLocationByName(BoneName, InLocation, BoneSpace) end

---@param BoneName string
function UPoseableMeshComponent:ResetBoneTransformByName(BoneName) end

---@param BoneName string
---@param BoneSpace integer
---@return FTransform
function UPoseableMeshComponent:GetBoneTransformByName(BoneName, BoneSpace) end

---@param BoneName string
---@param BoneSpace integer
---@return FVector
function UPoseableMeshComponent:GetBoneScaleByName(BoneName, BoneSpace) end

---@param BoneName string
---@param BoneSpace integer
---@return FRotator
function UPoseableMeshComponent:GetBoneRotationByName(BoneName, BoneSpace) end

---@param BoneName string
---@param BoneSpace integer
---@return FVector
function UPoseableMeshComponent:GetBoneLocationByName(BoneName, BoneSpace) end

---@param InComponentToCopy USkeletalMeshComponent
function UPoseableMeshComponent:CopyPoseFromSkeletalComponent(InComponentToCopy) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPoseableMeshComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UPoseableMeshComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPoseableMeshComponent:AddAssetUserDataOfClass(InUserDataClass) end

