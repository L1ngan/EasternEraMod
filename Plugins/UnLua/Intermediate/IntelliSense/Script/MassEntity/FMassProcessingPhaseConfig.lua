---@class FMassProcessingPhaseConfig
---@field public PhaseName string
---@field public PhaseGroupClass TSubclassOf<UMassCompositeProcessor>
---@field public ProcessorCDOs TArray<UMassProcessor>
---@field public PhaseProcessor UMassCompositeProcessor @this processor is available only in editor since it's used to present the user the order in which processors will be executed when given processing phase gets triggered
---@field public Description string
local FMassProcessingPhaseConfig = {}
