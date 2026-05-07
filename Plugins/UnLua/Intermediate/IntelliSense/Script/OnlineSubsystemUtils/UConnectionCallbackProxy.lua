---@class UConnectionCallbackProxy : UOnlineBlueprintCallProxyBase
---@field public OnSuccess MulticastDelegate @Called when there is a successful query
---@field public OnFailure MulticastDelegate @Called when there is an unsuccessful query
local UConnectionCallbackProxy = {}

---Connects to an online service such as Google Play
---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@return UConnectionCallbackProxy
function UConnectionCallbackProxy.ConnectToService(WorldContextObject, PlayerController) end

