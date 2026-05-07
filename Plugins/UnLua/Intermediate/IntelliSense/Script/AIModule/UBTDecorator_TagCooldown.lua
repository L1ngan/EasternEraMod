---Cooldown decorator node.
---A decorator node that bases its condition on whether a cooldown timer based on a gameplay tag has expired.
---@class UBTDecorator_TagCooldown : UBTDecorator
---@field public CooldownTag FGameplayTag @Gameplay tag that will be used for the cooldown.
---@field public CooldownDuration FValueOrBBKey_Float @Value we will add or set to the Cooldown tag when this node is deactivated.
---@field public bAddToExistingDuration FValueOrBBKey_Bool @True if we are adding to any existing duration, false if we are setting the duration (potentially invalidating an existing end time).
---@field public bActivatesCooldown FValueOrBBKey_Bool @Whether or not we are adding/setting to the cooldown tag's value when the decorator deactivates.
local UBTDecorator_TagCooldown = {}

