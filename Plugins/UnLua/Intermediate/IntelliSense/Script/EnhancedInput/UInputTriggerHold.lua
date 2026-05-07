---UInputTriggerHold
---      Trigger fires once input has remained actuated for HoldTimeThreshold seconds.
---      Trigger may optionally fire once, or repeatedly fire.
---@class UInputTriggerHold : UInputTriggerTimedBase
---@field public HoldTimeThreshold number @How long does the input have to be held to cause trigger?
---@field public bIsOneShot boolean @Should this trigger fire only once, or fire every frame once the hold time threshold is met?
local UInputTriggerHold = {}

