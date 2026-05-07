---@class USpotLightImportTestFunctions : UPointLightImportTestFunctions
local USpotLightImportTestFunctions = {}

---Check whether the light outer cone angle is correct
---@param Light ASpotLight
---@param ExpectedLightOuterConeAngle number
---@return FInterchangeTestFunctionResult
function USpotLightImportTestFunctions.CheckLightOuterConeAngle(Light, ExpectedLightOuterConeAngle) end

---Check whether the light inner cone angle is correct
---@param Light ASpotLight
---@param ExpectedLightInnerConeAngle number
---@return FInterchangeTestFunctionResult
function USpotLightImportTestFunctions.CheckLightInnerConeAngle(Light, ExpectedLightInnerConeAngle) end

