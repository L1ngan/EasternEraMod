---Auto unwrap UVs for a specific UV channel
---@class FAutoUnwrapUVDataflowNode : FDataflowNode
---@field private Collection FManagedArrayCollection @Target Collection
---@field private FaceSelection FDataflowFaceSelection @Faces to auto unwrap, no selection means all faces
---@field private UVChannel integer @UV channel to unwrap into ( 0 by default )
---@field private GutterSize integer @Approximate space to leave between UV islands, measured in texels for 512x512 texture
local FAutoUnwrapUVDataflowNode = {}
