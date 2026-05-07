---Rig that allows override editing per joint
---@class UFKControlRig : UControlRig
---@field private IsControlActive TArray<boolean>
---@field private ApplyMode EControlRigFKRigExecuteMode
local UFKControlRig = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UFKControlRig:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UFKControlRig:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UFKControlRig:AddAssetUserDataOfClass(InUserDataClass) end

