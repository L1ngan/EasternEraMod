---Animation Composites serve as a way to combine multiple animations together and treat them as a single unit.
---@class UAnimComposite : UAnimCompositeBase
---@field public AnimationTrack FAnimTrack @Serializable data that stores section/anim pairing *
---@field public PreviewBasePose UAnimSequence @Preview Base pose for additive BlendSpace *
local UAnimComposite = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UAnimComposite:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UAnimComposite:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UAnimComposite:AddAssetUserDataOfClass(InUserDataClass) end

