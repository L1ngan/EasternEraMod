---@class UDynamicMeshBrushSculptProperties : UInteractiveToolPropertySet
---@field public bIsRemeshingEnabled boolean @This is a dupe of the bool in the tool class.  I needed it here so it could be checked as an EditCondition
---@field public PrimaryBrushType EDynamicMeshSculptBrushType @Primary Brush Mode
---@field public PrimaryBrushSpeed number @Strength of the Primary Brush
---@field public bPreserveUVFlow boolean @If true, try to preserve the shape of the UV/3D mapping. This will limit Smoothing and Remeshing in some cases.
---@field public bFreezeTarget boolean @When Freeze Target is toggled on, the Brush Target Surface will be Frozen in its current state, until toggled off. Brush strokes will be applied relative to the Target Surface, for applicable Brushes
---@field public SmoothBrushSpeed number @Strength of Shift-to-Smooth Brushing and Smoothing Brush
---@field public bDetailPreservingSmooth boolean @If enabled, Remeshing is limited during Smoothing to avoid wiping out higher-density triangle areas
local UDynamicMeshBrushSculptProperties = {}

