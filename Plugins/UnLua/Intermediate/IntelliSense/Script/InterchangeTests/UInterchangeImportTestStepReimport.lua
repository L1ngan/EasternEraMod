---@class UInterchangeImportTestStepReimport : UInterchangeImportTestStepBase
---@field public SourceFileToReimport FFilePath @The source file to import (path relative to the json script).
---@field public bUseOverridePipelineStack boolean @Whether the import should use the override pipeline stack
---@field public PipelineStack TArray<UInterchangePipelineBase> @The pipeline stack to use when re-importing (an empty array will use the original import pipelines)
---@field public PipelineSettings FInterchangeTestPlanPipelineSettings @Pipeline settings that would allow modifying the pipelines as reimport pipelines
---@field public bImportIntoLevel boolean @If this is an import into level with new file in the same directory as import
---@field public AssetTypeToReimport TSubclassOf<UObject> @The type of the asset to reimport. If only one such asset was imported, this is unambiguous.
---@field public AssetNameToReimport string @If there were multiple assets of the above type imported, specify the concrete name here.
---@field public bTakeScreenshot boolean @Whether a screenshot should be captured after reimport.
---@field public ScreenshotParameters FInterchangeTestScreenshotParameters @Screen Shot Settings
---@field private LastSourceFileExtension string
local UInterchangeImportTestStepReimport = {}

