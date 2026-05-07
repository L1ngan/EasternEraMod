---The Slot for the USizeBoxSlot, contains the widget displayed in a button's single slot
---@class USizeBoxSlot : UPanelSlot
---@field public Padding FMargin @The padding area between the slot and the content it contains.
---@field public HorizontalAlignment integer @The alignment of the object horizontally.
---@field public VerticalAlignment integer @The alignment of the object vertically.
local USizeBoxSlot = {}

---@param InVerticalAlignment integer
function USizeBoxSlot:SetVerticalAlignment(InVerticalAlignment) end

---@param InPadding FMargin
function USizeBoxSlot:SetPadding(InPadding) end

---@param InHorizontalAlignment integer
function USizeBoxSlot:SetHorizontalAlignment(InHorizontalAlignment) end

