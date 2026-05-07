---The Slot for the UVerticalBox, contains the widget that is flowed vertically
---@class UVerticalBoxSlot : UPanelSlot
---@field public Size FSlateChildSize @How much space this slot should occupy in the direction of the panel.
---@field public Padding FMargin @The padding area between the slot and the content it contains.
---@field public HorizontalAlignment integer @The alignment of the object horizontally.
---@field public VerticalAlignment integer @The alignment of the object vertically.
local UVerticalBoxSlot = {}

---@param InVerticalAlignment integer
function UVerticalBoxSlot:SetVerticalAlignment(InVerticalAlignment) end

---@param InSize FSlateChildSize
function UVerticalBoxSlot:SetSize(InSize) end

---@param InPadding FMargin
function UVerticalBoxSlot:SetPadding(InPadding) end

---@param InHorizontalAlignment integer
function UVerticalBoxSlot:SetHorizontalAlignment(InHorizontalAlignment) end

