---@class ULightImportTestFunctions : UActorImportTestFunctions
local ULightImportTestFunctions = {}

---Check whether the light position is correct
---@param Light ALight
---@param ExpectedLightPosition FVector
---@return FInterchangeTestFunctionResult
function ULightImportTestFunctions.CheckLightPosition(Light, ExpectedLightPosition) end

---Check whether the light intensity is correct
---@param Light ALight
---@param ExpectedLightIntensity number
---@return FInterchangeTestFunctionResult
function ULightImportTestFunctions.CheckLightIntensity(Light, ExpectedLightIntensity) end

---Check whether the light direction is correct
---@param Light ALight
---@param ExpectedLightDirection FVector
---@return FInterchangeTestFunctionResult
function ULightImportTestFunctions.CheckLightDirection(Light, ExpectedLightDirection) end

---Check whether the light color is correct
---@param Light ALight
---@param ExpectedLightColor FLinearColor
---@return FInterchangeTestFunctionResult
function ULightImportTestFunctions.CheckLightColor(Light, ExpectedLightColor) end

