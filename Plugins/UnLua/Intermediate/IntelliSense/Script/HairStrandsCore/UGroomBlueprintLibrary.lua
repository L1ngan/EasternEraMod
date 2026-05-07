---@class UGroomBlueprintLibrary : UBlueprintFunctionLibrary
local UGroomBlueprintLibrary = {}

---Check for strands support in the world of a given Actor Component
---@param WorldContextObject UObject
---@return boolean
function UGroomBlueprintLibrary.IsHairStrandsSupportedInWorld(WorldContextObject) end

---Create a new groom binding asset within the contents space of the project.
---@param InDesiredPackagePath string
---@param InGroomAsset UGroomAsset
---@param InSkeletalMesh USkeletalMesh
---@param InNumInterpolationPoints integer @[opt] 
---@param InSourceSkeletalMeshForTransfer USkeletalMesh @[opt] 
---@param InMatchingSection integer @[opt] 
---@return UGroomBindingAsset
function UGroomBlueprintLibrary.CreateNewGroomBindingAssetWithPath(InDesiredPackagePath, InGroomAsset, InSkeletalMesh, InNumInterpolationPoints, InSourceSkeletalMeshForTransfer, InMatchingSection) end

---Create a new groom binding asset within the contents space of the project. The asset name will be auto generated based on the groom asset name and the skeletal asset name
---@param InGroomAsset UGroomAsset
---@param InSkeletalMesh USkeletalMesh
---@param InNumInterpolationPoints integer @[opt] 
---@param InSourceSkeletalMeshForTransfer USkeletalMesh @[opt] 
---@param InMatchingSection integer @[opt] 
---@return UGroomBindingAsset
function UGroomBlueprintLibrary.CreateNewGroomBindingAsset(InGroomAsset, InSkeletalMesh, InNumInterpolationPoints, InSourceSkeletalMeshForTransfer, InMatchingSection) end

---Create a new groom binding asset within the contents space of the project.
---@param DesiredPackagePath string
---@param GroomAsset UGroomAsset
---@param GeometryCache UGeometryCache
---@param NumInterpolationPoints integer @[opt] 
---@param SourceGeometryCacheForTransfer UGeometryCache @[opt] 
---@param MatchingSection integer @[opt] 
---@return UGroomBindingAsset
function UGroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAssetWithPath(DesiredPackagePath, GroomAsset, GeometryCache, NumInterpolationPoints, SourceGeometryCacheForTransfer, MatchingSection) end

---Create a new groom binding asset within the contents space of the project. The asset name will be auto generated based on the groom asset name and the skeletal asset name
---@param GroomAsset UGroomAsset
---@param GeometryCache UGeometryCache
---@param NumInterpolationPoints integer @[opt] 
---@param SourceGeometryCacheForTransfer UGeometryCache @[opt] 
---@param MatchingSection integer @[opt] 
---@return UGroomBindingAsset
function UGroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAsset(GroomAsset, GeometryCache, NumInterpolationPoints, SourceGeometryCacheForTransfer, MatchingSection) end

