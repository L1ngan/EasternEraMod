---Slot for the UOverlay panel.  Allows content to be hover above other content.
---@class UOverlaySlot : UPanelSlot
---@field public Padding FMargin @The padding area between the slot and the content it contains.
---@field public HorizontalAlignment integer @The alignment of the object horizontally.
---@field public VerticalAlignment integer @The alignment of the object vertically.
local UOverlaySlot = {}

---Set the alignment of the object vertically.
---@param InVerticalAlignment integer
function UOverlaySlot:SetVerticalAlignment(InVerticalAlignment) end

---Set padding area between the slot and the content it contains.
---@param InPadding FMargin
function UOverlaySlot:SetPadding(InPadding) end

---Set the alignment of the object horizontally.
---@param InHorizontalAlignment integer
function UOverlaySlot:SetHorizontalAlignment(InHorizontalAlignment) end

