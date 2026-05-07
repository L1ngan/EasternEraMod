---The Slot for the UScrollBox, contains the widget that are scrollable
---@class UScrollBoxSlot : UPanelSlot
---@field private Size FSlateChildSize @How much space this slot should occupy in the direction of the panel.
---@field public Padding FMargin @The padding area between the slot and the content it contains.
---@field public HorizontalAlignment integer @The alignment of the object horizontally.
---@field public VerticalAlignment integer @The alignment of the object vertically.
local UScrollBoxSlot = {}

---@param InVerticalAlignment integer
function UScrollBoxSlot:SetVerticalAlignment(InVerticalAlignment) end

---@param InPadding FMargin
function UScrollBoxSlot:SetPadding(InPadding) end

---@param InHorizontalAlignment integer
function UScrollBoxSlot:SetHorizontalAlignment(InHorizontalAlignment) end

