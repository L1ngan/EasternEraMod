---UPreviewGeometry creates and manages an APreviewGeometryActor and a set of preview geometry Components.
---Preview geometry Components are identified by strings.
---@class UPreviewGeometry : UObject
---@field public ParentActor APreviewGeometryActor @Actor created and managed by the UPreviewGeometry
---@field public TriangleSets TMap<string, UTriangleSetComponent> @TriangleSetComponents created and owned by the UPreviewGeometry, and added as child components of the ParentActor
---@field public LineSets TMap<string, ULineSetComponent> @LineSetComponents created and owned by the UPreviewGeometry, and added as child components of the ParentActor
---@field public PointSets TMap<string, UPointSetComponent> @PointSetComponents created and owned by the UPreviewGeometry, and added as child components of the ParentActor
local UPreviewGeometry = {}

---Set the visibility of the PointSetComponent with the given PointSetIdentifier
---@param PointSetIdentifier string
---@param bVisible boolean
---@return boolean
function UPreviewGeometry:SetPointSetVisibility(PointSetIdentifier, bVisible) end

---Set the Material of the PointSetComponent with the given PointSetIdentifier
---@param PointSetIdentifier string
---@param NewMaterial UMaterialInterface
---@return boolean
function UPreviewGeometry:SetPointSetMaterial(PointSetIdentifier, NewMaterial) end

---Set the visibility of the LineSetComponent with the given LineSetIdentifier
---@param LineSetIdentifier string
---@param bVisible boolean
---@return boolean
function UPreviewGeometry:SetLineSetVisibility(LineSetIdentifier, bVisible) end

---Set the Material of the LineSetComponent with the given LineSetIdentifier
---@param LineSetIdentifier string
---@param NewMaterial UMaterialInterface
---@return boolean
function UPreviewGeometry:SetLineSetMaterial(LineSetIdentifier, NewMaterial) end

---Set the Material of all PointSetComponents
---@param Material UMaterialInterface
function UPreviewGeometry:SetAllPointSetsMaterial(Material) end

---Set the Material of all LineSetComponents
---@param Material UMaterialInterface
function UPreviewGeometry:SetAllLineSetsMaterial(Material) end

---Remove the TriangleSetComponent with the given TriangleSetIdentifier
---@param TriangleSetIdentifier string
---@param bDestroy boolean
---@return boolean
function UPreviewGeometry:RemoveTriangleSet(TriangleSetIdentifier, bDestroy) end

---Remove the PointSetComponent with the given PointSetIdentifier
---@param PointSetIdentifier string
---@param bDestroy boolean
---@return boolean
function UPreviewGeometry:RemovePointSet(PointSetIdentifier, bDestroy) end

---Remove the LineSetComponent with the given LineSetIdentifier
---@param LineSetIdentifier string
---@param bDestroy boolean
---@return boolean
function UPreviewGeometry:RemoveLineSet(LineSetIdentifier, bDestroy) end

---Remove all TriangleSetComponents
---@param bDestroy boolean
function UPreviewGeometry:RemoveAllTriangleSets(bDestroy) end

---Remove all PointSetComponents
---@param bDestroy boolean
function UPreviewGeometry:RemoveAllPointSets(bDestroy) end

---Remove all LineSetComponents
---@param bDestroy boolean
function UPreviewGeometry:RemoveAllLineSets(bDestroy) end

---
---@return APreviewGeometryActor
function UPreviewGeometry:GetActor() end

---
---@param TriangleSetIdentifier string
---@return UTriangleSetComponent
function UPreviewGeometry:FindTriangleSet(TriangleSetIdentifier) end

---
---@param PointSetIdentifier string
---@return UPointSetComponent
function UPreviewGeometry:FindPointSet(PointSetIdentifier) end

---
---@param LineSetIdentifier string
---@return ULineSetComponent
function UPreviewGeometry:FindLineSet(LineSetIdentifier) end

---Remove and destroy preview mesh
function UPreviewGeometry:Disconnect() end

---Create preview mesh in the World with the given transform
---@param World UWorld
---@param WithTransform FTransform
function UPreviewGeometry:CreateInWorld(World, WithTransform) end

---Create a new triangle set with the given TriangleSetIdentifier and return it
---@param TriangleSetIdentifier string
---@return UTriangleSetComponent
function UPreviewGeometry:AddTriangleSet(TriangleSetIdentifier) end

---Create a new point set with the given PointSetIdentifier and return it
---@param PointSetIdentifier string
---@return UPointSetComponent
function UPreviewGeometry:AddPointSet(PointSetIdentifier) end

---Create a new line set with the given LineSetIdentifier and return it
---@param LineSetIdentifier string
---@return ULineSetComponent
function UPreviewGeometry:AddLineSet(LineSetIdentifier) end

