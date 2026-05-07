---@class UMeshConstraintProperties : UInteractiveToolPropertySet
---@field public bPreserveSharpEdges boolean @If true, sharp edges are preserved
---@field public MeshBoundaryConstraint EMeshBoundaryConstraint @Mesh Boundary Constraint Type
---@field public GroupBoundaryConstraint EGroupBoundaryConstraint @Group Boundary Constraint Type
---@field public MaterialBoundaryConstraint EMaterialBoundaryConstraint @Material Boundary Constraint Type
---@field public bPreventNormalFlips boolean @Prevent normal flips
---@field public bPreventTinyTriangles boolean @Prevent introduction of tiny triangles or slivers
local UMeshConstraintProperties = {}

---@return boolean
function UMeshConstraintProperties:IsPreventTinyTrianglesEnabled() end

---@return boolean
function UMeshConstraintProperties:IsPreventNormalFlipsEnabled() end

