---@class UAudioCaptureComponent : USynthComponent
---@field public JitterLatencyFrames integer @Induced latency in audio frames to use to account for jitter between mic capture hardware and audio render hardware.    Increasing this number will increase latency but reduce potential for underruns.
local UAudioCaptureComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UAudioCaptureComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UAudioCaptureComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UAudioCaptureComponent:AddAssetUserDataOfClass(InUserDataClass) end

