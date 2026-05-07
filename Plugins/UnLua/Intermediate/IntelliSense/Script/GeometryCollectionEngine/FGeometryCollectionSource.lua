---@class FGeometryCollectionSource
---@field public SourceGeometryObject FSoftObjectPath
---@field public LocalTransform FTransform
---@field public SourceMaterial TArray<UMaterialInterface>
---@field public InstanceCustomData TArray<number>
---@field public bAddInternalMaterials boolean @(Legacy) Whether source materials will be duplicated to create new slots for internal materials, or existing odd materials will be considered internal. (For non-Geometry Collection inputs only.)
---@field public bSplitComponents boolean @Whether individual source mesh components should be split into separate pieces of geometry based on mesh connectivity. If checked, triangles that are not topologically connected will be assigned separate bones. (For non-Geometry Collection inputs only.)
---@field public bSetInternalFromMaterialIndex boolean @Whether to set the 'internal' flag for faces with odd-numbered materials slots.
local FGeometryCollectionSource = {}
