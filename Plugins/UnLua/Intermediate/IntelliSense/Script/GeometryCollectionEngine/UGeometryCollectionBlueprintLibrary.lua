---Blueprint library for Geometry Collections.
---@class UGeometryCollectionBlueprintLibrary : UBlueprintFunctionLibrary
local UGeometryCollectionBlueprintLibrary = {}

---@param GeometryCollectionComponent UGeometryCollectionComponent
---@param CustomDataIndex integer
---@param CustomDataValue number
function UGeometryCollectionBlueprintLibrary.SetISMPoolCustomInstanceData(GeometryCollectionComponent, CustomDataIndex, CustomDataValue) end

---Set a custom instance data value for all instances associated with a geometry collection.
---This assumes that the geometry collection is using a custom renderer that supports IGeometryCollectionCustomDataInterface.
---@param GeometryCollectionComponent UGeometryCollectionComponent
---@param CustomDataName string
---@param CustomDataValue number
function UGeometryCollectionBlueprintLibrary.SetCustomInstanceDataByName(GeometryCollectionComponent, CustomDataName, CustomDataValue) end

---Set a custom instance data value for all instances associated with a geometry collection.
---This assumes that the geometry collection is using a custom renderer that supports IGeometryCollectionCustomDataInterface.
---@param GeometryCollectionComponent UGeometryCollectionComponent
---@param CustomDataIndex integer
---@param CustomDataValue number
function UGeometryCollectionBlueprintLibrary.SetCustomInstanceDataByIndex(GeometryCollectionComponent, CustomDataIndex, CustomDataValue) end

