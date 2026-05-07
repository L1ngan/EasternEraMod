---Sound node that contains a reference to the raw wave file to be played
---@class USoundNodeWavePlayer : USoundNodeAssetReferencer
---@field private SoundWaveAssetPtr TSoftObjectPtr<USoundWave>
---@field private SoundWave USoundWave
---@field public bLooping boolean
local USoundNodeWavePlayer = {}

