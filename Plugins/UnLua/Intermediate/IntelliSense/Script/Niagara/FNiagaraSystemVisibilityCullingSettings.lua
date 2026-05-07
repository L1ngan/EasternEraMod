---Scalability settings for Niagara Systems for a particular platform set (unless overridden).
---@class FNiagaraSystemVisibilityCullingSettings
---@field public bCullWhenNotRendered boolean @Controls whether we cull when not rendered. This includes all reasons for being not rendered such as view frustum, occlusion and hidden flags etc. As this requires feedback form the rendering system, it cannot be used for pre-culling.
---@field public bCullByViewFrustum boolean @Controls whether view frustum culling is enabled. Niagara can do it's own separate view frustum culling to give coarse visibility culling that does not depend directly on rendering like CullWhenNotRendered. This requires fixed bounds to be used in pre-culling.
---@field public bAllowPreCullingByViewFrustum boolean @If true and bCullByViewFrustum is enabled, we allow view frustum checks in pre-culling. Meaning we can cull off screen systems before they even spawn.
---@field public MaxTimeOutsideViewFrustum number @Effects will be culled if they go longer than this time outside the view frustum.
---@field public MaxTimeWithoutRender number @Effects will be culled if they go longer than this time without being rendered.
local FNiagaraSystemVisibilityCullingSettings = {}
