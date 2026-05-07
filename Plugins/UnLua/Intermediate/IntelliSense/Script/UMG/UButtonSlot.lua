---The Slot for the UButtonSlot, contains the widget displayed in a button's single slot
---@class UButtonSlot : UPanelSlot
---@field public Padding FMargin @The padding area between the slot and the content it contains.
---@field public HorizontalAlignment integer @The alignment of the object horizontally.
---@field public VerticalAlignment integer @The alignment of the object vertically.
local UButtonSlot = {}

---@param InVerticalAlignment integer
function UButtonSlot:SetVerticalAlignment(InVerticalAlignment) end

---@param InPadding FMargin
function UButtonSlot:SetPadding(InPadding) end

---@param InHorizontalAlignment integer
function UButtonSlot:SetHorizontalAlignment(InHorizontalAlignment) end

