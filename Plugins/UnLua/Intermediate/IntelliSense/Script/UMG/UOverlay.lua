---Allows widgets to be stacked on top of each other, uses simple flow layout for content on each layer.
---@class UOverlay : UPanelWidget
local UOverlay = {}

---Replace the widget at the given index it with a different widget.
---@param Index integer
---@param Content UWidget
---@return boolean
function UOverlay:ReplaceOverlayChildAt(Index, Content) end

---@param Content UWidget
---@return UOverlaySlot
function UOverlay:AddChildToOverlay(Content) end

