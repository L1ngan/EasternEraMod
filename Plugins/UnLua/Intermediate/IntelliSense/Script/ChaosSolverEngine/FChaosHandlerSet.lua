---UStruct wrapper so we can store the TSet in a TMap
---@class FChaosHandlerSet
---@field public ChaosHandlers TSet<UObject> @These should be IChaosNotifyHandlerInterface refs, but we can't store those here
local FChaosHandlerSet = {}
