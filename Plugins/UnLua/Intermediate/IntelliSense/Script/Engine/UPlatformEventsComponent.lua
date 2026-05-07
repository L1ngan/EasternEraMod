---Component to handle receiving notifications from the OS about platform events.
---@class UPlatformEventsComponent : UActorComponent
---@field public PlatformChangedToLaptopModeDelegate MulticastDelegate @This is called when a convertible laptop changed into laptop mode.
---@field public PlatformChangedToTabletModeDelegate MulticastDelegate @This is called when a convertible laptop changed into tablet mode.
local UPlatformEventsComponent = {}

function UPlatformEventsComponent:PlatformEventDelegate__DelegateSignature() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPlatformEventsComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UPlatformEventsComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPlatformEventsComponent:AddAssetUserDataOfClass(InUserDataClass) end

