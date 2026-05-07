---@class UOffsetMeshSelectionToolProperties : UInteractiveToolPropertySet
---@field public OffsetDistance number @The Extrusion Distance used in Fixed Input Mode
---@field public Direction EOffsetMeshSelectionDirectionMode @Control how the Offset Area should be displaced
---@field public NumSubdivisions integer @Specify the number of subdivisions along the sides of the Extrusion
---@field public CreaseAngle number @Specify the Crease Angle used to split the sides of the Extrusion into separate Groups
---@field public bShellsToSolids boolean @If the Offset Area has a fully open border, this option determines if Extrusion will create a Solid mesh or leave the base "open"
---@field public bInferGroupsFromNbrs boolean @Control whether a single Group should be generated along the sides of the Extrusion, or multiple Groups based on the adjacent Groups around the Offset Area border
---@field public bGroupPerSubdivision boolean @Control whether a new Group is generated for each Subdivision
---@field public bReplaceSelectionGroups boolean @Control whether groups in the Offset Area are mapped to new Groups, or replaced with a single new Group
---@field public UVScale number @The automatically-generated UVs on the sides of the Extrusion are scaled by this value
---@field public bUVIslandPerGroup boolean @Control whether a separate UV island should be generated for each output Group on the sides of the Extrusion, or a single UV island wrapping around the entire "tube"
---@field public bInferMaterialID boolean @Control whether SetMaterialID is assigned to all triangles along the sides of the Extrusion, or if MaterialIDs should be inferred from the Offset Area
---@field public SetMaterialID integer @Constant Material ID used when MaterialIDs are not being inferred, or no adjacent MaterialID exists
---@field public bShowInputMaterials boolean @Control whether the original Mesh Materials should be shown, or a visualization of the Offset Groups
local UOffsetMeshSelectionToolProperties = {}

