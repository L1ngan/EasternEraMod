---@class UMeshVertexPainterKismetLibrary : UBlueprintFunctionLibrary
local UMeshVertexPainterKismetLibrary = {}

---Removes vertex colors on a mesh component
---@param StaticMeshComponent UStaticMeshComponent
function UMeshVertexPainterKismetLibrary.RemovePaintedVertices(StaticMeshComponent) end

---Paints vertex colors on a mesh component in a specified color.
---@param StaticMeshComponent UStaticMeshComponent
---@param FillColor FLinearColor
---@param bConvertToSRGB boolean @[opt] 
function UMeshVertexPainterKismetLibrary.PaintVerticesSingleColor(StaticMeshComponent, FillColor, bConvertToSRGB) end

---Paints vertex colors on a mesh component lerping from the start to the end color along the specified axis.
---@param StaticMeshComponent UStaticMeshComponent
---@param StartColor FLinearColor
---@param EndColor FLinearColor
---@param Axis EVertexPaintAxis
---@param bConvertToSRGB boolean @[opt] 
function UMeshVertexPainterKismetLibrary.PaintVerticesLerpAlongAxis(StaticMeshComponent, StartColor, EndColor, Axis, bConvertToSRGB) end

