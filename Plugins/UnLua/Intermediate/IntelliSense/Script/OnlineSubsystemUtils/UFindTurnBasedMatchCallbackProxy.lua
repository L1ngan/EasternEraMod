---@class UFindTurnBasedMatchCallbackProxy : UOnlineBlueprintCallProxyBase
---@field public OnSuccess MulticastDelegate @Called when matchmaking succeeded.
---@field public OnFailure MulticastDelegate @Called when matchmaking failed
local UFindTurnBasedMatchCallbackProxy = {}

---Use the platform matchmaking service (like Game Center) to find a match.
---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@param MatchActor TScriptInterface_UTurnBasedMatchInterface_
---@param MinPlayers integer
---@param MaxPlayers integer
---@param PlayerGroup integer
---@param ShowExistingMatches boolean
---@return UFindTurnBasedMatchCallbackProxy
function UFindTurnBasedMatchCallbackProxy.FindTurnBasedMatch(WorldContextObject, PlayerController, MatchActor, MinPlayers, MaxPlayers, PlayerGroup, ShowExistingMatches) end

