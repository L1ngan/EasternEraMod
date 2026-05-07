---@class FBoneFilter
---@field public bExcludeSelf boolean @* Do not include the joint specified * * This option will work differently based on EBoneFilterActionOption * If EBoneFilterActionOption is Remove, it will exclude itself and only remove children * For example, if you specify hand, it will only include children of hand(all fingers), * not the hand itself if this is true * * But if the EBoneFilterActionOption is Keep, it will exclude itself but include all parents of it * You can't remove joint without children removed, and you can't keep without your parents
---@field public BoneName string @Name of Bone Name
local FBoneFilter = {}
