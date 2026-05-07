---A table-like panel that retains the width of every column throughout the table.
---* Many Children
---@class UGridPanel : UPanelWidget
---@field public ColumnFill TArray<number> @The column fill rules
---@field public RowFill TArray<number> @The row fill rules
local UGridPanel = {}

---@param RowIndex integer
---@param Coefficient number
function UGridPanel:SetRowFill(RowIndex, Coefficient) end

---@param ColumnIndex integer
---@param Coefficient number
function UGridPanel:SetColumnFill(ColumnIndex, Coefficient) end

---@param Content UWidget
---@param InRow integer @[opt] 
---@param InColumn integer @[opt] 
---@return UGridSlot
function UGridPanel:AddChildToGrid(Content, InRow, InColumn) end

