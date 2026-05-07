---@class UDataflowEditorMeshWeightMapPaintToolActions : UInteractiveToolPropertySet
local UDataflowEditorMeshWeightMapPaintToolActions = {}

---Invert the values in range [0, 1] for the current selected surface
function UDataflowEditorMeshWeightMapPaintToolActions:InvertCurrentSurface() end

---Invert the values in range [0, 1] for the current selected geometry, including interior vertices
function UDataflowEditorMeshWeightMapPaintToolActions:InvertCurrent() end

function UDataflowEditorMeshWeightMapPaintToolActions:FloodFillCurrent() end

function UDataflowEditorMeshWeightMapPaintToolActions:ClearAll() end

