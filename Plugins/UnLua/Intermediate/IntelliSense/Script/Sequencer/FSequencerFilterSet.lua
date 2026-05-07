---@class FSequencerFilterSet
---@field public Label string
---@field public EnabledStates TMap<string, boolean> @Enabled and active states of common filters. Enabled if in the map. Active if the value of the key is true.
---@field public TextFilterString string
local FSequencerFilterSet = {}
