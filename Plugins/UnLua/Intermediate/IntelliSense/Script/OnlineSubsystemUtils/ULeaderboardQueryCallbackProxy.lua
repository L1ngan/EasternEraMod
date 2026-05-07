---@class ULeaderboardQueryCallbackProxy : UObject
---@field public OnSuccess MulticastDelegate @Called when there is a successful leaderboard query
---@field public OnFailure MulticastDelegate @Called when there is an unsuccessful leaderboard query
local ULeaderboardQueryCallbackProxy = {}

---Queries a leaderboard for an integer value
---@param PlayerController APlayerController
---@param StatName string
---@return ULeaderboardQueryCallbackProxy
function ULeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery(PlayerController, StatName) end

