---@class UEditMeshMaterialsToolProperties : UInteractiveToolPropertySet
---@field public ActiveMaterial string
---@field public MaterialNamesList TArray<string>
---@field public Materials TArray<UMaterialInterface>
local UEditMeshMaterialsToolProperties = {}

---@return TArray_string_
function UEditMeshMaterialsToolProperties:GetMaterialNamesFunc() end

