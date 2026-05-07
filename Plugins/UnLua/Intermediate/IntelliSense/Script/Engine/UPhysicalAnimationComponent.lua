---@class UPhysicalAnimationComponent : UActorComponent
---@field public StrengthMultiplyer number @Multiplies the strength of any active motors. (can blend from 0-1 for example)
---@field private SkeletalMeshComponent USkeletalMeshComponent
local UPhysicalAnimationComponent = {}

---Updates strength multiplyer and any active motors
---@param InStrengthMultiplyer number
function UPhysicalAnimationComponent:SetStrengthMultiplyer(InStrengthMultiplyer) end

---Sets the skeletal mesh we are driving through physical animation. Will erase any existing physical animation data.
---@param InSkeletalMeshComponent USkeletalMeshComponent
function UPhysicalAnimationComponent:SetSkeletalMeshComponent(InSkeletalMeshComponent) end

---Returns the target transform for the given body. If physical animation component is not controlling this body, returns its current transform.
---@param BodyName string
---@return FTransform
function UPhysicalAnimationComponent:GetBodyTargetTransform(BodyName) end

---Applies the physical animation settings to the body given and all bodies below.
---@param BodyName string
---@param PhysicalAnimationData FPhysicalAnimationData
---@param bIncludeSelf boolean @[opt] 
function UPhysicalAnimationComponent:ApplyPhysicalAnimationSettingsBelow(BodyName, PhysicalAnimationData, bIncludeSelf) end

---Applies the physical animation settings to the body given.
---@param BodyName string
---@param PhysicalAnimationData FPhysicalAnimationData
function UPhysicalAnimationComponent:ApplyPhysicalAnimationSettings(BodyName, PhysicalAnimationData) end

---Applies the physical animation profile to the body given and all bodies below.
---@param BodyName string
---@param ProfileName string
---@param bIncludeSelf boolean @[opt] 
---@param bClearNotFound boolean @[opt] 
function UPhysicalAnimationComponent:ApplyPhysicalAnimationProfileBelow(BodyName, ProfileName, bIncludeSelf, bClearNotFound) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPhysicalAnimationComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UPhysicalAnimationComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPhysicalAnimationComponent:AddAssetUserDataOfClass(InUserDataClass) end

