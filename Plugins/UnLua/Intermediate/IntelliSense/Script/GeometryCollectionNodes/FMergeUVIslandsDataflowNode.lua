---Merge adjacent UV Islands with similar normals for a specific UV channel
---@class FMergeUVIslandsDataflowNode : FDataflowNode
---@field private Collection FManagedArrayCollection @Target Collection
---@field private FaceSelection FDataflowFaceSelection @Faces to auto unwrap, no selection means all faces
---@field private UVChannel integer @UV channel to unwrap into ( 0 by default )
---@field private AreaDistortionThreshold number @Threshold for allowed area distortion from merging islands (when we use ExpMap to compute new UVs for the merged island)
---@field private MaxNormalDeviationDeg number @Threshold for allowed normal deviation between merge-able islands
---@field private NormalSmoothingRounds integer @Amount of normal smoothing to apply when computing new UVs for merged islands. More smoothing will result in UV maps that are less sensitive to local surface shape.
---@field private NormalSmoothingAlpha number @Strength of normal smoothing to apply when computing new UVs for merged islands. Stronger smoothing will result in UV maps that are less sensitive to local surface shape.
local FMergeUVIslandsDataflowNode = {}
