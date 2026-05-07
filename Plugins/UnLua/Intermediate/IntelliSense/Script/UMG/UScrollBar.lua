---@class UScrollBar : UWidget
---@field public WidgetStyle FScrollBarStyle @Style of the scrollbar
---@field public bAlwaysShowScrollbar boolean
---@field public bAlwaysShowScrollbarTrack boolean
---@field public Orientation integer
---@field public Thickness FVector2D @The thickness of the scrollbar thumb
---@field public Padding FMargin @The margin around the scrollbar
local UScrollBar = {}

---Set the offset and size of the track's thumb.
---Note that the maximum offset is 1.0-ThumbSizeFraction.
---If the user can view 1/3 of the items in a single page, the maximum offset will be ~0.667f
---@param InOffsetFraction number
---@param InThumbSizeFraction number
function UScrollBar:SetState(InOffsetFraction, InThumbSizeFraction) end

