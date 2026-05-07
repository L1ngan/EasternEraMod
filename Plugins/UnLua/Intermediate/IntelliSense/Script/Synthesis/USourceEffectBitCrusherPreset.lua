---@class USourceEffectBitCrusherPreset : USoundEffectSourcePreset
---@field public Settings FSourceEffectBitCrusherSettings
local USourceEffectBitCrusherPreset = {}

---Sets just base (i.e. carrier) setting values without modifying modulation source references
---@param Settings FSourceEffectBitCrusherBaseSettings
function USourceEffectBitCrusherPreset:SetSettings(Settings) end

---@param InModulators TSet_USoundModulatorBase_
function USourceEffectBitCrusherPreset:SetSampleRateModulators(InModulators) end

---@param Modulator USoundModulatorBase
function USourceEffectBitCrusherPreset:SetSampleRateModulator(Modulator) end

---@param SampleRate number
function USourceEffectBitCrusherPreset:SetSampleRate(SampleRate) end

---@param ModulationSettings FSourceEffectBitCrusherSettings
function USourceEffectBitCrusherPreset:SetModulationSettings(ModulationSettings) end

---@param Bits number
function USourceEffectBitCrusherPreset:SetBits(Bits) end

---@param InModulators TSet_USoundModulatorBase_
function USourceEffectBitCrusherPreset:SetBitModulators(InModulators) end

---@param Modulator USoundModulatorBase
function USourceEffectBitCrusherPreset:SetBitModulator(Modulator) end

