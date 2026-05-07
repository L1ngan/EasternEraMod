---Copy convex hulls from given transforms on a source collection to transforms on the target collection
---@class FCopyConvexHullsFromRootDataflowNode : FDataflowNode
---@field private Collection FManagedArrayCollection
---@field private FromCollection FManagedArrayCollection
---@field private bSkipIfEmpty boolean @Whether to skip copying from roots with no convex hulls
---@field private DebugDrawRenderSettings FDataflowNodeDebugDrawSettings
---@field private bRandomizeColor boolean @Randomize color per convex hull
---@field private ColorRandomSeed integer @Random seed
local FCopyConvexHullsFromRootDataflowNode = {}
