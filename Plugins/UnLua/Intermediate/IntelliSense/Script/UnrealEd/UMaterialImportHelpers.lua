---@class UMaterialImportHelpers : UObject
local UMaterialImportHelpers = {}

---@param MaterialFullName string
---@param BasePackagePath string
---@param SearchLocation EMaterialSearchLocation
---@param OutError string @[out] 
---@return UMaterialInterface
function UMaterialImportHelpers.FindExistingMaterialFromSearchLocation(MaterialFullName, BasePackagePath, SearchLocation, OutError) end

---@param BasePath string
---@param MaterialFullName string
---@param bRecursivePaths boolean
---@param OutError string @[out] 
---@return UMaterialInterface
function UMaterialImportHelpers.FindExistingMaterial(BasePath, MaterialFullName, bRecursivePaths, OutError) end

