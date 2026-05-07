---Settings pertaining to which PhysX broadphase to use, and settings for MBP if that is the chosen broadphase type
---@class FBroadphaseSettings
---@field public bUseMBPOnClient boolean @Whether to use MBP (Multi Broadphase Pruning
---@field public bUseMBPOnServer boolean
---@field public bUseMBPOuterBounds boolean @Whether to have MBP grid over concentrated inner bounds with loose outer bounds
---@field public MBPBounds FBox @Total bounds for MBP, must cover the game world or collisions are disabled for out of bounds actors
---@field public MBPOuterBounds FBox @Total bounds for MBP, should cover absolute maximum bounds of the game world where physics is required
---@field public MBPNumSubdivs integer @Number of times to subdivide the MBP bounds, final number of regions is MBPNumSubdivs^2
local FBroadphaseSettings = {}
