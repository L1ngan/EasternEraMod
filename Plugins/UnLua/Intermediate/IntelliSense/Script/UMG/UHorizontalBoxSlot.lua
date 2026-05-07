---@class UHorizontalBoxSlot : UPanelSlot
---@field public Size FSlateChildSize @How much space this slot should occupy in the direction of the panel.
---@field public Padding FMargin @The amount of padding between the slots parent and the content.
---@field public HorizontalAlignment integer
---@field public VerticalAlignment integer
local UHorizontalBoxSlot = {}

---@param InVerticalAlignment integer
function UHorizontalBoxSlot:SetVerticalAlignment(InVerticalAlignment) end

---@param InSize FSlateChildSize
function UHorizontalBoxSlot:SetSize(InSize) end

---@param InPadding FMargin
function UHorizontalBoxSlot:SetPadding(InPadding) end

---@param InHorizontalAlignment integer
function UHorizontalBoxSlot:SetHorizontalAlignment(InHorizontalAlignment) end

