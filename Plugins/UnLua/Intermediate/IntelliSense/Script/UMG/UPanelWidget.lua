---The base class for all UMG panel widgets.  Panel widgets layout a collection of child widgets.
---@class UPanelWidget : UWidget
---@field protected Slots TArray<UPanelSlot> @The slots in the widget holding the child widgets of this panel.
local UPanelWidget = {}

---Removes a child by it's index.
---@param Index integer
---@return boolean
function UPanelWidget:RemoveChildAt(Index) end

---Removes a specific widget from the container.
---@param Content UWidget
---@return boolean
function UPanelWidget:RemoveChild(Content) end

---Returns true if panel contains this widget
---@param Content UWidget
---@return boolean
function UPanelWidget:HasChild(Content) end

---Returns true if there are any child widgets in the panel
---@return boolean
function UPanelWidget:HasAnyChildren() end

---Gets number of child widgets in the container.
---@return integer
function UPanelWidget:GetChildrenCount() end

---Gets the index of a specific child widget
---@param Content UWidget
---@return integer
function UPanelWidget:GetChildIndex(Content) end

---Gets the widget at an index.
---@param Index integer
---@return UWidget
function UPanelWidget:GetChildAt(Index) end

---Gets all widgets in the container
---@return TArray_UWidget_
function UPanelWidget:GetAllChildren() end

---Remove all child widgets from the panel widget.
function UPanelWidget:ClearChildren() end

---Adds a new child widget to the container.  Returns the base slot type,
---requires casting to turn it into the type specific to the container.
---@param Content UWidget
---@return UPanelSlot
function UPanelWidget:AddChild(Content) end

