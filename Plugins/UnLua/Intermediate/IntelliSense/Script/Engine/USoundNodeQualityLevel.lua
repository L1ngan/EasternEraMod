---This SoundNode uses GameUserSettings AudioQualityLevel (or the editor override) to choose which branch to play
---and at runtime will only load in to memory sound waves connected to the branch that will be selected
---@class USoundNodeQualityLevel : USoundNode
---@field public CookedQualityLevelIndex integer @A Property to indicate which quality this node was cooked with. (INDEX_NONE if not cooked, or unset).
local USoundNodeQualityLevel = {}

