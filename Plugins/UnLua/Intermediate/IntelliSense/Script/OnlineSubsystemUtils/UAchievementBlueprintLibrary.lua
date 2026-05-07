---Library of synchronous achievement calls
---@class UAchievementBlueprintLibrary : UBlueprintFunctionLibrary
local UAchievementBlueprintLibrary = {}

---out
---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@param AchievementID string
---@param bFoundID boolean @[out] 
---@param Progress number @[out] 
function UAchievementBlueprintLibrary.GetCachedAchievementProgress(WorldContextObject, PlayerController, AchievementID, bFoundID, Progress) end

---out
---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@param AchievementID string
---@param bFoundID boolean @[out] 
---@param Title string @[out] 
---@param LockedDescription string @[out] 
---@param UnlockedDescription string @[out] 
---@param bHidden boolean @[out] 
function UAchievementBlueprintLibrary.GetCachedAchievementDescription(WorldContextObject, PlayerController, AchievementID, bFoundID, Title, LockedDescription, UnlockedDescription, bHidden) end

