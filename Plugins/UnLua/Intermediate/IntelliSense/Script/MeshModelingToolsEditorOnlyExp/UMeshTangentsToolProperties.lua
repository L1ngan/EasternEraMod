---@class UMeshTangentsToolProperties : UInteractiveToolPropertySet
---@field public CalculationMethod EMeshTangentsType @Method used for calculating the tangents
---@field public bShowTangents boolean @Display the mesh tangents
---@field public bShowNormals boolean @Display the mesh normals
---@field public LineLength number @Length of lines used for displaying tangents and/or normals
---@field public LineThickness number @Thickness of lines used for displaying tangents and/or normals
---@field public bShowDegenerates boolean @Display tangents and/or normals for degenerate triangles
---@field public bCompareWithMikkt boolean @Display difference between FastMikkTSpace tangents and MikkTSpace tangents. This is only available if the FastMikkTSpace Calculation Method is selected.
---@field public CompareWithMikktThreshold number @Minimum angle difference in degrees for a FastMikkTSpace tangent to be considered different to a MikkTSpace tangent. This is only available if a Compare with MikkT is enabled and the FastMikkTSpace Calculation Method is selected.
local UMeshTangentsToolProperties = {}

