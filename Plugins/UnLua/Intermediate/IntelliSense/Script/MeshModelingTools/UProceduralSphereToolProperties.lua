---@class UProceduralSphereToolProperties : UProceduralShapeToolProperties
---@field public Radius number @Radius of the sphere
---@field public SubdivisionType EProceduralSphereType @Type of subdivision for the sphere
---@field public Subdivisions integer @Number of subdivisions for each side of the sphere. This is only available for spheres with Box subdivision.
---@field public HorizontalSlices integer @Number of horizontal slices of the sphere. This is only available for spheres with Lat Long subdivision.
---@field public VerticalSlices integer @Number of vertical slices of the sphere. This is only available for spheres with Lat Long subdivision.
local UProceduralSphereToolProperties = {}

