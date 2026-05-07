---@class UMeshVertexPaintToolQuickActions : UMeshVertexPaintToolActionPropertySet
local UMeshVertexPaintToolQuickActions = {}

---Fill all Vertex Colors with the current Paint color. Current Channel Filter still applies.
function UMeshVertexPaintToolQuickActions:PaintAll() end

---Fill all Vertex Colors with the Color (1,1,1,1). Current Channel Filter still applies.
function UMeshVertexPaintToolQuickActions:FillWhite() end

---Fill all Vertex Colors with the Color (0,0,0,1). Current Channel Filter still applies.
function UMeshVertexPaintToolQuickActions:FillBlack() end

---Fill all Vertex Colors with the current Erase color. Current Channel Filter still applies.
function UMeshVertexPaintToolQuickActions:EraseAll() end

