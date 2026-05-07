---The Slot for the UWindowTitleBarArea
---@class UWindowTitleBarAreaSlot : UPanelSlot
---@field protected Padding FMargin @The padding area between the slot and the content it contains.
---@field protected HorizontalAlignment integer @The alignment of the object horizontally.
---@field protected VerticalAlignment integer @The alignment of the object vertically.
local UWindowTitleBarAreaSlot = {}

---@param InVerticalAlignment integer
function UWindowTitleBarAreaSlot:SetVerticalAlignment(InVerticalAlignment) end

---@param InPadding FMargin
function UWindowTitleBarAreaSlot:SetPadding(InPadding) end

---@param InHorizontalAlignment integer
function UWindowTitleBarAreaSlot:SetHorizontalAlignment(InHorizontalAlignment) end

