---Standard material property settings for tools that visualize materials on existing meshes (e.g. to help show UVs)
---@class UExistingMeshMaterialProperties : UInteractiveToolPropertySet
---@field public MaterialMode ESetMeshMaterialMode @Material that will be used on the mesh
---@field public CheckerDensity number @Number of checkerboard tiles within the 0 to 1 range; only available when Checkerboard is selected as material mode
---@field public OverrideMaterial UMaterialInterface @Material to use instead of the original material; only available when Override is selected as material mode
---@field public UVChannel string @Which UV channel to use for visualizing the checkerboard material on the mesh; note that this does not affect the preview layout
---@field public UVChannelNamesList TArray<string>
---@field public CheckerMaterial UMaterialInstanceDynamic
local UExistingMeshMaterialProperties = {}

---@return TArray_string_
function UExistingMeshMaterialProperties:GetUVChannelNamesFunc() end

