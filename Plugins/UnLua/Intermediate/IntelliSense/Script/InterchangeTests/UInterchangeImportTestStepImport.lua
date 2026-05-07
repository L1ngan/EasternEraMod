---@class UInterchangeImportTestStepImport : UInterchangeImportTestStepBase
---@field public SourceFile FFilePath @The source file to import (path relative to the json script)
---@field public bUseOverridePipelineStack boolean @Whether the import should use the override pipeline stack
---@field public PipelineStack TArray<UInterchangePipelineBase> @The pipeline stack to use when importing (an empty array will use the defaults)
---@field public PipelineSettings FInterchangeTestPlanPipelineSettings
---@field public bEmptyDestinationFolderPriorToImport boolean @Whether the destination folder should be emptied prior to import
---@field public bImportIntoLevel boolean @Whether we should use the import into level workflow
---@field public bTakeScreenshot boolean @Whether screenshot would be taken at this stage.
---@field public ScreenshotParameters FInterchangeTestScreenshotParameters @Screen Shot Settings
---@field private LastSourceFileExtension string
local UInterchangeImportTestStepImport = {}

