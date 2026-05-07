---@class UMetaSoundPresetWidgetInterface : UAudioPanelWidgetInterface
local UMetaSoundPresetWidgetInterface = {}

---Called when the preset widget is constructed, giving the builder of the associated MetaSound preset
---@param Builder UMetaSoundBuilderBase
function UMetaSoundPresetWidgetInterface:OnConstructed(Builder) end

---The MetaSounds whose presets are supported by this widget. If Support All Presets is true, this widget is supported by all presets except those in the Excluded array.
---MetaSounds in the include/exclude arrays can be MetaSound presets or non presets.
---If a MetaSound is not a preset, then presets of that MetaSound will be supported/excluded by this widget.
---@param bSupportAllPresets boolean @[out] 
---@param ExcludedMetaSounds TArray_TScriptInterface_UMetaSoundDocumentInterface__ @[out] 
---@param IncludedMetaSounds TArray_TScriptInterface_UMetaSoundDocumentInterface__ @[out] 
function UMetaSoundPresetWidgetInterface:GetSupportedMetaSounds(bSupportAllPresets, ExcludedMetaSounds, IncludedMetaSounds) end

---@return string
function UMetaSoundPresetWidgetInterface:GetIconBrushName() end

---@return string
function UMetaSoundPresetWidgetInterface:GetEditorName() end

