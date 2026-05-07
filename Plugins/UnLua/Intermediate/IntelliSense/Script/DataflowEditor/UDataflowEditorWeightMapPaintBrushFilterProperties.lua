---TODO: Look at EditConditions for all these properties. Which ones make sense for which SubToolType?
---@class UDataflowEditorWeightMapPaintBrushFilterProperties : UInteractiveToolPropertySet
---@field public SubToolType EDataflowEditorWeightMapPaintInteractionType
---@field public PrimaryBrushType EDataflowEditorWeightMapPaintBrushType
---@field public BrushSize number @Relative size of brush
---@field public AttributeValue number @The new value to paint on the mesh
---@field public Strength number @How quickly each brush stroke will drive mesh values towards the desired value
---@field public GradientHighValue number @The Gradient upper limit value
---@field public GradientLowValue number @The Gradient lower limit value
---@field public BrushAreaMode EMeshVertexPaintBrushAreaType @Area Mode specifies the shape of the brush and which triangles will be included relative to the cursor
---@field public AngleThreshold number @The Region affected by the current operation will be bounded by edge angles larger than this threshold
---@field public bUVSeams boolean @The Region affected by the current operation will be bounded by UV borders/seams
---@field public bNormalSeams boolean @The Region affected by the current operation will be bounded by Hard Normal edges/seams
---@field public VisibilityFilter EDataflowEditorWeightMapPaintVisibilityType @Control which triangles can be affected by the current operation based on visibility. Applied after all other filters.
---@field public ValueAtBrush number @The weight value at the brush indicator
local UDataflowEditorWeightMapPaintBrushFilterProperties = {}

