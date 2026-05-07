---@class UAchievementQueryCallbackProxy : UOnlineBlueprintCallProxyBase
---@field public OnSuccess MulticastDelegate @Called when there is a successful query
---@field public OnFailure MulticastDelegate @Called when there is an unsuccessful query
local UAchievementQueryCallbackProxy = {}

---Fetches and caches achievement progress from the default online subsystem
---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@return UAchievementQueryCallbackProxy
function UAchievementQueryCallbackProxy.CacheAchievements(WorldContextObject, PlayerController) end

---Fetches and caches achievement descriptions from the default online subsystem
---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@return UAchievementQueryCallbackProxy
function UAchievementQueryCallbackProxy.CacheAchievementDescriptions(WorldContextObject, PlayerController) end

