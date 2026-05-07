---Represents the appearance of an SProgressBar
---@class FProgressBarStyle : FSlateWidgetStyle
---@field public BackgroundImage FSlateBrush @Background image to use for the progress bar
---@field public FillImage FSlateBrush @Foreground image to use for the progress bar
---@field public MarqueeImage FSlateBrush @Image to use for marquee mode
---@field public EnableFillAnimation boolean @Enables a simple animation on the fill image to give the appearance that progress has not stalled. Disable this if you have a custom material which animates itself. This requires a pattern in your material or texture to give the appearance of movement.  A solid color will show no movement.
local FProgressBarStyle = {}
