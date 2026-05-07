---FSourceEffectMotionFilterSettings
---This is the source effect's setting struct.
---@class FSourceEffectMotionFilterSettings
---@field public MotionFilterTopology ESourceEffectMotionFilterTopology @In Serial Mode, Filter A will process then Filter B will process; in Parallel mode, Filter A and Filter B will process the dry input seprately, then be mixed together afterward.
---@field public MotionFilterMix number @Filter Mix controls the amount of each filter in the signal where -1.0f outputs Only Filter A, 0.0f is an equal balance between Filter A and B, and 1.0f outputs only Filter B. How this blend works depends on the Topology.
---@field public FilterASettings FSourceEffectIndividualFilterSettings @Initial settings for Filter A
---@field public FilterBSettings FSourceEffectIndividualFilterSettings @Initial settings for Filter B
---@field public ModulationMappings TMap<ESourceEffectMotionFilterModDestination, FSourceEffectMotionFilterModulationSettings> @Modulation Mappings
---@field public DryVolumeDb number @Dry volume pass-through in dB.
local FSourceEffectMotionFilterSettings = {}
