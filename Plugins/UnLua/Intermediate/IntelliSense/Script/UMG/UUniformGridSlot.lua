---A slot for UUniformGridPanel, these slots all share the same size as the largest slot
---in the grid.
---@class UUniformGridSlot : UPanelSlot
---@field public HorizontalAlignment integer @The alignment of the object horizontally.
---@field public VerticalAlignment integer @The alignment of the object vertically.
---@field public Row integer @The row index of the cell this slot is in
---@field public Column integer @The column index of the cell this slot is in
local UUniformGridSlot = {}

---@param InVerticalAlignment integer
function UUniformGridSlot:SetVerticalAlignment(InVerticalAlignment) end

---Sets the row index of the slot, this determines what cell the slot is in the panel
---@param InRow integer
function UUniformGridSlot:SetRow(InRow) end

---@param InHorizontalAlignment integer
function UUniformGridSlot:SetHorizontalAlignment(InHorizontalAlignment) end

---Sets the column index of the slot, this determines what cell the slot is in the panel
---@param InColumn integer
function UUniformGridSlot:SetColumn(InColumn) end

