---User settings used by the MeshDrawCommandStats system.
---@class UMeshDrawCommandStatsSettings : UDeveloperSettings
---@field public Budgets TArray<FMeshDrawCommandStatsBudget> @Budgets used by r.MeshDrawCommands.Stats
---@field public BudgetTotals TArray<FMeshDrawCommandStatsBudgetTotals> @The total primitive budget for a collection.
---@field public CollectionForCsvProfiler integer @Which collection to export to CSV
local UMeshDrawCommandStatsSettings = {}

