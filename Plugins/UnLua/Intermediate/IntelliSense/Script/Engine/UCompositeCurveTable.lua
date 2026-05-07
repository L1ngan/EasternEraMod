---Curve table composed of a stack of other curve tables.
---@class UCompositeCurveTable : UCurveTable
---@field protected ParentTables TArray<UCurveTable> @Parent tables Tables with higher indices override data in tables with lower indices
---@field protected OldParentTables TArray<UCurveTable> @temporary copy used to detect changes so we can update delegates correctly on removal
local UCompositeCurveTable = {}

