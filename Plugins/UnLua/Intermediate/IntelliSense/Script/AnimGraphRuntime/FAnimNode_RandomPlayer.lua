---@class FAnimNode_RandomPlayer : FAnimNode_AssetPlayerRelevancyBase
---@field public Entries TArray<FRandomPlayerSequenceEntry> @List of sequences to randomly step through
---@field private bIgnoreForRelevancyTest boolean @If true, "Relevant anim" nodes that look for the highest weighted animation in a state will ignore this node
---@field protected BlendWeight number @Last encountered blend weight for this node
---@field public bShuffleMode boolean @When shuffle mode is active we will never loop a sequence beyond MaxLoopCount without visiting each sequence in turn (no repeats). Enabling this will ignore ChanceToPlay for each entry
local FAnimNode_RandomPlayer = {}
