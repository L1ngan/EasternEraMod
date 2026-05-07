---@class UQuitMatchCallbackProxy : UOnlineBlueprintCallProxyBase
---@field public OnSuccess MulticastDelegate @Called when there is a successful query
---@field public OnFailure MulticastDelegate @Called when there is an unsuccessful query
local UQuitMatchCallbackProxy = {}

---Quits the turn based match
---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@param MatchID string
---@param Outcome integer
---@param TurnTimeoutInSeconds integer
---@return UQuitMatchCallbackProxy
function UQuitMatchCallbackProxy.QuitMatch(WorldContextObject, PlayerController, MatchID, Outcome, TurnTimeoutInSeconds) end

