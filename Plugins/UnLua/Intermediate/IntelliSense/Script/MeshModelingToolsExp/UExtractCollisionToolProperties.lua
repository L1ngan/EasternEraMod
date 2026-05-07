---@class UExtractCollisionToolProperties : UInteractiveToolPropertySet
---@field public CollisionType EExtractCollisionOutputType @Type of collision geometry to convert to Mesh
---@field public bOutputSeparateMeshes boolean @Whether or not to generate a seperate Mesh Object for each Simple Collision Shape
---@field public bShowPreview boolean @Show/Hide a preview of the generated mesh (overlaps source mesh)
---@field public bShowInputMesh boolean @Show/Hide input mesh
---@field public bWeldEdges boolean @Whether or not to weld coincident border edges of the Complex Collision Mesh (if possible)
local UExtractCollisionToolProperties = {}

