---Info for glow when using depth field rendering
---@class FDepthFieldGlowInfo
---@field public bEnableGlow boolean @Whether to turn on the outline glow (depth field fonts only)
---@field public GlowColor FLinearColor @Base color to use for the glow
---@field public GlowOuterRadius FVector2D @If bEnableGlow, outline glow outer radius (0 to 1, 0.5 is edge of character silhouette) glow influence will be 0 at GlowOuterRadius.X and 1 at GlowOuterRadius.Y
---@field public GlowInnerRadius FVector2D @If bEnableGlow, outline glow inner radius (0 to 1, 0.5 is edge of character silhouette) glow influence will be 1 at GlowInnerRadius.X and 0 at GlowInnerRadius.Y
local FDepthFieldGlowInfo = {}
