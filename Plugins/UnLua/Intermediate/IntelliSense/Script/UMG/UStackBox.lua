---A stack box widget is a layout panel allowing child widgets to be automatically laid out
---vertically or horizontally.
---* Many Children
---* Flows Vertical or Horizontal
---@class UStackBox : UPanelWidget
---@field private Orientation integer @The orientation of the stack box.
local UStackBox = {}

---Replace the widget at the given index it with a different widget.
---@param Index integer
---@param Content UWidget
---@return boolean
function UStackBox:ReplaceStackBoxChildAt(Index, Content) end

---Adds a new child widget to the container.
---@param Content UWidget
---@return UStackBoxSlot
function UStackBox:AddChildToStackBox(Content) end

