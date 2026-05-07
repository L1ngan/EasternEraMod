---Settings controlling how convex hulls are generated for geometry collections
---@class UFractureConvexSettings : UFractureToolSettings
---@field public CanExceedFraction number @Fraction (of geometry volume) by which a cluster's convex hull volume can exceed the actual geometry volume before instead using the hulls of the children.  0 means the convex volume cannot exceed the geometry volume; 1 means the convex volume is allowed to be 100% larger (2x) the geometry volume.
---@field public SimplificationDistanceThreshold number @We simplify the convex shape to keep points spaced at least this far apart (except to keep the hull from collapsing to zero volume)
---@field public RemoveOverlaps EConvexOverlapRemoval @Whether to automatically cut away overlapping parts of the convex hulls, to avoid the simulation 'popping' to fix the overlaps
---@field public OverlapRemovalShrinkPercent number @Overlap removal will be computed as if convex hulls were this percentage smaller (in range 0-100)
---@field public FractionAllowRemove number @Fraction of the convex hulls for a cluster that we can remove before using the hulls of the children
---@field public bSeeThroughLines boolean @When enabled, convex visualization lines will show through the actual geometry
---@field public LineThickness number @line thickness
local UFractureConvexSettings = {}

---Delete convex hulls from selected clusters.  Does not affect hulls on leaves.
function UFractureConvexSettings:DeleteFromSelected() end

---Clear any manual adjustments to convex hulls on the selected bones
function UFractureConvexSettings:ClearCustomConvex() end

