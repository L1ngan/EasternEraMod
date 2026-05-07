---@class ULevelVariantSetsImportTestFunctions : UImportTestFunctionsBase
local ULevelVariantSetsImportTestFunctions = {}

---Check whether the imported LevelVariantSets has the expected number of variant sets
---@param LevelVariantSets ULevelVariantSets
---@param ExpectedNumberOfVariantSets integer
---@return FInterchangeTestFunctionResult
function ULevelVariantSetsImportTestFunctions.CheckVariantSetsCount(LevelVariantSets, ExpectedNumberOfVariantSets) end

---Check whether the imported LevelVariantSets has the expected number of variants for the given variant set
---@param LevelVariantSets ULevelVariantSets
---@param VariantSetName string
---@param ExpectedNumberOfVariants integer
---@return FInterchangeTestFunctionResult
function ULevelVariantSetsImportTestFunctions.CheckVariantsCount(LevelVariantSets, VariantSetName, ExpectedNumberOfVariants) end

---Check whether the expected number of LevelVariantSets are imported
---@param LevelVariantSetsAssets TArray_ULevelVariantSets_
---@param ExpectedNumberOfLevelVariantSets integer
---@return FInterchangeTestFunctionResult
function ULevelVariantSetsImportTestFunctions.CheckLevelVariantSetsCount(LevelVariantSetsAssets, ExpectedNumberOfLevelVariantSets) end

---Check whether the imported LevelVariantSets has the expected number of bindings for the given variant in the given set
---@param LevelVariantSets ULevelVariantSets
---@param VariantSetName string
---@param VariantName string
---@param ExpectedNumberOfBindings integer
---@return FInterchangeTestFunctionResult
function ULevelVariantSetsImportTestFunctions.CheckBindingsCount(LevelVariantSets, VariantSetName, VariantName, ExpectedNumberOfBindings) end

