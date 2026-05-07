---@class UTurnBasedMatchInterface : UInterface
local UTurnBasedMatchInterface = {}

---@param Match string
---@param bDidBecomeActive boolean
function UTurnBasedMatchInterface:OnMatchReceivedTurn(Match, bDidBecomeActive) end

---@param Match string
function UTurnBasedMatchInterface:OnMatchEnded(Match) end

