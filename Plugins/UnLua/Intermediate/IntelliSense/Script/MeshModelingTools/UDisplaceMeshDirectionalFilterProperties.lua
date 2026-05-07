---Properties for a directional filter. Allows for displacement to be applied only to vertices whose normals point in a given direction
---@class UDisplaceMeshDirectionalFilterProperties : UInteractiveToolPropertySet
---@field public bEnableFilter boolean @Whether the directional filter is active.
---@field public FilterDirection FVector @Unit vector representing the direction to filter along.
---@field public FilterWidth number @Scalar value determining how close to the filter direction the vertex normals must be in order to be displaced.               0: Only normals pointing exactly in the filter direction are displaced.               0.5: Normals forming angle up to 90 from the filter direction are displaced.               1.0: All vertices are displaced.
local UDisplaceMeshDirectionalFilterProperties = {}

