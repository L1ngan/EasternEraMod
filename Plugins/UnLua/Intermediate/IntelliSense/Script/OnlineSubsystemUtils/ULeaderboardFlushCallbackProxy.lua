---@class ULeaderboardFlushCallbackProxy : UObject
---@field public OnSuccess MulticastDelegate @Called when there is a successful leaderboard flush
---@field public OnFailure MulticastDelegate @Called when there is an unsuccessful leaderboard flush
local ULeaderboardFlushCallbackProxy = {}

---Called to perform the query internally
---@param PlayerController APlayerController
---@param SessionName string
---@return ULeaderboardFlushCallbackProxy
function ULeaderboardFlushCallbackProxy.CreateProxyObjectForFlush(PlayerController, SessionName) end

