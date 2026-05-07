---@class FAnchorData
---@field public Offsets FMargin @Offset.
---@field public Anchors FAnchors @Anchors.
---@field public Alignment FVector2D @Alignment is the pivot point of the widget.  Starting in the upper left at (0,0), ending in the lower right at (1,1).  Moving the alignment point allows you to move the origin of the widget.
local FAnchorData = {}
