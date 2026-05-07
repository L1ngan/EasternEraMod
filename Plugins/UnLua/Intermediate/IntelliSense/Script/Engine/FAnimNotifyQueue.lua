---@class FAnimNotifyQueue
---@field public AnimNotifies TArray<FAnimNotifyEventReference> @Animation Notifies that has been triggered in the latest tick *
---@field public UnfilteredMontageAnimNotifies TMap<string, FAnimNotifyArray> @Animation Notifies from montages that still need to be filtered by slot weight
local FAnimNotifyQueue = {}
