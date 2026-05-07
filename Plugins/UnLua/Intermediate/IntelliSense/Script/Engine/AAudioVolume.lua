---@class AAudioVolume : AVolume
---@field private Priority number @Priority of this volume. In the case of overlapping volumes, the one with the highest priority is chosen. The order is undefined if two or more overlapping volumes have the same priority.
---@field private bEnabled boolean @Whether this volume is currently enabled and able to affect sounds
---@field private Settings FReverbSettings @Reverb settings to use for this volume.
---@field private AmbientZoneSettings FInteriorSettings @Impacts sounds that have "Apply Ambient Volumes" set to true in their Sound Class, based on whether the sound sources and the player are inside or outside the audio volume
---@field private SubmixSendSettings TArray<FAudioVolumeSubmixSendSettings> @Submix send settings to use for this volume. Allows audio to dynamically send to submixes based on source and listener locations relative to this volume.
---@field private SubmixOverrideSettings TArray<FAudioVolumeSubmixOverrideSettings> @Submix effect chain override settings. Will override the effect chains on the given submixes when the conditions are met.
local AAudioVolume = {}

---@param NewSubmixSendSettings TArray_FAudioVolumeSubmixSendSettings_
function AAudioVolume:SetSubmixSendSettings(NewSubmixSendSettings) end

---@param NewSubmixOverrideSettings TArray_FAudioVolumeSubmixOverrideSettings_
function AAudioVolume:SetSubmixOverrideSettings(NewSubmixOverrideSettings) end

---@param NewReverbSettings FReverbSettings
function AAudioVolume:SetReverbSettings(NewReverbSettings) end

---@param NewPriority number
function AAudioVolume:SetPriority(NewPriority) end

---@param NewInteriorSettings FInteriorSettings
function AAudioVolume:SetInteriorSettings(NewInteriorSettings) end

---@param bNewEnabled boolean
function AAudioVolume:SetEnabled(bNewEnabled) end

function AAudioVolume:OnRep_bEnabled() end

