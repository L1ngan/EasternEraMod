---@class UDestroySessionCallbackProxy : UOnlineBlueprintCallProxyBase
---@field public OnSuccess MulticastDelegate @Called when there is a successful destroy
---@field public OnFailure MulticastDelegate @Called when there is an unsuccessful destroy
local UDestroySessionCallbackProxy = {}

---Destroys a session previously created by the default online subsystem
---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@return UDestroySessionCallbackProxy
function UDestroySessionCallbackProxy.DestroySession(WorldContextObject, PlayerController) end

