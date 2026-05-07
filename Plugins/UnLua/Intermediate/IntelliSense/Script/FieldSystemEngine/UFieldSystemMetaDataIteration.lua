---* UFieldSystemMetaDataIteration : Not used anymore, just hiding it right now but will probably be deprecated if not used in the future
---@class UFieldSystemMetaDataIteration : UFieldSystemMetaData
---@field public Iterations integer @Number of iterations (WIP)
local UFieldSystemMetaDataIteration = {}

---Set the number of iteration type
---@param Iterations integer
---@return UFieldSystemMetaDataIteration
function UFieldSystemMetaDataIteration:SetMetaDataIteration(Iterations) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UFieldSystemMetaDataIteration:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UFieldSystemMetaDataIteration:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UFieldSystemMetaDataIteration:AddAssetUserDataOfClass(InUserDataClass) end

