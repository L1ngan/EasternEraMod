---UModularSynthComponent
---Implementation of a USynthComponent.
---@class UModularSynthComponent : USynthComponent
---@field public VoiceCount integer @The voice count to use for the synthesizer. Cannot be changed
local UModularSynthComponent = {}

---Sets the preset struct for the synth
---@param SynthPreset FModularSynthPreset
function UModularSynthComponent:SetSynthPreset(SynthPreset) end

---Sets the envelope sustain gain value.
---@param SustainGain number
function UModularSynthComponent:SetSustainGain(SustainGain) end

---Sets the amount of stereo delay wetlevel [0.0, 1.0]
---@param DelayWetlevel number
function UModularSynthComponent:SetStereoDelayWetlevel(DelayWetlevel) end

---Sets the amount of stereo delay time in msec.
---@param DelayTimeMsec number
function UModularSynthComponent:SetStereoDelayTime(DelayTimeMsec) end

---Sets the amount of stereo delay ratio between left and right delay lines [0.0, 1.0]
---@param DelayRatio number
function UModularSynthComponent:SetStereoDelayRatio(DelayRatio) end

---Sets whether not stereo delay is enabled.
---@param StereoDelayMode ESynthStereoDelayMode
function UModularSynthComponent:SetStereoDelayMode(StereoDelayMode) end

---Sets whether not stereo delay is enabled.
---@param StereoDelayEnabled boolean
function UModularSynthComponent:SetStereoDelayIsEnabled(StereoDelayEnabled) end

---Sets the amount of stereo delay feedback [0.0, 1.0]
---@param DelayFeedback number
function UModularSynthComponent:SetStereoDelayFeedback(DelayFeedback) end

---Sets the amount of spread of the oscillators. [0.0, 1.0]
---@param Spread number
function UModularSynthComponent:SetSpread(Spread) end

---Sets the envelope release time in msec.
---@param ReleaseTimeMsec number
function UModularSynthComponent:SetReleaseTime(ReleaseTimeMsec) end

---Sets the synth portamento [0.0, 1.0]
---@param Portamento number
function UModularSynthComponent:SetPortamento(Portamento) end

---Sets the synth pitch bend amount.
---@param PitchBend number
function UModularSynthComponent:SetPitchBend(PitchBend) end

---Sets the pan of the synth [-1.0, 1.0].
---@param Pan number
function UModularSynthComponent:SetPan(Pan) end

---Set the oscillator type.
---@param OscIndex integer
---@param OscType ESynth1OscType
function UModularSynthComponent:SetOscType(OscIndex, OscType) end

---Set whether or not to follow the phase of osc2 to osc1
---@param bIsSynced boolean
function UModularSynthComponent:SetOscSync(bIsSynced) end

---Sets the oscillator semitones.
---@param OscIndex integer
---@param Semitones number
function UModularSynthComponent:SetOscSemitones(OscIndex, Semitones) end

---Sets the square wave pulsewidth [0.0, 1.0]
---@param OscIndex integer
---@param Pulsewidth number
function UModularSynthComponent:SetOscPulsewidth(OscIndex, Pulsewidth) end

---Sets the oscillator octaves
---@param OscIndex integer
---@param Octave number
function UModularSynthComponent:SetOscOctave(OscIndex, Octave) end

---Set the oscillator gain modulation.
---@param OscIndex integer
---@param OscGainMod number
function UModularSynthComponent:SetOscGainMod(OscIndex, OscGainMod) end

---Set the oscillator gain.
---@param OscIndex integer
---@param OscGain number
function UModularSynthComponent:SetOscGain(OscIndex, OscGain) end

---Set the oscillator frequency modulation
---@param OscIndex integer
---@param OscFreqMod number
function UModularSynthComponent:SetOscFrequencyMod(OscIndex, OscFreqMod) end

---Sets the oscillator cents.
---@param OscIndex integer
---@param Cents number
function UModularSynthComponent:SetOscCents(OscIndex, Cents) end

---Sets the envelope modulator sustain gain
---@param SustainGain number
function UModularSynthComponent:SetModEnvSustainGain(SustainGain) end

---Sets the envelope modulator release
---@param Release number
function UModularSynthComponent:SetModEnvReleaseTime(Release) end

---Sets whether or not to modulate a param based on the envelope. Uses bias envelope output (offset from sustain gain).
---@param InPatchType ESynthModEnvPatch
function UModularSynthComponent:SetModEnvPatch(InPatchType) end

---Sets whether or not to invert the envelope modulator.
---@param bInvert boolean
function UModularSynthComponent:SetModEnvInvert(bInvert) end

---Sets the envelope modulator depth (amount to apply the output modulation)
---@param Depth number
function UModularSynthComponent:SetModEnvDepth(Depth) end

---Sets the envelope modulator attack time in msec
---@param DecayTimeMsec number
function UModularSynthComponent:SetModEnvDecayTime(DecayTimeMsec) end

---Sets whether or not to modulate a param based on the envelope. Uses bias envelope output (offset from sustain gain).
---@param InPatchType ESynthModEnvBiasPatch
function UModularSynthComponent:SetModEnvBiasPatch(InPatchType) end

---Sets whether or not to invert the bias output of the envelope modulator.
---@param bInvert boolean
function UModularSynthComponent:SetModEnvBiasInvert(bInvert) end

---Sets the envelope modulator attack time in msec
---@param AttackTimeMsec number
function UModularSynthComponent:SetModEnvAttackTime(AttackTimeMsec) end

---Sets the LFO type
---@param LFOIndex integer
---@param LFOType ESynthLFOType
function UModularSynthComponent:SetLFOType(LFOIndex, LFOType) end

---Sets the LFO patch type. LFO patch determines what parameter is modulated by the LFO.
---@param LFOIndex integer
---@param LFOPatchType ESynthLFOPatchType
function UModularSynthComponent:SetLFOPatch(LFOIndex, LFOPatchType) end

---Sets the LFO type
---@param LFOIndex integer
---@param LFOMode ESynthLFOMode
function UModularSynthComponent:SetLFOMode(LFOIndex, LFOMode) end

---Sets the LFO gain mod factor (external modulation)
---@param LFOIndex integer
---@param GainMod number
function UModularSynthComponent:SetLFOGainMod(LFOIndex, GainMod) end

---Sets the LFO gain factor
---@param LFOIndex integer
---@param Gain number
function UModularSynthComponent:SetLFOGain(LFOIndex, Gain) end

---Sets the LFO frequency modulation in hz
---@param LFOIndex integer
---@param FrequencyModHz number
function UModularSynthComponent:SetLFOFrequencyMod(LFOIndex, FrequencyModHz) end

---Sets the LFO frequency in hz
---@param LFOIndex integer
---@param FrequencyHz number
function UModularSynthComponent:SetLFOFrequency(LFOIndex, FrequencyHz) end

---Sets the synth gain in decibels.
---@param GainDb number
function UModularSynthComponent:SetGainDb(GainDb) end

---Sets the filter type.
---@param FilterType ESynthFilterType
function UModularSynthComponent:SetFilterType(FilterType) end

---Sets a modulated filter Q (resonance)
---@param FilterQ number
function UModularSynthComponent:SetFilterQMod(FilterQ) end

---Sets the filter Q (resonance)
---@param FilterQ number
function UModularSynthComponent:SetFilterQ(FilterQ) end

---Sets the filter cutoff frequency in hz.
---@param FilterFrequencyHz number
function UModularSynthComponent:SetFilterFrequencyMod(FilterFrequencyHz) end

---Sets the filter cutoff frequency in hz.
---@param FilterFrequencyHz number
function UModularSynthComponent:SetFilterFrequency(FilterFrequencyHz) end

---Sets the filter algorithm.
---@param FilterAlgorithm ESynthFilterAlgorithm
function UModularSynthComponent:SetFilterAlgorithm(FilterAlgorithm) end

---Sets whether or not the synth is in unison mode (i.e. no spread)
---@param EnableUnison boolean
function UModularSynthComponent:SetEnableUnison(EnableUnison) end

---Sets whether or not to retrigger envelope per note on.
---@param RetriggerEnabled boolean
function UModularSynthComponent:SetEnableRetrigger(RetriggerEnabled) end

---Sets whether or not to use polyphony for the synthesizer.
---@param bEnablePolyphony boolean
function UModularSynthComponent:SetEnablePolyphony(bEnablePolyphony) end

---@param PatchId FPatchId
---@param bIsEnabled boolean
---@return boolean
function UModularSynthComponent:SetEnablePatch(PatchId, bIsEnabled) end

---Sets whether or not to use legato for the synthesizer.
---@param LegatoEnabled boolean
function UModularSynthComponent:SetEnableLegato(LegatoEnabled) end

---Sets the envelope decay time in msec.
---@param DecayTimeMsec number
function UModularSynthComponent:SetDecayTime(DecayTimeMsec) end

---Sets the chorus frequency
---@param Frequency number
function UModularSynthComponent:SetChorusFrequency(Frequency) end

---Sets the chorus feedback
---@param Feedback number
function UModularSynthComponent:SetChorusFeedback(Feedback) end

---Sets whether or not chorus is enabled.
---@param EnableChorus boolean
function UModularSynthComponent:SetChorusEnabled(EnableChorus) end

---Sets the chorus depth
---@param Depth number
function UModularSynthComponent:SetChorusDepth(Depth) end

---Sets the envelope attack time in msec.
---@param AttackTimeMsec number
function UModularSynthComponent:SetAttackTime(AttackTimeMsec) end

---Play a new note. Optionally pass in a duration to automatically turn off the note.
---@param Note number
---@param Velocity integer
---@param Duration number @[opt] 
function UModularSynthComponent:NoteOn(Note, Velocity, Duration) end

---Stop the note (will only do anything if a voice is playing with that note)
---@param Note number
---@param bAllNotesOff boolean @[opt] 
---@param bKillAllNotes boolean @[opt] 
function UModularSynthComponent:NoteOff(Note, bAllNotesOff, bKillAllNotes) end

---Creates a new modular synth patch between a modulation source and a set of modulation destinations
---@param PatchSource ESynth1PatchSource
---@param PatchCables TArray_FSynth1PatchCable_
---@param bEnableByDefault boolean
---@return FPatchId
function UModularSynthComponent:CreatePatch(PatchSource, PatchCables, bEnableByDefault) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UModularSynthComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UModularSynthComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UModularSynthComponent:AddAssetUserDataOfClass(InUserDataClass) end

