---Settings controlling how geometry is selected and merged into neighboring geometry
---@class UFractureTinyGeoSettings : UFractureToolSettings
---@field public MergeType EMergeType @Whether to merge small geometry, or small clusters
---@field public bOnFractureLevel boolean @Only consider bones at the current Fracture Level
---@field public bOnlyClusters boolean @Only auto-consider clusters for merging. Note that leaf nodes can still be consider if manually selected.
---@field public bOnlySameParent boolean @Only merge to neighbors with the same parent in the hierarchy
---@field public bFractureLevelIsAll boolean @Helper variable to let the EditConditions above check whether the Fracture Level is set to 'All'
---@field public NeighborSelection ENeighborSelectionMethod
---@field public bOnlyToConnected boolean @Only merge pieces that are connected in the proximity graph. If unchecked, connected pieces will still be favored, but if none are available the closest disconnected piece can be merged.
---@field public UseBoneSelection EUseBoneSelection @Options for using the current bone selection
---@field public SelectionMethod EGeometrySelectionMethod
---@field public MinVolumeCubeRoot number @If size (cube root of volume) is less than this value, geometry should be merged into neighbors -- i.e. a value of 2 merges geometry smaller than a 2x2x2 cube
---@field public RelativeVolume number @If cube root of volume relative to the overall shape's cube root of volume is less than this, the geometry should be merged into its neighbors.       (Note: This is a bit different from the histogram viewer's "Relative Size," which instead shows values relative to the largest rigid bone.)
local UFractureTinyGeoSettings = {}

