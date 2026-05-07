---A slot for UGridPanel, these slots all share the same size as the largest slot
---in the grid.
---@class UGridSlot : UPanelSlot
---@field public Padding FMargin @The padding area between the slot and the content it contains.
---@field public HorizontalAlignment integer @The alignment of the object horizontally.
---@field public VerticalAlignment integer @The alignment of the object vertically.
---@field public Row integer @The row index of the cell this slot is in
---@field public RowSpan integer
---@field public Column integer @The column index of the cell this slot is in
---@field public ColumnSpan integer
---@field public Layer integer @Positive values offset this cell to be hit-tested and drawn on top of others. Default is 0; i.e. no offset.
---@field public Nudge FVector2D @Offset this slot's content by some amount; positive values offset to lower right
local UGridSlot = {}

---@param InVerticalAlignment integer
function UGridSlot:SetVerticalAlignment(InVerticalAlignment) end

---How many rows this this slot spans over
---@param InRowSpan integer
function UGridSlot:SetRowSpan(InRowSpan) end

---Sets the row index of the slot, this determines what cell the slot is in the panel
---@param InRow integer
function UGridSlot:SetRow(InRow) end

---@param InPadding FMargin
function UGridSlot:SetPadding(InPadding) end

---Sets the offset for this slot's content by some amount; positive values offset to lower right
---@param InNudge FVector2D
function UGridSlot:SetNudge(InNudge) end

---Sets positive values offset this cell to be hit-tested and drawn on top of others.
---@param InLayer integer
function UGridSlot:SetLayer(InLayer) end

---@param InHorizontalAlignment integer
function UGridSlot:SetHorizontalAlignment(InHorizontalAlignment) end

---How many columns this slot spans over
---@param InColumnSpan integer
function UGridSlot:SetColumnSpan(InColumnSpan) end

---Sets the column index of the slot, this determines what cell the slot is in the panel
---@param InColumn integer
function UGridSlot:SetColumn(InColumn) end

