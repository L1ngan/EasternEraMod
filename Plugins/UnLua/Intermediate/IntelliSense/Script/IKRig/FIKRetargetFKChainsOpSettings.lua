---@class FIKRetargetFKChainsOpSettings : FIKRetargetOpSettingsBase
---@field public IKRigAsset UIKRigDefinition @The target IK Rig asset that contains the bones chains to retarget in this op.
---@field public ChainsToRetarget TArray<FRetargetFKChainSettings> @The setting for each chain to retarget
---@field public bDrawChainLines boolean @Debug draw lines on each chain in the viewport
---@field public bDrawSingleBoneChains boolean @Debug draw spheres on single-bone chains in the viewport
---@field public ChainDrawThickness number @Debug draw chain line thickness.
---@field public ChainDrawSize number @Debug draw size used for single-bone chains.
local FIKRetargetFKChainsOpSettings = {}
