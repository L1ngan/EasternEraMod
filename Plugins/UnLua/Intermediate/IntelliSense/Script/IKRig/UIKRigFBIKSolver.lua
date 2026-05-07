---NOTE: This type has been replaced with FFBIKSolver.
---@class UIKRigFBIKSolver : UIKRigSolver
---@field public RootBone string
---@field public Iterations integer
---@field public SubIterations integer
---@field public MassMultiplier number
---@field public bAllowStretch boolean
---@field public RootBehavior EPBIKRootBehavior
---@field public PrePullRootSettings FRootPrePullSettings
---@field public PullChainAlpha number
---@field public MaxAngle number
---@field public OverRelaxation number
local UIKRigFBIKSolver = {}

---@return TArray_UIKRig_FBIKEffector_
function UIKRigFBIKSolver:GetEffectors() end

---@return TArray_UIKRig_FBIKBoneSettings_
function UIKRigFBIKSolver:GetBoneSettings() end

