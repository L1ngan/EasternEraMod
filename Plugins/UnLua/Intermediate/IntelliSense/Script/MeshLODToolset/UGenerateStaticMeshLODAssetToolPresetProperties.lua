---@class UGenerateStaticMeshLODAssetToolPresetProperties : UInteractiveToolPropertySet
---@field public Preset TWeakObjectPtr<UStaticMeshLODGenerationSettings> @Preset Asset represents a set of Saved Settings for this Tool
local UGenerateStaticMeshLODAssetToolPresetProperties = {}

---Save the current Tool settings to the Preset Asset
function UGenerateStaticMeshLODAssetToolPresetProperties:WriteToPreset() end

---Read the current Tool settings from the Preset Asset
function UGenerateStaticMeshLODAssetToolPresetProperties:ReadFromPreset() end

