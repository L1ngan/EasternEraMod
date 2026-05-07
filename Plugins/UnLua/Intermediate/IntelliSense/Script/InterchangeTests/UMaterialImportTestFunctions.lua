---@class UMaterialImportTestFunctions : UImportTestFunctionsBase
local UMaterialImportTestFunctions = {}

---Check whether the imported material has the expected vector parameter value
---@param MaterialInterface UMaterialInterface
---@param ParameterName string
---@param ExpectedParameterValue FLinearColor
---@return FInterchangeTestFunctionResult
function UMaterialImportTestFunctions.CheckVectorParameter(MaterialInterface, ParameterName, ExpectedParameterValue) end

---Check whether the imported material has the expected shading model
---@param MaterialInterface UMaterialInterface
---@param ExpectedShadingModel integer
---@return FInterchangeTestFunctionResult
function UMaterialImportTestFunctions.CheckShadingModel(MaterialInterface, ExpectedShadingModel) end

---Check whether the imported material has the expected scalar parameter value
---@param MaterialInterface UMaterialInterface
---@param ParameterName string
---@param ExpectedParameterValue number
---@return FInterchangeTestFunctionResult
function UMaterialImportTestFunctions.CheckScalarParameter(MaterialInterface, ParameterName, ExpectedParameterValue) end

---Check whether the imported material has the expected opacity mask clip value
---@param MaterialInterface UMaterialInterface
---@param ExpectedOpacityMaskClipValue number
---@return FInterchangeTestFunctionResult
function UMaterialImportTestFunctions.CheckOpacityMaskClipValue(MaterialInterface, ExpectedOpacityMaskClipValue) end

---Check whether the imported material has the expected two-sided setting
---@param MaterialInterface UMaterialInterface
---@param ExpectedIsTwoSided boolean
---@return FInterchangeTestFunctionResult
function UMaterialImportTestFunctions.CheckIsTwoSided(MaterialInterface, ExpectedIsTwoSided) end

---Check whether the expected number of material instances are imported
---@param MaterialInterfaces TArray_UMaterialInterface_
---@param ExpectedNumberOfImportedMaterialInstances integer
---@return FInterchangeTestFunctionResult
function UMaterialImportTestFunctions.CheckImportedMaterialInstanceCount(MaterialInterfaces, ExpectedNumberOfImportedMaterialInstances) end

---Check whether the expected number of materials are imported
---@param MaterialInterfaces TArray_UMaterialInterface_
---@param ExpectedNumberOfImportedMaterials integer
---@return FInterchangeTestFunctionResult
function UMaterialImportTestFunctions.CheckImportedMaterialCount(MaterialInterfaces, ExpectedNumberOfImportedMaterials) end

---Check whether the imported material has the expected blend mode
---@param MaterialInterface UMaterialInterface
---@param ExpectedBlendMode integer
---@return FInterchangeTestFunctionResult
function UMaterialImportTestFunctions.CheckBlendMode(MaterialInterface, ExpectedBlendMode) end

