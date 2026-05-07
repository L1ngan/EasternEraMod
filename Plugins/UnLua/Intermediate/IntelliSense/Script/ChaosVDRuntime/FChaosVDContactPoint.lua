---@class FChaosVDContactPoint
---@field public ShapeContactPoints FVector @Shape-space contact points on the two bodies
---@field public ShapeContactNormal FVector @Shape-space contact normal on the second shape with direction that points away from shape 1
---@field public Phi number @Contact separation (negative for overlap)
---@field public FaceIndex integer @Face index of the shape we hit. Only valid for Heightfield and Trimesh contact points, otherwise INDEX_NONE
---@field public ContactType EChaosVDContactPointType @Whether this is a vertex-plane contact, edge-edge contact etc.
local FChaosVDContactPoint = {}
