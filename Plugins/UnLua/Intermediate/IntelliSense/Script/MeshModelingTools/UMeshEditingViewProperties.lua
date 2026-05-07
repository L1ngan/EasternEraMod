---@class UMeshEditingViewProperties : UInteractiveToolPropertySet
---@field public bShowWireframe boolean @Toggle drawing of wireframe overlay on/off [Alt+W]
---@field public MaterialMode EMeshEditingMaterialModes @Set which material to use on object
---@field public bFlatShading boolean @Toggle flat shading on/off
---@field public Color FLinearColor @Main Color of Material
---@field public Image UTexture2D @Image used in Image-Based Material
---@field public Opacity number @Opacity of transparent material
---@field public TransparentMaterialColor FLinearColor
---@field public bTwoSided boolean @Although a two-sided transparent material causes rendering issues with overlapping faces, it is still frequently useful to see the shape when sculpting around other objects.
---@field public CustomMaterial TWeakObjectPtr<UMaterialInterface>
local UMeshEditingViewProperties = {}

