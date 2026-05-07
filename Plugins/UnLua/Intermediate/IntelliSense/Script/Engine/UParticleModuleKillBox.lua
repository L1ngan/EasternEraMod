---@class UParticleModuleKillBox : UParticleModuleKillBase
---@field public LowerLeftCorner FRawDistributionVector @The lower left corner of the box.
---@field public UpperRightCorner FRawDistributionVector @The upper right corner of the box.
---@field public bAbsolute boolean @If true, the box coordinates are in world space./
---@field public bKillInside boolean @If true, particles INSIDE the box will be killed. If false (the default), particles OUTSIDE the box will be killed.
---@field public bAxisAlignedAndFixedSize boolean @If true, the box will always be axis aligned and non-scalable.
local UParticleModuleKillBox = {}

