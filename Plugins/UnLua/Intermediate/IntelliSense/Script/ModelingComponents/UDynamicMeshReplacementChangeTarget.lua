---Bare bones wrapper of FDynamicMesh3 that supports MeshReplacementChange-based updates.  Shares the mesh ptr with the MeshReplacementChange objects, so it must not be changed directly
---TODO: also support other MeshChange objects (by making a copy of the mesh when applying these changes)
---@class UDynamicMeshReplacementChangeTarget : UObject
local UDynamicMeshReplacementChangeTarget = {}

