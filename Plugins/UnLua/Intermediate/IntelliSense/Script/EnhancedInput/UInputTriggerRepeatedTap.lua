---Fires the "Triggered" event upon a repeated taps of a key.
---Note: You can use this trigger to easily make a "Double Tap" effect.
---@class UInputTriggerRepeatedTap : UInputTriggerTimedBase
---@field protected RepeatDelay number @The max amount of time which can pass in between single taps that can pass and still be considered a repeat tap. For example: -> Single Key Tap (the first tap) -- -- ... Some time passes -- -> Another single key tap (the second tap) -- if (time passed <= RepeatDelay) then trigger repeat tap
---@field protected RepeatTime number @This is the time at which we need to be <= on the next detection of a tap in order to be considered a double tap. This is set to (FPlatform::Seconds() + RepeatDelay) whenever we detect a tap
---@field protected NumberOfTapsWhichTriggerRepeat integer @The number of taps in a row it takes for this to be considered triggered. Note: To create a "Double tap" trigger, this value should be 2.
---@field protected TapReleaseTimeThreshold number @Release within this time-frame to trigger a tap
---@field protected NumberOfTapsSinceLastTrigger integer @Tracks the number of individual taps that have occured since the last time we met
local UInputTriggerRepeatedTap = {}

