---The behavior of audio playback is defined within Sound Cues.
---@class USoundCue : USoundBase
---@field public FirstNode USoundNode
---@field public VolumeMultiplier number @Base volume multiplier
---@field public PitchMultiplier number @Base pitch multiplier
---@field public AttenuationOverrides FSoundAttenuationSettings @Attenuation settings to use if Override Attenuation is set to true
---@field public AllNodes TArray<USoundNode>
---@field public SoundCueGraph UEdGraph
---@field protected SubtitlePriority number @The priority of the subtitle.  Defaults to 10000.  Higher values will play instead of lower values.
---@field public bPrimeOnLoad boolean @Makes this sound cue automatically load any sound waves it can play into the cache when it is loaded.
---@field public bOverrideAttenuation boolean @Indicates whether attenuation should use the Attenuation Overrides or the Attenuation Settings asset
---@field public bExcludeFromRandomNodeBranchCulling boolean @Ignore per-platform random node culling for memory purposes
---@field private bHasPlayWhenSilent boolean @Whether a sound has play when silent enabled (i.e. for a sound cue, if any sound wave player has it enabled).
---@field private CookedQualityIndex integer
local USoundCue = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USoundCue:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function USoundCue:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USoundCue:AddAssetUserDataOfClass(InUserDataClass) end

