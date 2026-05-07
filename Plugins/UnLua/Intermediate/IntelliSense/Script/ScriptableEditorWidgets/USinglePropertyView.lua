---The single property view allows you to display the value of an object's property.
---@class USinglePropertyView : UPropertyViewBase
---@field private PropertyName string @The name of the property to display.
---@field private NameOverride string @Override for the property name that will be displayed instead of the property name.
local USinglePropertyView = {}

---@param NewPropertyName string
function USinglePropertyView:SetPropertyName(NewPropertyName) end

---@param NewPropertyName string
function USinglePropertyView:SetNameOverride(NewPropertyName) end

---@return string
function USinglePropertyView:GetPropertyName() end

---@return string
function USinglePropertyView:GetNameOverride() end

