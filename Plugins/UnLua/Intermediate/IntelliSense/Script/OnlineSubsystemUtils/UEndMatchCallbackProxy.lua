---@class UEndMatchCallbackProxy : UOnlineBlueprintCallProxyBase
---@field public OnSuccess MulticastDelegate @Called when the match ends successfully
---@field public OnFailure MulticastDelegate @Called when ending the match fails
local UEndMatchCallbackProxy = {}

---End a match that is in progress while it is the current player's turn
---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@param MatchActor TScriptInterface_UTurnBasedMatchInterface_
---@param MatchID string
---@param LocalPlayerOutcome integer
---@param OtherPlayersOutcome integer
---@return UEndMatchCallbackProxy
function UEndMatchCallbackProxy.EndMatch(WorldContextObject, PlayerController, MatchActor, MatchID, LocalPlayerOutcome, OtherPlayersOutcome) end

