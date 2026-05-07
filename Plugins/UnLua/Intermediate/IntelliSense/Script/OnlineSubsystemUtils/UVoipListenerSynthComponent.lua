---@class UVoipListenerSynthComponent : USynthComponent
local UVoipListenerSynthComponent = {}

---* Thread safe way to get whether this synth component still has buffered packets of audio to play back.
---* This function is used by the Voice Engine to clean up voice sounds when they are not playing back audio
---* to make space for other sounds to be rendered.
---* @@returns true if this synth component is out of audio to play.
---@return boolean
function UVoipListenerSynthComponent:IsIdling() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UVoipListenerSynthComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UVoipListenerSynthComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UVoipListenerSynthComponent:AddAssetUserDataOfClass(InUserDataClass) end

