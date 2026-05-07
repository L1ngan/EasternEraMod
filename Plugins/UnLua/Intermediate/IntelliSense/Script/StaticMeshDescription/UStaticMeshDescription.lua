---A wrapper for MeshDescription, customized for static meshes
---@class UStaticMeshDescription : UMeshDescriptionBase
local UStaticMeshDescription = {}

---@param VertexInstanceID FVertexInstanceID
---@param UV FVector2D
---@param UVIndex integer @[opt] 
function UStaticMeshDescription:SetVertexInstanceUV(VertexInstanceID, UV, UVIndex) end

---@param PolygonGroupID FPolygonGroupID
---@param SlotName string
function UStaticMeshDescription:SetPolygonGroupMaterialSlotName(PolygonGroupID, SlotName) end

---@param VertexInstanceID FVertexInstanceID
---@param UVIndex integer @[opt] 
---@return FVector2D
function UStaticMeshDescription:GetVertexInstanceUV(VertexInstanceID, UVIndex) end

---@param Center FVector
---@param HalfExtents FVector
---@param PolygonGroup FPolygonGroupID
---@param PolygonID_PlusX FPolygonID @[out] 
---@param PolygonID_MinusX FPolygonID @[out] 
---@param PolygonID_PlusY FPolygonID @[out] 
---@param PolygonID_MinusY FPolygonID @[out] 
---@param PolygonID_PlusZ FPolygonID @[out] 
---@param PolygonID_MinusZ FPolygonID @[out] 
function UStaticMeshDescription:CreateCube(Center, HalfExtents, PolygonGroup, PolygonID_PlusX, PolygonID_MinusX, PolygonID_PlusY, PolygonID_MinusY, PolygonID_PlusZ, PolygonID_MinusZ) end

