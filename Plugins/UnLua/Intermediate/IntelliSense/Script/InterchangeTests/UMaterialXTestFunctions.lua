---@class UMaterialXTestFunctions : UImportTestFunctionsBase
local UMaterialXTestFunctions = {}

---Check whether a specific input of the MX_StandardSurface material function is connected or not
---@param MaterialInterface UMaterialInterface
---@param InputName string
---@param bIsConnected boolean
---@return FInterchangeTestFunctionResult
function UMaterialXTestFunctions.CheckInputConnected(MaterialInterface, InputName, bIsConnected) end

---Check whether the expected number of inputs are connected to the MX_StandardSurface material function
---@param MaterialInterface UMaterialInterface
---@param ExpectedNumber integer
---@return FInterchangeTestFunctionResult
function UMaterialXTestFunctions.CheckConnectedInputCount(MaterialInterface, ExpectedNumber) end

