---@class UObjectMixerEditorSettings : UDeveloperSettings
---@field public bSyncSelection boolean @If enabled, clicking an item in the mixer list will also select the item in the Scene Outliner. Alt + Click to select items in mixer without selecting the item in the Scene outliner. If disabled, selections will not sync unless Alt is held. Effectively, this is the opposite behavior.
---@field public HybridRowPolicy EObjectMixerHybridMode @Determines how rows with a single matching component are displayed. By default, these rows are condensed into a single row. Selecting that row will select the actor in the scene outliner, but not the component. You can choose to select the component instead, or choose to not condense the rows and leave them separated.
local UObjectMixerEditorSettings = {}

