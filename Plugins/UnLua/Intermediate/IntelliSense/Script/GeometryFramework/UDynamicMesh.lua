---UDynamicMesh is a UObject container for a FDynamicMesh3.
---@class UDynamicMesh : UObject
---@field public MeshModifiedBPEvent MulticastDelegate @Blueprintable event called when mesh is modified, in the same cases as OnMeshChanged
---@field protected MeshGenerator UDynamicMeshGenerator @Active mesh generator. If configured, and bEnableMeshGenerator is true, then MeshGenerator->Generate() will be called when this mesh is Reset(). The Regenerate() function below can be used to force regeneration.
---@field public bEnableMeshGenerator boolean @Controls whether the active Generator (if configured) will be applied when rebuilding the mesh
local UDynamicMesh = {}

---Clear the internal mesh to a 100x100x100 cube with base at the origin.
---This this instead of Reset() if an initially-empty mesh is undesirable (eg for a Component)
---@return UDynamicMesh
function UDynamicMesh:ResetToCube() end

---Clear the internal mesh to an empty mesh.
---This *does not* allocate a new mesh, so any existing mesh pointers/refs are still valid
---@return UDynamicMesh
function UDynamicMesh:Reset() end

---
---@return boolean
function UDynamicMesh:IsEmpty() end

---
---@return integer
function UDynamicMesh:GetTriangleCount() end

