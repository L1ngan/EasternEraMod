---@class UVertexBrushSculptProperties : UInteractiveToolPropertySet
---@field public PrimaryBrushType EMeshVertexSculptBrushType
---@field public PrimaryBrushID integer @Primary Brush Mode
---@field public PrimaryFalloffType EMeshSculptFalloffType @Primary Brush Falloff Type, multiplied by Alpha Mask where applicable
---@field public BrushFilter EMeshVertexSculptBrushFilterType @Filter applied to Stamp Region Triangles, based on first Stroke Stamp
---@field public bFreezeTarget boolean @When Freeze Target is toggled on, the Brush Target Surface will be Frozen in its current state, until toggled off. Brush strokes will be applied relative to the Target Surface, for applicable Brushes
---@field public bCanFreezeTarget boolean
---@field public Tool TWeakObjectPtr<UMeshVertexSculptTool> @parent ref required for details customization
local UVertexBrushSculptProperties = {}

