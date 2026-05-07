---The Slot for the UBackgroundBlurSlot, contains the widget displayed in a BackgroundBlur's single slot
---@class UBackgroundBlurSlot : UPanelSlot
---@field protected Padding FMargin @The padding area between the slot and the content it contains.
---@field protected HorizontalAlignment integer @The alignment of the object horizontally.
---@field protected VerticalAlignment integer @The alignment of the object vertically.
local UBackgroundBlurSlot = {}

---@param InVerticalAlignment integer
function UBackgroundBlurSlot:SetVerticalAlignment(InVerticalAlignment) end

---@param InPadding FMargin
function UBackgroundBlurSlot:SetPadding(InPadding) end

---@param InHorizontalAlignment integer
function UBackgroundBlurSlot:SetHorizontalAlignment(InHorizontalAlignment) end

