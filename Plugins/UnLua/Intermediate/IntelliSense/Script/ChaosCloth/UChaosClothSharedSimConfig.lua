---Chaos config settings shared between all instances of a skeletal mesh.
---Unlike UChaosClothConfig, these settings contain common cloth simulation
---parameters that cannot change between the various clothing assets assigned
---to a specific skeletal mesh. @@seealso UChaosClothConfig.
---@class UChaosClothSharedSimConfig : UClothSharedConfigCommon
---@field public IterationCount integer @The number of time step dependent solver iterations. This sets iterations at 60fps. This will increase the stiffness of all constraints but will increase the CPU cost. If the frame rate is higher, the actual number of iterations used by the solver might be less, if the frame rate is lower it might be more.
---@field public MaxIterationCount integer @The maximum number of solver iterations. This is the upper limit of the number of iterations set in solver, when the frame rate is lower than 60fps.
---@field public SubdivisionCount integer @The number of solver substeps. This will increase the precision of the collision inputs and help with constraint resolutions but will increase the CPU cost.
---@field public bUseLocalSpaceSimulation boolean @Enable local space simulation to help with jitter due to floating point precision errors if the character is far away from the world origin
---@field public bUseXPBDConstraints boolean @Enable the XPBD constraints that resolve stiffness independently from the number of iterations Experimental, this feature might be removed without warning, not for production use
local UChaosClothSharedSimConfig = {}

