---Parameter destination settings allowing modulation control override for parameter destinations opting in to the Modulation System.
---@class FSoundModulationDestinationSettings
---@field public Value number @Base value of parameter
---@field public bEnableModulation boolean @Whether or not to enable modulation
---@field public Modulator USoundModulatorBase
---@field public Modulators TSet<USoundModulatorBase> @Set of modulation sources, which provides values to mix with base value.
local FSoundModulationDestinationSettings = {}
