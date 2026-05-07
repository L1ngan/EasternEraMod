---@class UContentWidget : UPanelWidget
local UContentWidget = {}

---@param Content UWidget
---@return UPanelSlot
function UContentWidget:SetContent(Content) end

---@return UPanelSlot
function UContentWidget:GetContentSlot() end

---@return UWidget
function UContentWidget:GetContent() end

