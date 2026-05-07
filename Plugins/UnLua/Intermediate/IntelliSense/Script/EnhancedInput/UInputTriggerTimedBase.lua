---Base class for building triggers that have firing conditions governed by elapsed time.
---This class transitions state to Ongoing once input is actuated, and will track Ongoing input time until input is released.
---Inheriting classes should provide the logic for Triggered transitions.
---@class UInputTriggerTimedBase : UInputTrigger
---@field protected HeldDuration number @How long have we been actuating this trigger?
---@field public bAffectedByTimeDilation boolean @Should global time dilation be applied to the held duration? Default is set to false. If this is set to true, then the owning Player Controller's actor time dilation will be used when calculating the HeldDuration.
local UInputTriggerTimedBase = {}

