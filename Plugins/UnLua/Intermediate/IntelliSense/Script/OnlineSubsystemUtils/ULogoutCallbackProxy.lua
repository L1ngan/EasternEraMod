---@class ULogoutCallbackProxy : UBlueprintAsyncActionBase
---@field public OnSuccess MulticastDelegate @Called when the logout completed successfully
---@field public OnFailure MulticastDelegate @Called when the logout completed unsuccessfully
local ULogoutCallbackProxy = {}

---Logs out of the online service
---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@return ULogoutCallbackProxy
function ULogoutCallbackProxy.Logout(WorldContextObject, PlayerController) end

