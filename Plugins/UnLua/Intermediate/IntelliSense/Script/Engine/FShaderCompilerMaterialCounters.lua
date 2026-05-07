---@class FShaderCompilerMaterialCounters
---@field public MaterialTranslateCalls integer @The total number of materials that have been translated.
---@field public MaterialTranslateTotalTimeSec number @The total time in seconds to translate all materials.
---@field public MaterialTranslateTranslationOnlyTimeSec number @The total time spent actually translating materials (rather than for instance accessing the DDC cache).
---@field public MaterialTranslateSerializationOnlyTimeSec number @The total time spent serializing DDC results.
---@field public MaterialCacheHits integer @The total number times a material translation was skipped because the the results were in the DDC.
local FShaderCompilerMaterialCounters = {}
