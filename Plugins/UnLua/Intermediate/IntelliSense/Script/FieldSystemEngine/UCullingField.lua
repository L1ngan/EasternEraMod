---Evaluate the input field according to the result of the culling field
---@class UCullingField : UFieldNodeBase
---@field public Culling UFieldNodeBase @Culling field to be used
---@field public Field UFieldNodeBase @Input field that will be evaluated according to the culling field result
---@field public Operation integer @Evaluate the input field if the result of the culling field is equal to 0 (Inside) or different from 0 (Outside)
local UCullingField = {}

---Evaluate the input field according to the result of the culling field.
---@param Culling UFieldNodeBase
---@param Field UFieldNodeBase
---@param Operation integer
---@return UCullingField
function UCullingField:SetCullingField(Culling, Field, Operation) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UCullingField:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UCullingField:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UCullingField:AddAssetUserDataOfClass(InUserDataClass) end

