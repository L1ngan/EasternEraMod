---The Slot for the UBorderSlot, contains the widget displayed in a border's single slot
---@class UBorderSlot : UPanelSlot
---@field protected Padding FMargin @The padding area between the slot and the content it contains.
---@field protected HorizontalAlignment integer @The alignment of the object horizontally.
---@field protected VerticalAlignment integer @The alignment of the object vertically.
local UBorderSlot = {}

---@param InVerticalAlignment integer
function UBorderSlot:SetVerticalAlignment(InVerticalAlignment) end

---@param InPadding FMargin
function UBorderSlot:SetPadding(InPadding) end

---@param InHorizontalAlignment integer
function UBorderSlot:SetHorizontalAlignment(InHorizontalAlignment) end

