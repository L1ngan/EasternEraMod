---Implements an asset that can be used to store tool settings as a named preset
---@class UInteractiveToolsPresetCollectionAsset : UEditorConfigBase
---@field public PerToolPresets TMap<string, FInteractiveToolPresetStore> @TODO: Currently there are no helper methods within this class, simply providing raw access to the underlying arrays and maps. This is intentional. Until the design of the preset concept is more firmly decided, it seems like a waste to implement a bunch of methods that we don't know if we actually want/need at the end. Once we are satisifed with the data structure, planned accessors and mutators will include support for adding, removing, renaming, saving and retrieving presets.
---@field public CollectionLabel string
local UInteractiveToolsPresetCollectionAsset = {}

