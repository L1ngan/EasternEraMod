---The base class for a playable sound object
---@class USoundBase : UObject
---@field public SoundClassObject USoundClass @Sound class this sound belongs to
---@field public bDebug boolean @When "au.3dVisualize.Attenuation" has been specified, draw this sound's attenuation shape when the sound is audible. For debugging purposes only.
---@field public bOverrideConcurrency boolean @Whether or not to override the sound concurrency object with local concurrency settings.
---@field public bEnableBusSends boolean @Whether or not to enable sending this audio's output to buses.
---@field public bEnableBaseSubmix boolean @If enabled, sound will route to the Master Submix by default or to the Base Submix if defined. If disabled, sound will route ONLY to the Submix Sends and/or Bus Sends
---@field public bEnableSubmixSends boolean @Whether or not to enable Submix Sends other than the Base Submix.
---@field public bHasDelayNode boolean @Whether or not this sound has a delay node
---@field public bHasConcatenatorNode boolean @Whether or not this sound has a concatenator node. If it does, we have to allow the sound to persist even though it may not have generate audible audio in a given audio thread frame.
---@field public bBypassVolumeScaleForPriority boolean @Bypass volume weighting priority upon evaluating whether sound should remain active when max channel count is met (See platform Audio Settings).
---@field public VirtualizationMode EVirtualizationMode @Virtualization behavior, determining if a sound may revive and how it continues playing when culled or evicted (limited to looping sounds).
---@field public ConcurrencySet TSet<USoundConcurrency> @Set of concurrency settings to observe (if override is set to false).  Sound must pass all concurrency settings to play.
---@field public ConcurrencyOverrides FSoundConcurrencySettings @If Override Concurrency is true, concurrency settings to use.
---@field public Duration number @Duration of sound in seconds.
---@field public MaxDistance number @The MaxDistance property is calculated statically on load or at asset edit time, but is not reliable at runtime. the GetMaxDistance function should be used to determine the applied max distance based on runtime behavior.
---@field public TotalSamples number @Total number of samples (in the thousands). Useful as a metric to analyze the relative size of a given sound asset in content browser.
---@field public Priority number @Used to determine whether sound can play or remain active if channel limit is met, where higher value is higher priority (see platform's Audio Settings 'Max Channels' property). Unless bypassed, value is weighted with the final volume of the sound to produce final runtime priority value.
---@field public AttenuationSettings USoundAttenuation @Attenuation settings package for the sound
---@field public SoundSubmixObject USoundSubmixBase @Submix to route sound output to. If unset, falls back to referenced SoundClass submix. If SoundClass submix is unset, sends to the 'Master Submix' as set in the 'Audio' category of Project Settings'.
---@field public SoundSubmixSends TArray<FSoundSubmixSendInfo> @Array of submix sends to which a prescribed amount (see 'Send Level') of this sound is sent.
---@field public SourceEffectChain USoundEffectSourcePresetChain @The source effect chain to use for this sound.
---@field public BusSends TArray<FSoundSourceBusSendInfo> @This sound will send its audio output to this list of buses if there are bus instances playing after source effects are processed.
---@field public PreEffectBusSends TArray<FSoundSourceBusSendInfo> @This sound will send its audio output to this list of buses if there are bus instances playing before source effects are processed.
---@field public AssetUserData TArray<UAssetUserData> @Array of user data stored with the asset
---@field public AudioPropertiesSheet UAudioPropertiesSheetAssetBase
---@field private TimecodeOffset FSoundTimecodeOffset
---@field private LocalAudioProperties TArray<string>
local USoundBase = {}

---Only used as an edit condition for AttenuationSettings member, as base classes may choose to provide an attenuation override implementation
---@return boolean
function USoundBase:IsAttenuationSettingsEditable() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USoundBase:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function USoundBase:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USoundBase:AddAssetUserDataOfClass(InUserDataClass) end

