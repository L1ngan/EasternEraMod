---@class UPropertyValue : UObject
---@field protected CapturedPropSegments TArray<FCapturedPropSegment>
---@field protected FullDisplayString string
---@field protected PropertySetterName string
---@field protected PropertySetterParameterDefaults TMap<string, string>
---@field protected bHasRecordedData boolean
---@field protected ValueBytes TArray<integer>
---@field protected PropCategory EPropertyValueCategory
---@field protected DisplayOrder integer
local UPropertyValue = {}

---@return boolean
function UPropertyValue:HasRecordedData() end

---@return string
function UPropertyValue:GetPropertyTooltip() end

---@return string
function UPropertyValue:GetFullDisplayString() end

