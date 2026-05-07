---The Slot for the UWidgetSwitcher, contains the widget that is flowed vertically
---@class UWidgetSwitcherSlot : UPanelSlot
---@field public Padding FMargin @The padding area between the slot and the content it contains.
---@field public HorizontalAlignment integer @The alignment of the object horizontally.
---@field public VerticalAlignment integer @The alignment of the object vertically.
local UWidgetSwitcherSlot = {}

---@param InVerticalAlignment integer
function UWidgetSwitcherSlot:SetVerticalAlignment(InVerticalAlignment) end

---@param InPadding FMargin
function UWidgetSwitcherSlot:SetPadding(InPadding) end

---@param InHorizontalAlignment integer
function UWidgetSwitcherSlot:SetHorizontalAlignment(InHorizontalAlignment) end

