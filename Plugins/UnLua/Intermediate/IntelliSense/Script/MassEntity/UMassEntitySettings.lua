---Implements the settings for MassEntity plugin
---@class UMassEntitySettings : UMassModuleSettings
---@field public ChunkMemorySize integer
---@field public DumpDependencyGraphFileName string @The name of the file to dump the processor dependency graph. T The dot file will be put in the project log folder. To generate a svg out of that file, simply run dot executable with following parameters: -Tsvg -O filename.dot
---@field public ProcessingPhasesConfig FMassProcessingPhaseConfig @Lets users configure processing phases including the composite processor class to be used as a container for the phases' processors.
---@field public ProcessorCDOs TArray<UMassProcessor> @This list contains all the processors available in the given binary (including plugins). The contents are sorted by display name.
local UMassEntitySettings = {}

