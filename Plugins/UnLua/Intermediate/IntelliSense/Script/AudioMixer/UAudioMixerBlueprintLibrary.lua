---@class UAudioMixerBlueprintLibrary : UBlueprintFunctionLibrary
local UAudioMixerBlueprintLibrary = {}

---Unregisters an audio bus that could have been registered to a submix.
---@param WorldContextObject UObject
---@param SoundSubmix USoundSubmix
---@param AudioBus UAudioBus
function UAudioMixerBlueprintLibrary.UnregisterAudioBusFromSubmix(WorldContextObject, SoundSubmix, AudioBus) end

---Trim memory used by the audio cache. Returns the number of megabytes freed.
---@param InMegabytesToFree number
---@return number
function UAudioMixerBlueprintLibrary.TrimAudioCache(InMegabytesToFree) end

---Hotswaps to the requested audio output device
---@param WorldContextObject UObject
---@param NewDeviceId string
---@param OnCompletedDeviceSwap Delegate
function UAudioMixerBlueprintLibrary.SwapAudioOutputDevice(WorldContextObject, NewDeviceId, OnCompletedDeviceSwap) end

---Stop recording audio. Path can be absolute, or relative (to the /Saved/BouncedWavFiles folder). By leaving the Submix To Record field blank, you can record the master output of the game.
---@param WorldContextObject UObject
---@param ExportType EAudioRecordingExportType
---@param Name string
---@param Path string
---@param SubmixToRecord USoundSubmix @[opt] 
---@param ExistingSoundWaveToOverwrite USoundWave @[opt] 
---@return USoundWave
function UAudioMixerBlueprintLibrary.StopRecordingOutput(WorldContextObject, ExportType, Name, Path, SubmixToRecord, ExistingSoundWaveToOverwrite) end

---Stops the given audio bus.
---@param WorldContextObject UObject
---@param AudioBus UAudioBus
function UAudioMixerBlueprintLibrary.StopAudioBus(WorldContextObject, AudioBus) end

---Stop spectrum analysis.
---@param WorldContextObject UObject
---@param SubmixToStopAnalyzing USoundSubmix @[opt] 
function UAudioMixerBlueprintLibrary.StopAnalyzingOutput(WorldContextObject, SubmixToStopAnalyzing) end

---Start recording audio. By leaving the Submix To Record field blank, you can record the master output of the game.
---@param WorldContextObject UObject
---@param ExpectedDuration number
---@param SubmixToRecord USoundSubmix @[opt] 
function UAudioMixerBlueprintLibrary.StartRecordingOutput(WorldContextObject, ExpectedDuration, SubmixToRecord) end

---Starts the given audio bus.
---@param WorldContextObject UObject
---@param AudioBus UAudioBus
function UAudioMixerBlueprintLibrary.StartAudioBus(WorldContextObject, AudioBus) end

---Start spectrum analysis of the audio output. By leaving the Submix To Analyze blank, you can analyze the master output of the game.
---@param WorldContextObject UObject
---@param SubmixToAnalyze USoundSubmix @[opt] 
---@param FFTSize EFFTSize @[opt] 
---@param InterpolationMethod EFFTPeakInterpolationMethod @[opt] 
---@param WindowType EFFTWindowType @[opt] 
---@param HopSize number @[opt] 
---@param SpectrumType EAudioSpectrumType @[opt] 
function UAudioMixerBlueprintLibrary.StartAnalyzingOutput(WorldContextObject, SubmixToAnalyze, FFTSize, InterpolationMethod, WindowType, HopSize, SpectrumType) end

---Sets a submix effect chain override on the given submix. The effect chain will cross fade from the base effect chain or current override to the new override.
---@param WorldContextObject UObject
---@param SoundSubmix USoundSubmix
---@param SubmixEffectPresetChain TArray_USoundEffectSubmixPreset_
---@param FadeTimeSec number
function UAudioMixerBlueprintLibrary.SetSubmixEffectChainOverride(WorldContextObject, SoundSubmix, SubmixEffectPresetChain, FadeTimeSec) end

---Set whether or not to bypass the effect at the source effect chain index.
---@param WorldContextObject UObject
---@param PresetChain USoundEffectSourcePresetChain
---@param EntryIndex integer
---@param bBypassed boolean
function UAudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry(WorldContextObject, PresetChain, EntryIndex, bBypassed) end

---Resume recording audio after pausing. By leaving the Submix To Pause field blank, you can record the master output of the game.
---@param WorldContextObject UObject
---@param SubmixToPause USoundSubmix @[opt] 
function UAudioMixerBlueprintLibrary.ResumeRecordingOutput(WorldContextObject, SubmixToPause) end

---Replaces the submix effect at the given submix chain index, adds the effect if there is none at that index.
---@param WorldContextObject UObject
---@param InSoundSubmix USoundSubmix
---@param SubmixChainIndex integer
---@param SubmixEffectPreset USoundEffectSubmixPreset
function UAudioMixerBlueprintLibrary.ReplaceSubmixEffect(WorldContextObject, InSoundSubmix, SubmixChainIndex, SubmixEffectPreset) end

---@param WorldContextObject UObject
---@param InSoundSubmix USoundSubmix
---@param SubmixChainIndex integer
---@param SubmixEffectPreset USoundEffectSubmixPreset
function UAudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix(WorldContextObject, InSoundSubmix, SubmixChainIndex, SubmixEffectPreset) end

---@param WorldContextObject UObject
---@param SoundSubmix USoundSubmix
---@param SubmixChainIndex integer
function UAudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex(WorldContextObject, SoundSubmix, SubmixChainIndex) end

---@param WorldContextObject UObject
---@param SoundSubmix USoundSubmix
---@param SubmixEffectPreset USoundEffectSubmixPreset
function UAudioMixerBlueprintLibrary.RemoveSubmixEffectPreset(WorldContextObject, SoundSubmix, SubmixEffectPreset) end

---Removes the submix effect at the given submix chain index, if there is a submix effect at that index.
---@param WorldContextObject UObject
---@param SoundSubmix USoundSubmix
---@param SubmixChainIndex integer
function UAudioMixerBlueprintLibrary.RemoveSubmixEffectAtIndex(WorldContextObject, SoundSubmix, SubmixChainIndex) end

---Removes all instances of a submix effect preset from the given submix.
---@param WorldContextObject UObject
---@param SoundSubmix USoundSubmix
---@param SubmixEffectPreset USoundEffectSubmixPreset
function UAudioMixerBlueprintLibrary.RemoveSubmixEffect(WorldContextObject, SoundSubmix, SubmixEffectPreset) end

---Removes source effect entry from preset chain. Only affects the instance of preset chain.
---@param WorldContextObject UObject
---@param PresetChain USoundEffectSourcePresetChain
---@param EntryIndex integer
function UAudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain(WorldContextObject, PresetChain, EntryIndex) end

---Removes a submix effect preset from the master submix.
---@param WorldContextObject UObject
---@param SubmixEffectPreset USoundEffectSubmixPreset
function UAudioMixerBlueprintLibrary.RemoveMasterSubmixEffect(WorldContextObject, SubmixEffectPreset) end

---Registers an audio bus to a submix so the submix output can be routed to the audiobus.
---@param WorldContextObject UObject
---@param SoundSubmix USoundSubmix
---@param AudioBus UAudioBus
function UAudioMixerBlueprintLibrary.RegisterAudioBusToSubmix(WorldContextObject, SoundSubmix, AudioBus) end

---Begin loading a sound into the cache so that it can be played immediately.
---@param SoundWave USoundWave
---@param OnLoadCompletion Delegate
function UAudioMixerBlueprintLibrary.PrimeSoundForPlayback(SoundWave, OnLoadCompletion) end

---Begin loading any sounds referenced by a sound cue into the cache so that it can be played immediately.
---@param SoundCue USoundCue
function UAudioMixerBlueprintLibrary.PrimeSoundCueForPlayback(SoundCue) end

---Pause recording audio, without finalizing the recording to disk. By leaving the Submix To Record field blank, you can record the master output of the game.
---@param WorldContextObject UObject
---@param SubmixToPause USoundSubmix @[opt] 
function UAudioMixerBlueprintLibrary.PauseRecordingOutput(WorldContextObject, SubmixToPause) end

---Make an array of bands which span the frequency range of a given EAudioSpectrumBandPresetType.
---@param InBandPresetType EAudioSpectrumBandPresetType
---@param InNumBands integer @[opt] 
---@param InAttackTimeMsec integer @[opt] 
---@param InReleaseTimeMsec integer @[opt] 
---@return TArray_FSoundSubmixSpectralAnalysisBandSettings_
function UAudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings(InBandPresetType, InNumBands, InAttackTimeMsec, InReleaseTimeMsec) end

---Make an array of musically spaced bands with ascending frequency.
---@param InNumSemitones integer @[opt] 
---@param InStartingMusicalNote EMusicalNoteName @[opt] 
---@param InStartingOctave integer @[opt] 
---@param InAttackTimeMsec integer @[opt] 
---@param InReleaseTimeMsec integer @[opt] 
---@return TArray_FSoundSubmixSpectralAnalysisBandSettings_
function UAudioMixerBlueprintLibrary.MakeMusicalSpectralAnalysisBandSettings(InNumSemitones, InStartingMusicalNote, InStartingOctave, InAttackTimeMsec, InReleaseTimeMsec) end

---Make an array of logarithmically spaced bands.
---@param InNumBands integer @[opt] 
---@param InMinimumFrequency number @[opt] 
---@param InMaximumFrequency number @[opt] 
---@param InAttackTimeMsec integer @[opt] 
---@param InReleaseTimeMsec integer @[opt] 
---@return TArray_FSoundSubmixSpectralAnalysisBandSettings_
function UAudioMixerBlueprintLibrary.MakeFullSpectrumSpectralAnalysisBandSettings(InNumBands, InMinimumFrequency, InMaximumFrequency, InAttackTimeMsec, InReleaseTimeMsec) end

---Queries if the given audio bus is active (and audio can be mixed to it).
---@param WorldContextObject UObject
---@param AudioBus UAudioBus
---@return boolean
function UAudioMixerBlueprintLibrary.IsAudioBusActive(WorldContextObject, AudioBus) end

---Retrieve the phases for the given frequencies.
---@param WorldContextObject UObject
---@param Frequencies TArray_number_
---@param Phases TArray_number_ @[out] 
---@param SubmixToAnalyze USoundSubmix @[opt] 
function UAudioMixerBlueprintLibrary.GetPhaseForFrequencies(WorldContextObject, Frequencies, Phases, SubmixToAnalyze) end

---Returns the number of effect chain entries in the given source effect chain.
---@param WorldContextObject UObject
---@param PresetChain USoundEffectSourcePresetChain
---@return integer
function UAudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain(WorldContextObject, PresetChain) end

---Retrieve the magnitudes for the given frequencies.
---@param WorldContextObject UObject
---@param Frequencies TArray_number_
---@param Magnitudes TArray_number_ @[out] 
---@param SubmixToAnalyze USoundSubmix @[opt] 
function UAudioMixerBlueprintLibrary.GetMagnitudeForFrequencies(WorldContextObject, Frequencies, Magnitudes, SubmixToAnalyze) end

---Gets information about the currently used audio output device
---@param WorldContextObject UObject
---@param OnObtainCurrentDeviceEvent Delegate
function UAudioMixerBlueprintLibrary.GetCurrentAudioOutputDeviceName(WorldContextObject, OnObtainCurrentDeviceEvent) end

---Gets information about all audio output devices available in the system
---@param WorldContextObject UObject
---@param OnObtainDevicesEvent Delegate
function UAudioMixerBlueprintLibrary.GetAvailableAudioOutputDevices(WorldContextObject, OnObtainDevicesEvent) end

---Returns the device info in a human readable format
---@param Info FAudioOutputDeviceInfo
---@return string
function UAudioMixerBlueprintLibrary.Conv_AudioOutputDeviceInfoToString(Info) end

---Clears all submix effects on the given submix.
---@param WorldContextObject UObject
---@param SoundSubmix USoundSubmix
function UAudioMixerBlueprintLibrary.ClearSubmixEffects(WorldContextObject, SoundSubmix) end

---Clears all submix effect overrides on the given submix and returns it to the default effect chain.
---@param WorldContextObject UObject
---@param SoundSubmix USoundSubmix
---@param FadeTimeSec number
function UAudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride(WorldContextObject, SoundSubmix, FadeTimeSec) end

---Clears all master submix effects.
---@param WorldContextObject UObject
function UAudioMixerBlueprintLibrary.ClearMasterSubmixEffects(WorldContextObject) end

---Adds a submix effect preset to the given submix at the end of its submix effect chain. Returns the number of submix effects.
---@param WorldContextObject UObject
---@param SoundSubmix USoundSubmix
---@param SubmixEffectPreset USoundEffectSubmixPreset
---@return integer
function UAudioMixerBlueprintLibrary.AddSubmixEffect(WorldContextObject, SoundSubmix, SubmixEffectPreset) end

---Adds source effect entry to preset chain. Only effects the instance of the preset chain
---@param WorldContextObject UObject
---@param PresetChain USoundEffectSourcePresetChain
---@param Entry FSourceEffectChainEntry
function UAudioMixerBlueprintLibrary.AddSourceEffectToPresetChain(WorldContextObject, PresetChain, Entry) end

---Adds a submix effect preset to the master submix.
---@param WorldContextObject UObject
---@param SubmixEffectPreset USoundEffectSubmixPreset
function UAudioMixerBlueprintLibrary.AddMasterSubmixEffect(WorldContextObject, SubmixEffectPreset) end

