---Helper struct for tracking on screen messages.
---@class FScreenMessageString
---@field public Key integer @The 'key' for this message.
---@field public ScreenMessage string @The message to display.
---@field public DisplayColor FColor @The color to display the message in.
---@field public TimeToDisplay number @The number of frames to display it.
---@field public CurrentTimeDisplayed number @The number of frames it has been displayed so far.
---@field public TextScale FVector2D @Scale of text
local FScreenMessageString = {}
