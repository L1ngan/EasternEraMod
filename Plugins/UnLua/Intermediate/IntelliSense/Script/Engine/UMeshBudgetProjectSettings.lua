---@class UMeshBudgetProjectSettings : UDeveloperSettings
---@field public bEnableStaticMeshBudget boolean @Enable/disable the static mesh budget. Static mesh budget will auto assign a lod group to any static mesh when loading or importing the asset in the editor. The auto budget will not override a static mesh lod group, user can control the lod group for a specific asset.
---@field public StaticMeshBudgetInfos TArray<FStaticMeshBudgetInfo> @The static mesh budgets array.
local UMeshBudgetProjectSettings = {}

