---@class FInterchangePipelinePropertyStates
---@field public bLocked boolean @If true, the property is locked.
---@field public bPreDialogReset boolean @If true, the property will be reset to default when loading the import dialog.
---@field public BasicLayoutStates FInterchangePipelinePropertyStatePerContext @The property states for the import context.
---@field public ImportStates FInterchangePipelinePropertyStatePerContext @The property states for the import context
---@field public ReimportStates FInterchangePipelinePropertyStatePerContext @The property states for the reimport context.
local FInterchangePipelinePropertyStates = {}
