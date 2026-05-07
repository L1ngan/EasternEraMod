---@class UDistributionVector : UDistribution
---@field public bCanBeBaked boolean @Can this variable be baked out to a FRawDistribution? Should be true 99% of the time
---@field public bIsDirty boolean @Set internally when the distribution is updated so that that FRawDistribution can know to update itself
---@field protected bBakedDataSuccesfully boolean
local UDistributionVector = {}

