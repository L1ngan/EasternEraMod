---Cooldown task node.
---Sets a cooldown tag value.  Use with cooldown tag decorators to prevent behavior tree execution.
---@class UBTTask_SetTagCooldown : UBTTaskNode
---@field public CooldownTag FGameplayTag @Gameplay tag that will be used for the cooldown.
---@field public bAddToExistingDuration FValueOrBBKey_Bool @True if we are adding to any existing duration, false if we are setting the duration (potentially invalidating an existing end time).
---@field public CooldownDuration FValueOrBBKey_Float @Value we will add or set to the Cooldown tag when this task runs.
local UBTTask_SetTagCooldown = {}

