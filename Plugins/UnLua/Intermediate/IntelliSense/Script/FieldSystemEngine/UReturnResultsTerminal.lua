---Terminal field of a graph
---@class UReturnResultsTerminal : UFieldNodeBase
local UReturnResultsTerminal = {}

---Terminal field of a graph
---@return UReturnResultsTerminal
function UReturnResultsTerminal:SetReturnResultsTerminal() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UReturnResultsTerminal:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UReturnResultsTerminal:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UReturnResultsTerminal:AddAssetUserDataOfClass(InUserDataClass) end

