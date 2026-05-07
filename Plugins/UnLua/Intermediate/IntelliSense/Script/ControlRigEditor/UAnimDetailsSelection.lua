---The selection in Anim Details.
---Note, the selection does not necessarily correspond to the selection in Anim Outliner or Sequencer/Curve Editor.
---Use UAnimDetailsProxyManager::GetExternalSelection to get the external selection.
---@class UAnimDetailsSelection : UObject
---@field private PropertyIDToPropertyDataMap TMap<string, FAnimDetailsSelectionPropertyData> @A property ID with its property data.
local UAnimDetailsSelection = {}

