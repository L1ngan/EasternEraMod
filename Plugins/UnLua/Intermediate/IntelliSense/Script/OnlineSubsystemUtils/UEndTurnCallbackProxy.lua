---@class UEndTurnCallbackProxy : UOnlineBlueprintCallProxyBase
---@field public OnSuccess MulticastDelegate @Called when there is a successful query
---@field public OnFailure MulticastDelegate @Called when there is an unsuccessful query
local UEndTurnCallbackProxy = {}

---Ends the turn for the current player
---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@param MatchID string
---@param TurnBasedMatchInterface TScriptInterface_UTurnBasedMatchInterface_
---@return UEndTurnCallbackProxy
function UEndTurnCallbackProxy.EndTurn(WorldContextObject, PlayerController, MatchID, TurnBasedMatchInterface) end

