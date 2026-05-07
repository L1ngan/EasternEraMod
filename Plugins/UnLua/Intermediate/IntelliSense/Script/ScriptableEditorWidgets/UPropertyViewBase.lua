---Base of property view allows you to display the value of an object properties.
---@class UPropertyViewBase : UWidget
---@field protected Object TSoftObjectPtr<UObject> @The object to view.
---@field protected bAutoLoadAsset boolean @Load the object (if it's an asset) when the widget is created.
---@field protected OnPropertyChanged MulticastDelegate @Sets a delegate called when the property value changes
local UPropertyViewBase = {}

---@param NewObject UObject
function UPropertyViewBase:SetObject(NewObject) end

---@return UObject
function UPropertyViewBase:GetObject() end

