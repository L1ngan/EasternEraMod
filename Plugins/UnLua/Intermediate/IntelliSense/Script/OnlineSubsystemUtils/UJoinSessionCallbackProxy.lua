---@class UJoinSessionCallbackProxy : UOnlineBlueprintCallProxyBase
---@field public OnSuccess MulticastDelegate @Called when there is a successful join
---@field public OnFailure MulticastDelegate @Called when there is an unsuccessful join
local UJoinSessionCallbackProxy = {}

---Joins a remote session with the default online subsystem
---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@param SearchResult FBlueprintSessionResult
---@return UJoinSessionCallbackProxy
function UJoinSessionCallbackProxy.JoinSession(WorldContextObject, PlayerController, SearchResult) end

