---Component to help with ImgMedia playback.
---If desired, add this to an object that displays an ImgMedia sequence.
---Not necessary to do this, but if you do then you can get additional functionality
---such as selective mipmap loading.
---@class UDEPRECATED_ImgMediaPlaybackComponent : UActorComponent
---@field public LODBias number @This will be added to the calculated mipmap level. E.g. if set to 2, and you would normally be at mipmap level 1, then you will actually be at level 3.
local UDEPRECATED_ImgMediaPlaybackComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UDEPRECATED_ImgMediaPlaybackComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UDEPRECATED_ImgMediaPlaybackComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UDEPRECATED_ImgMediaPlaybackComponent:AddAssetUserDataOfClass(InUserDataClass) end

