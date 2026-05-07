---The base class for all Slots in UMG.
---@class UPanelSlot : UVisual
---@field public Parent UPanelWidget
---@field public Content UWidget
local UPanelSlot = {}

---@return UWidget
function UPanelSlot:GetContent() end

