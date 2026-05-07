---@class ULatticeDeformerToolProperties : UInteractiveToolPropertySet
---@field public XAxisResolution integer @Number of lattice vertices along the X axis
---@field public YAxisResolution integer @Number of lattice vertices along the Y axis
---@field public ZAxisResolution integer @Number of lattice vertices along the Z axis
---@field public Padding number @Relative distance the lattice extends from the mesh
---@field public InterpolationType ELatticeInterpolationType @Whether to use linear or cubic interpolation to get new mesh vertex positions from the lattice
---@field public bDeformNormals boolean @Whether to use approximate new vertex normals using the deformer
---@field public bCanChangeResolution boolean @Not user visible - used to disallow changing the lattice resolution after deformation
---@field public GizmoCoordinateSystem EToolContextCoordinateSystem @Whether the gizmo's axes remain aligned with world axes or rotate as the gizmo is transformed
---@field public bSetPivotMode boolean @If Set Pivot Mode is active, the gizmo can be repositioned without moving the selected lattice points
---@field public bSoftDeformation boolean @Whether to use soft deformation of the lattice
local ULatticeDeformerToolProperties = {}

---Constrain selected lattice points
function ULatticeDeformerToolProperties:Constrain() end

---Clear all constrained lattice points
function ULatticeDeformerToolProperties:ClearConstraints() end

