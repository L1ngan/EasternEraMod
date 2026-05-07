---@class FRetargetPoleVectorSettings
---@field public TargetChainName string @The name of the target chain to align pole vectors on.
---@field public bEnabled boolean @Enable pole vector alignment on this chain.
---@field public AlignAlpha number @Range 0 to 1. Default 1. Matches the twist angle of this chain (along the Pole direction) to the source chain. At 0, the chain's pole vector direction will be left alone At 1, the root bone of the chain will be twist-rotated in the pole direction to match the orientation of the source chain.
---@field public StaticAngularOffset number @Range +/- 180. Default 0. An angular offset, in degrees, for the pole direction of the chain.
---@field public MaintainOffset boolean @Default is False. When true, the original angular offset between the source/target pole vectors will be maintained when aligning pole vectors.
local FRetargetPoleVectorSettings = {}
