---@class FTweenPointStyle
---@field public Normal FSlateBrush @Brush when a point on the bar is not hovered or pressed
---@field public Hovered FSlateBrush @Brush when a point on the bar is hovered
---@field public Pressed FSlateBrush @Brush when a point on the bar is pressed
---@field public PassedPoint FSlateBrush @Brush when the slider has passed a point
---@field public HitTestSize FVector2D @The size of the hit box against which hit tests are made for this point (so the user does not need to click them pixel perfectly).
local FTweenPointStyle = {}
