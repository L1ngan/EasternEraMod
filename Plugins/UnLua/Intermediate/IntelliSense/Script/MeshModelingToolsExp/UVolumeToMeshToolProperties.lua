---@class UVolumeToMeshToolProperties : UInteractiveToolPropertySet
---@field public bWeldEdges boolean @Weld coincident vertices and edges together in the resulting mesh to form a closed mesh surface.
---@field public bAutoRepair boolean @If WeldEdges is enabled, attempt to fill any small holes or cracks in the resulting mesh to form a closed surface.
---@field public bOptimizeMesh boolean @If WeldEdges is enabled, and after mesh generation is complete, flip edges in planar regions to improve triangle quality.
---@field public bShowWireframe boolean @Show the wireframe of the resulting converted mesh geometry.
local UVolumeToMeshToolProperties = {}

