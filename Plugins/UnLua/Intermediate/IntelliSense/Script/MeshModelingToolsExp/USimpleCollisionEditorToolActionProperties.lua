---@class USimpleCollisionEditorToolActionProperties : UInteractiveToolPropertySet
local USimpleCollisionEditorToolActionProperties = {}

---Duplicate all selected simple collision shapes
function USimpleCollisionEditorToolActionProperties:Duplicate() end

---Remove all current simple collision shapes from the mesh
function USimpleCollisionEditorToolActionProperties:DeleteAll() end

---Remove currently selected simple collision shapes from the mesh
function USimpleCollisionEditorToolActionProperties:Delete() end

---Add a new simple sphere collision shape
function USimpleCollisionEditorToolActionProperties:AddSphere() end

---Add a new simple capsule collision shape
function USimpleCollisionEditorToolActionProperties:AddCapsule() end

---Add a new simple box collision shape
function USimpleCollisionEditorToolActionProperties:AddBox() end

