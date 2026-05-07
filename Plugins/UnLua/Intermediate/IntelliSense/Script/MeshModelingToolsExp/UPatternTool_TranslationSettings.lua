---Settings for Per Element Translation in the Pattern Tool
---@class UPatternTool_TranslationSettings : UInteractiveToolPropertySet
---@field public bInterpolate boolean @If true, Translation is linearly interpolated between StartTranslation and Translation values
---@field public bJitter boolean @If true, Translation at each Pattern Element is offset by a uniformly chosen random value in the range of [-TranslationJitterRange, TranslationJitterRange]
---@field public StartTranslation FVector @Translation applied to all Pattern Elements, or to first Pattern Element for Interpolated translation
---@field public EndTranslation FVector @Translation applied to last Pattern Element for Interpolated translation
---@field public Jitter FVector @Upper bound of the range which is sampled to randomly translate each Pattern Element if Jitter is true
local UPatternTool_TranslationSettings = {}

