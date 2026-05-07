---Make a capsule mesh
---@class FMakeCapsuleMeshDataflowNode : FDataflowNode
---@field private Radius number @Radius of capsule
---@field private SegmentLength number @Length of capsule line segment, so total height is SegmentLength + 2*Radius
---@field private NumHemisphereArcSteps integer @Number of vertices along the 90-degree arc from the pole to edge of spherical cap.
---@field private NumCircleSteps integer @Number of vertices along each circle
---@field private NumSegmentSteps integer @Number of subdivisions lengthwise along the cylindrical section
---@field private Mesh UDynamicMesh @Output mesh
local FMakeCapsuleMeshDataflowNode = {}
