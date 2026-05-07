---@class FOverlayItem
---@field public StartTime FTimespan @When the overlay should be displayed
---@field public EndTime FTimespan @When the overlay should be cleared
---@field public Text string @Text that appears onscreen when the overlay is shown
---@field public Position FVector2D @The position of the text on screen (Between 0.0 and 1.0)
local FOverlayItem = {}
