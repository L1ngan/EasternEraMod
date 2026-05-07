---Contains data for a group of assets to export
---@class UAssetExportTask : UObject
---@field public Object UObject @Asset to export
---@field public Exporter UExporter @Optional exporter, otherwise it will be determined automatically
---@field public Filename string @File to export as
---@field public bSelected boolean @Export selected only
---@field public bReplaceIdentical boolean @Replace identical files
---@field public bPrompt boolean @Allow dialog prompts
---@field public bAutomated boolean @Unattended export
---@field public bUseFileArchive boolean @Save to a file archive
---@field public bWriteEmptyFiles boolean @Write even if file empty
---@field public IgnoreObjectList TArray<UObject> @Array of objects to ignore exporting
---@field public Options UObject @Exporter specific options
---@field public Errors TArray<string> @Array of error messages encountered during exporter
local UAssetExportTask = {}

