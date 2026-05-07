---Description of a stat category used in the MeshDrawCommandStats system.
---@class FMeshDrawCommandStatsBudget
---@field public CategoryName string @Category name.
---@field public LinkedStatNames TArray<string> @Stat names that will match this category name.
---@field public PrimitiveBudget integer @The category primitive budget. This is the maximum triangles expected, post-culling, summed across all passes.
---@field public Collection integer @The collection which contains this budget.
---@field public Passes TArray<string> @Which passes contribute to this budget.
local FMeshDrawCommandStatsBudget = {}
