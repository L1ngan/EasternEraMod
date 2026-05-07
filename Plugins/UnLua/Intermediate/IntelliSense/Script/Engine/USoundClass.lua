---@class USoundClass : UObject
---@field public Properties FSoundClassProperties @Configurable properties like volume and priority.
---@field public ChildClasses TArray<USoundClass>
---@field public PassiveSoundMixModifiers TArray<FPassiveSoundMixModifier> @SoundMix Modifiers to activate automatically when a sound of this class is playing.
---@field public ParentClass USoundClass
---@field public AssetUserData TArray<UAssetUserData> @Array of user data stored with the asset
local USoundClass = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USoundClass:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function USoundClass:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USoundClass:AddAssetUserDataOfClass(InUserDataClass) end

