---@class FGatherTextFromTextFilesConfiguration
---@field public IsEnabled boolean @If enabled, text from text files will be gathered according to this configuration.
---@field public SearchDirectories TArray<FGatherTextSearchDirectory> @The paths of directories to be searched recursively for text files, specified relative to the project's root, which may be parsed for text to gather.
---@field public ExcludePathWildcards TArray<FGatherTextExcludePath> @Text files whose paths match these wildcard patterns will be excluded from gathering.
---@field public FileExtensions TArray<FGatherTextFileExtension> @Text files whose names match these wildcard patterns may be parsed for text to gather.
---@field public ShouldGatherFromEditorOnlyData boolean @If enabled, data that is specified as editor-only may be processed for gathering.
local FGatherTextFromTextFilesConfiguration = {}
