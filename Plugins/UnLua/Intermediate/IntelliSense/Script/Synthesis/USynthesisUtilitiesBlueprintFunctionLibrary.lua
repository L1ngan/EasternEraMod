---Synthesis Utilities Blueprint Function Library
---A library of synthesis related functions for use in Blueprints
---@class USynthesisUtilitiesBlueprintFunctionLibrary : UBlueprintFunctionLibrary
local USynthesisUtilitiesBlueprintFunctionLibrary = {}

---Returns the log frequency of the input value. Maps linear domain and range values to log output (good for linear slider controlling frequency)
---@param InLinearValue number
---@param InDomainMin number
---@param InDomainMax number
---@param InRangeMin number
---@param InRangeMax number
---@return number
function USynthesisUtilitiesBlueprintFunctionLibrary.GetLogFrequency(InLinearValue, InDomainMin, InDomainMax, InRangeMin, InRangeMax) end

---Returns the log frequency of the input value. Maps linear domain and range values to log output (good for linear slider controlling frequency)
---@param InLogFrequencyValue number
---@param InDomainMin number
---@param InDomainMax number
---@param InRangeMin number
---@param InRangeMax number
---@return number
function USynthesisUtilitiesBlueprintFunctionLibrary.GetLinearFrequency(InLogFrequencyValue, InDomainMin, InDomainMax, InRangeMin, InRangeMax) end

