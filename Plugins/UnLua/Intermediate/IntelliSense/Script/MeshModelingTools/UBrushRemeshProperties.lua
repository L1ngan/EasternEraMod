---@class UBrushRemeshProperties : URemeshProperties
---@field public bEnableRemeshing boolean @Toggle remeshing on/off
---@field public TriangleSize integer @Desired size of triangles after Remeshing, relative to average initial triangle size. Larger value results in larger triangles.
---@field public PreserveDetail integer @Control the amount of simplification during sculpting. Higher values will avoid wiping out fine details on the mesh.
---@field public Iterations integer
local UBrushRemeshProperties = {}

