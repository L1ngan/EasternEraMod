---UShapeSprayTool is a brush-based tool that generates random points on the
---target surface within the brush radius, and then creates small meshes
---at those points. The accumulated meshes are appended and can
---be emitted as a new StaticMeshComponent on Accept.
---@class UShapeSprayTool : UDynamicMeshBrushTool
---@field protected Settings UShapeSprayToolProperties
---@field protected AccumMeshComponent UDynamicMeshComponent @small meshes are accumulated here
local UShapeSprayTool = {}

