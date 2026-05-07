---@class UAchievementWriteCallbackProxy : UOnlineBlueprintCallProxyBase
---@field public OnWriteSuccess MulticastDelegate @Called when there is a successful achievement write
---@field public OnWriteFailure MulticastDelegate @Called when there is an unsuccessful achievement write
---@field public OnSuccess MulticastDelegate
---@field public OnFailure MulticastDelegate
local UAchievementWriteCallbackProxy = {}

---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@param AchievementName string
---@param Progress number @[opt] 
---@param UserTag integer @[opt] 
---@return UAchievementWriteCallbackProxy
function UAchievementWriteCallbackProxy.WriteProgress(WorldContextObject, PlayerController, AchievementName, Progress, UserTag) end

---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@param AchievementName string
---@param Progress number @[opt] 
---@param UserTag integer @[opt] 
---@return UAchievementWriteCallbackProxy
function UAchievementWriteCallbackProxy.WriteAchievementProgress(WorldContextObject, PlayerController, AchievementName, Progress, UserTag) end

