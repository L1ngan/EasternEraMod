---Standard properties of the Transfer operation
---@class UTransferMeshToolProperties : UInteractiveToolPropertySet
---@field public bTransferMaterials boolean
---@field public bTransferCollision boolean
---@field public SourceLOD string @Specify which LOD from the Source (First) mesh to copy from
---@field public TargetLOD string @Specify which LOD on the Target (Second) mesh to copy to
---@field public bIsStaticMeshSource boolean @non-exposed properties used to provide custom lists to SourceLOD/TargetLOD
---@field public SourceLODNamesList TArray<string>
---@field public TargetLODNamesList TArray<string>
---@field public bIsStaticMeshTarget boolean
local UTransferMeshToolProperties = {}

---@return TArray_string_
function UTransferMeshToolProperties:GetTargetLODNamesFunc() end

---@return TArray_string_
function UTransferMeshToolProperties:GetSourceLODNamesFunc() end

