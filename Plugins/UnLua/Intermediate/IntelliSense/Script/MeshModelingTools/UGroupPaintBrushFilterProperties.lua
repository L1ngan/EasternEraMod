---@class UGroupPaintBrushFilterProperties : UInteractiveToolPropertySet
---@field public PrimaryBrushType EMeshGroupPaintBrushType @Primary Brush Mode //UPROPERTY(EditAnywhere, Category = Brush2, meta = (DisplayName = "Brush Type"))
---@field public SubToolType EMeshGroupPaintInteractionType
---@field public BrushSize number @Relative size of brush
---@field public BrushAreaMode EMeshGroupPaintBrushAreaType @When Volumetric, all faces inside the brush sphere are selected, otherwise only connected faces are selected
---@field public bHitBackFaces boolean @Allow the Brush to hit the back-side of the mesh
---@field public SetGroup integer @The group that will be assigned to triangles
---@field public bOnlySetUngrouped boolean @If true, only triangles with no group assigned will be painted
---@field public EraseGroup integer @Group to set as Erased value
---@field public bOnlyEraseCurrent boolean @When enabled, only the current group configured in the Paint brush is erased
---@field public AngleThreshold number @The Region affected by the current operation will be bounded by edge angles larger than this threshold
---@field public bUVSeams boolean @The Region affected by the current operation will be bounded by UV borders/seams
---@field public bNormalSeams boolean @The Region affected by the current operation will be bounded by Hard Normal edges/seams
---@field public VisibilityFilter EMeshGroupPaintVisibilityType @Control which triangles can be affected by the current operation based on visibility. Applied after all other filters.
---@field public MinTriVertCount integer @Number of vertices in a triangle the Lasso must hit to be counted as "inside"
---@field public bShowHitGroup boolean @Display the Group ID of the last triangle under the cursor
---@field public bShowAllGroups boolean @Display the Group ID for all visible groups in the mesh
local UGroupPaintBrushFilterProperties = {}

