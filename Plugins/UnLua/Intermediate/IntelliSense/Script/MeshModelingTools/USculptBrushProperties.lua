---@class USculptBrushProperties : UInteractiveToolPropertySet
---@field public BrushSize FBrushToolRadius
---@field public BrushFalloffAmount number @Amount of falloff to apply (0.0 - 1.0)
---@field public bShowFalloff boolean @If false, then BrushFalloffAmount will not be shown in DetailsView panels (otherwise no effect)
---@field public Depth number @Depth of Brush into surface along view ray or surface normal, depending on the Active Brush Type
---@field public bHitBackFaces boolean @Allow the Brush to hit the back-side of the mesh
---@field public FlowRate number @Brush stamps are applied at this time interval. 0 for a single stamp, 1 for continuous stamps, 0.5 is a stamp every half-second
---@field public Spacing number @Space out stamp centers at distances Spacing*BrushDiameter along the stroke (so Spacing of 1 means that stamps will be adjacent but non-overlapping). Zero spacing means continuous stamps.
---@field public Lazyness number @Lazy brush smooths out the brush path by averaging the cursor positions
---@field public bShowPerBrushProps boolean
---@field public bShowLazyness boolean
---@field public bShowFlowRate boolean
---@field public bShowSpacing boolean
local USculptBrushProperties = {}

