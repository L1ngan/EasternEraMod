---Holds settings for the asset import / export automation test
---@class FEditorImportExportTestDefinition
---@field public ImportFilePath FFilePath @The file to import
---@field public ExportFileExtension string @The file extension to use when exporting this asset.  Used to find a supporting exporter
---@field public bSkipExport boolean @If true, the export step will be skipped
---@field public FactorySettings TArray<FImportFactorySettingValues> @Settings for the import factory
local FEditorImportExportTestDefinition = {}
