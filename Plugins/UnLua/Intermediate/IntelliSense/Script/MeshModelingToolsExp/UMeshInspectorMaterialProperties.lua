---material settings for mesh inspector tool
---@class UMeshInspectorMaterialProperties : UInteractiveToolPropertySet
---@field public MaterialMode EMeshInspectorMaterialMode @Material that will be used to render the mesh
---@field public CheckerDensity number @Number of checkerboard tiles within the 0 to 1 range; only available when Checkerboard is selected as material mode
---@field public OverrideMaterial UMaterialInterface @Material to use instead of the original material; only available when Override is selected as material mode
---@field public UVChannel string @Which UV channel to use for visualizing the checkerboard material on the mesh; note that this does not affect the preview layout
---@field public UVChannelNamesList TArray<string>
---@field public bFlatShading boolean @Toggle flat shading on/off
---@field public Color FLinearColor @Main Color of Material
---@field public Opacity number @Opacity of transparent material
---@field public TransparentMaterialColor FLinearColor
---@field public bTwoSided boolean @Although a two-sided transparent material causes rendering issues with overlapping faces, it is still frequently useful to see the shape when sculpting around other objects.
---@field public CheckerMaterial UMaterialInstanceDynamic
---@field public ActiveCustomMaterial UMaterialInstanceDynamic
local UMeshInspectorMaterialProperties = {}

---@return TArray_string_
function UMeshInspectorMaterialProperties:GetUVChannelNamesFunc() end

