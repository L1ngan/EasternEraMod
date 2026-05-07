---@class USynthComponentMonoWaveTable : USynthComponent
---@field public OnTableAltered MulticastDelegate @Wave Table curve was edited
---@field public OnNumTablesChanged MulticastDelegate @Curve array altered
---@field protected CurrentPreset UMonoWaveTableSynthPreset @The settings asset to use for this synth
local USynthComponentMonoWaveTable = {}

---Sets the wavetable position. Expects a percentage between 0.0 and 1.0
---@param InPosition number
function USynthComponentMonoWaveTable:SetWaveTablePosition(InPosition) end

---Inform the synth if the sustain pedal is pressed or not
---@param InSustainPedalState boolean
function USynthComponentMonoWaveTable:SetSustainPedalState(InSustainPedalState) end

---Set the shape of the Lfo controlling the position
---@param InLfoType ESynthLFOType
function USynthComponentMonoWaveTable:SetPosLfoType(InLfoType) end

---Set frequency of LFO controlling Table Position (in Hz)
---@param InLfoFrequency number
function USynthComponentMonoWaveTable:SetPosLfoFrequency(InLfoFrequency) end

---Set the Modulation depth of the Lfo controlling the Table Position around the current position value
---         0.0 = no modulation, 1.0 = current position +/- 0.5 (Lfo + Position result will clamp [0.0, 1.0])
---@param InLfoDepth number
function USynthComponentMonoWaveTable:SetPosLfoDepth(InLfoDepth) end

---Set Position envelope sustain gain
---@param InSustainGain number
function USynthComponentMonoWaveTable:SetPositionEnvelopeSustainGain(InSustainGain) end

---Set Position envelope release time (msec)
---@param InReleaseTimeMsec number
function USynthComponentMonoWaveTable:SetPositionEnvelopeReleaseTime(InReleaseTimeMsec) end

---Set Position envelope envelope inversion
---@param bInInvert boolean
function USynthComponentMonoWaveTable:SetPositionEnvelopeInvert(bInInvert) end

---Set Position envelope envelope depth
---@param InDepth number
function USynthComponentMonoWaveTable:SetPositionEnvelopeDepth(InDepth) end

---Set Position envelope decay time (msec)
---@param InDecayTimeMsec number
function USynthComponentMonoWaveTable:SetPositionEnvelopeDecayTime(InDecayTimeMsec) end

---Set Position envelope bias inversion
---@param bInBiasInvert boolean
function USynthComponentMonoWaveTable:SetPositionEnvelopeBiasInvert(bInBiasInvert) end

---Set Position envelope bias depth
---@param InDepth number
function USynthComponentMonoWaveTable:SetPositionEnvelopeBiasDepth(InDepth) end

---Set Position envelope attack time (msec)
---@param InAttackTimeMsec number
function USynthComponentMonoWaveTable:SetPositionEnvelopeAttackTime(InAttackTimeMsec) end

---Set the Cut-off frequency of the low-pass filter
---@param InNewQ number
function USynthComponentMonoWaveTable:SetLowPassFilterResonance(InNewQ) end

---Set the oscillator's frequency via midi note number
---@param InMidiNote number
function USynthComponentMonoWaveTable:SetFrequencyWithMidiNote(InMidiNote) end

---Set a frequency offset in cents (for pitch modulation such as the Pitch Bend Wheel)
---@param FrequencyOffsetCents number
function USynthComponentMonoWaveTable:SetFrequencyPitchBend(FrequencyOffsetCents) end

---Sets the oscillator's frequency
---@param FrequencyHz number
function USynthComponentMonoWaveTable:SetFrequency(FrequencyHz) end

---Set Low-Pass Filter envelope sustain gain
---@param InSustainGain number
function USynthComponentMonoWaveTable:SetFilterEnvelopeSustainGain(InSustainGain) end

---Set Low-Pass Filter envelope release time (msec)
---@param InReleaseTimeMsec number
function USynthComponentMonoWaveTable:SetFilterEnvelopeReleaseTime(InReleaseTimeMsec) end

---Set Low-Pass Filter envelope decay time (msec)
---@param InDecayTimeMsec number
function USynthComponentMonoWaveTable:SetFilterEnvelopenDecayTime(InDecayTimeMsec) end

---Set Low-Pass Filter envelope inversion
---@param bInInvert boolean
function USynthComponentMonoWaveTable:SetFilterEnvelopeInvert(bInInvert) end

---Set Low-Pass Filter envelope depth
---@param InDepth number
function USynthComponentMonoWaveTable:SetFilterEnvelopeDepth(InDepth) end

---Set Low-Pass Filter envelope bias inversion
---@param bInBiasInvert boolean
function USynthComponentMonoWaveTable:SetFilterEnvelopeBiasInvert(bInBiasInvert) end

---Set Low-Pass Filter envelope bias depth
---@param InDepth number
function USynthComponentMonoWaveTable:SetFilterEnvelopeBiasDepth(InDepth) end

---Set Low-Pass Filter envelope attack time (msec)
---@param InAttackTimeMsec number
function USynthComponentMonoWaveTable:SetFilterEnvelopeAttackTime(InAttackTimeMsec) end

---Set a Keyframe value given a Table number and Keyframe number.
---         Returns false if the request was invalid.
---         NewValue will be clamped from +/- 1.0
---@param TableIndex integer
---@param KeyframeIndex integer
---@param NewValue number
---@return boolean
function USynthComponentMonoWaveTable:SetCurveValue(TableIndex, KeyframeIndex, NewValue) end

---Set the curve tangent ("Curve depth" between keyframes)
---This should only be used for live-editing features! (changing the curves at runtime is expensive)
---@param TableIndex integer
---@param InNewTangent number
---@return boolean
function USynthComponentMonoWaveTable:SetCurveTangent(TableIndex, InNewTangent) end

---Set the curve interpolation type (What the curve is doing between keyframes)
---This should only be used for live-editing features! (changing the curves at runtime is expensive)
---@param InterpolationType CurveInterpolationType
---@param TableIndex integer
---@return boolean
function USynthComponentMonoWaveTable:SetCurveInterpolationType(InterpolationType, TableIndex) end

---Set Amp envelope sustain gain [0.0, 1.0]
---@param InSustainGain number
function USynthComponentMonoWaveTable:SetAmpEnvelopeSustainGain(InSustainGain) end

---Set Amp envelope release time (msec)
---@param InReleaseTimeMsec number
function USynthComponentMonoWaveTable:SetAmpEnvelopeReleaseTime(InReleaseTimeMsec) end

---Set whether or not the Amp envelope is inverted
---@param bInInvert boolean
function USynthComponentMonoWaveTable:SetAmpEnvelopeInvert(bInInvert) end

---Set the overall depth of the Amp envelope
---@param InDepth number
function USynthComponentMonoWaveTable:SetAmpEnvelopeDepth(InDepth) end

---Set Amp envelope decay time (msec)
---@param InDecayTimeMsec number
function USynthComponentMonoWaveTable:SetAmpEnvelopeDecayTime(InDecayTimeMsec) end

---Set whether or not the Amp envelope's bias is inverted
---@param bInBiasInvert boolean
function USynthComponentMonoWaveTable:SetAmpEnvelopeBiasInvert(bInBiasInvert) end

---Set the bias depth of the the Amp envelope
---@param InDepth number
function USynthComponentMonoWaveTable:SetAmpEnvelopeBiasDepth(InDepth) end

---Set Amp envelope attack time (msec)
---@param InAttackTimeMsec number
function USynthComponentMonoWaveTable:SetAmpEnvelopeAttackTime(InAttackTimeMsec) end

---Refresh a particular wavetable (from Game Thread data)
---@param Index integer
function USynthComponentMonoWaveTable:RefreshWaveTable(Index) end

---Refresh all wavetables (from Game Thread data)
function USynthComponentMonoWaveTable:RefreshAllWaveTables() end

---Starts a new note (retrigs modulators, etc.)
---@param InMidiNote number
---@param InVelocity number
function USynthComponentMonoWaveTable:NoteOn(InMidiNote, InVelocity) end

---Starts a new note (retrigs modulators, etc.)
---@param InMidiNote number
function USynthComponentMonoWaveTable:NoteOff(InMidiNote) end

---Start BP functionality // Get the number of table elements from Blueprint
---@return integer
function USynthComponentMonoWaveTable:GetNumTableEntries() end

---Get the number of curves in the wave table. (returns -1 if there is no asset)
---@return integer
function USynthComponentMonoWaveTable:GetMaxTableIndex() end

---Get an array of floats that represent the key frames in the requested curve
---@param TableIndex number
---@return TArray_number_
function USynthComponentMonoWaveTable:GetKeyFrameValuesForTable(TableIndex) end

---Get the curve interpolation type (What the curve is doing between keyframes)
---@param TableIndex integer
---@return number
function USynthComponentMonoWaveTable:GetCurveTangent(TableIndex) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USynthComponentMonoWaveTable:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function USynthComponentMonoWaveTable:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USynthComponentMonoWaveTable:AddAssetUserDataOfClass(InUserDataClass) end

