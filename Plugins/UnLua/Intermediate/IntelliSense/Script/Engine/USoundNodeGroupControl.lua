---Plays different sounds depending on the number of active sounds
---Any time a new sound is played, the first group that has an available slot will be chosen
---@class USoundNodeGroupControl : USoundNode
---@field public GroupSizes TArray<integer> @How many active sounds are allowed for each group
local USoundNodeGroupControl = {}

