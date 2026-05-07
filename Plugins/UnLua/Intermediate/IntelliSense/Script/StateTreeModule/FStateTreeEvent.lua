---StateTree event with payload.
---@class FStateTreeEvent
---@field public Tag FGameplayTag @Tag describing the event
---@field public Payload FInstancedStruct @Optional payload for the event.
---@field public Origin string @Optional info to describe who sent the event.
local FStateTreeEvent = {}
