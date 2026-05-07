---A sound actor that can be placed in a level
---@class AAmbientSound : AActor
---@field private AudioComponent UAudioComponent @Audio component that handles sound playing
local AAmbientSound = {}

function AAmbientSound:Stop() end

---@param StartTime number @[opt] 
function AAmbientSound:Play(StartTime) end

---@param FadeOutDuration number
---@param FadeVolumeLevel number
function AAmbientSound:FadeOut(FadeOutDuration, FadeVolumeLevel) end

---BEGIN DEPRECATED (use component functions now in level script)
---@param FadeInDuration number
---@param FadeVolumeLevel number @[opt] 
function AAmbientSound:FadeIn(FadeInDuration, FadeVolumeLevel) end

---@param AdjustVolumeDuration number
---@param AdjustVolumeLevel number
function AAmbientSound:AdjustVolume(AdjustVolumeDuration, AdjustVolumeLevel) end

