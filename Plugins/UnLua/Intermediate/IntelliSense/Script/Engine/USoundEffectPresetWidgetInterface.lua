---@class USoundEffectPresetWidgetInterface : UAudioPanelWidgetInterface
local USoundEffectPresetWidgetInterface = {}

---Called when the preset object is changed
---@param Preset USoundEffectPreset
---@param PropertyName string
function USoundEffectPresetWidgetInterface:OnPropertyChanged(Preset, PropertyName) end

---Called when the preset widget is constructed
---@param Preset USoundEffectPreset
function USoundEffectPresetWidgetInterface:OnConstructed(Preset) end

---Returns the class of Preset the widget supports
---@return TSubclassOf_USoundEffectPreset_
function USoundEffectPresetWidgetInterface:GetClass() end

---@return string
function USoundEffectPresetWidgetInterface:GetIconBrushName() end

---@return string
function USoundEffectPresetWidgetInterface:GetEditorName() end

