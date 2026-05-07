---@class FNiagaraRendererReadbackParameters
---@field public bExportPosition boolean @When enabled vertex positions will be exported
---@field public bExportTangentBasis boolean @When enabled the vertex tangent basis will be exported
---@field public bExportColor boolean @When enabled vertex colors will be exported
---@field public ExportNumTexCoords integer @How many vertex texture coordinates to export
---@field public bExportMaterials boolean @When enabled we will attempt to export the materials used with each section When disabled no materials will be assigned, so the default material will be used
---@field public bApplyWPO boolean @When enabled material WPO will be included in the exported data
---@field public ViewIndexToCapture Unknown @When set we capture the batches from the view index provided When unset we capture batches from all views
local FNiagaraRendererReadbackParameters = {}
