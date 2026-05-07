---Selects sounds from a random set
---@class USoundNodeRandom : USoundNode
---@field public Weights TArray<number>
---@field public HasBeenUsed TArray<boolean> @Internal state of which sounds have been played.  This is only used at runtime to keep track of which sounds have been played
---@field public NumRandomUsed integer @Counter var so we don't have to count all of the used sounds each time we choose a sound *
---@field public PreselectAtLevelLoad integer @If greater than 0, then upon each level load such a number of inputs will be randomly selected and the rest will be removed. This can be used to cut down the memory usage of large randomizing cues.
---@field public bShouldExcludeFromBranchCulling boolean @If set to true, this random node will not be culled on load for platforms with a maximum amount of preloaded random branches  set in project settings
---@field public bSoundCueExcludedFromBranchCulling boolean @Exclusion for branch culling set by the sound cue.
---@field public bRandomizeWithoutReplacement boolean @Determines whether or not this SoundNodeRandom should randomize with or without replacement. WithoutReplacement means that only nodes left will be valid for selection.  So with that, you are guarenteed to have only one occurrence of the sound played until all of the other sounds in the set have all been played. WithReplacement means that a node will be chosen and then placed back into the set. So one could play the same sound over and over if the probabilities don't go your way :-)
---@field public PIEHiddenNodes TArray<integer> @Editor only list of nodes hidden to duplicate behavior of PreselectAtLevelLoad
local USoundNodeRandom = {}

