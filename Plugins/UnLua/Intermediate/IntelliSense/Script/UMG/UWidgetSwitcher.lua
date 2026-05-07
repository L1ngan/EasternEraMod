---A widget switcher is like a tab control, but without tabs. At most one widget is visible at time.
---@class UWidgetSwitcher : UPanelWidget
---@field public ActiveWidgetIndex integer @The slot index to display
local UWidgetSwitcher = {}

---Activates the widget at the specified index.
---@param Index integer
function UWidgetSwitcher:SetActiveWidgetIndex(Index) end

---Activates the widget and makes it the active index.
---@param Widget UWidget
function UWidgetSwitcher:SetActiveWidget(Widget) end

---Get a widget at the provided index
---@param Index integer
---@return UWidget
function UWidgetSwitcher:GetWidgetAtIndex(Index) end

---Gets the number of widgets that this switcher manages.
---@return integer
function UWidgetSwitcher:GetNumWidgets() end

---Gets the slot index of the currently active widget
---@return integer
function UWidgetSwitcher:GetActiveWidgetIndex() end

---Get the reference of the currently active widget
---@return UWidget
function UWidgetSwitcher:GetActiveWidget() end

