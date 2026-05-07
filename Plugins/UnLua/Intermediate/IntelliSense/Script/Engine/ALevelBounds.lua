---Defines level bounds
---Updates bounding box automatically based on actors transformation changes or holds fixed user defined bounding box
---Uses only actors where AActor::IsLevelBoundsRelevant() == true
---@class ALevelBounds : AActor
---@field public BoxComponent UBoxComponent @Bounding box for the level bounds.
---@field public bAutoUpdateBounds boolean @Whether to automatically update actor bounds based on all relevant actors bounds belonging to the same level
local ALevelBounds = {}

