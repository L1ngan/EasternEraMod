---A singleton (per-asset) class used to make modifications to a UIKRigDefinition asset
---All modifications to an IKRigDefinition must go through this controller.
---Editors can subscribe to the callbacks on this controller to be notified of changes that require reinitialization
---of a running IK Rig processor instance.
---The API here is split into public/scripting sections which are accessible from Blueprint/Python and sections that
---are only relevant to editors in C++.
---@class UIKRigController : UObject
---@field private Asset UIKRigDefinition @The actual IKRigDefinition asset that this Controller modifies.
---@field private StructViewer UIKRigStructViewer @a dummy UObject to wrap UStructs for the details panel
local UIKRigController = {}

---Set the root bone on a given solver. (not all solvers support root bones, checks CanSetStartBone() first)
---@param RootBoneName string
---@param SolverIndex integer
---@return boolean
function UIKRigController:SetStartBone(RootBoneName, SolverIndex) end

---Set enabled/disabled status of the given solver.
---@param SolverIndex integer
---@param bIsEnabled boolean
---@return boolean
function UIKRigController:SetSolverEnabled(SolverIndex, bIsEnabled) end

---Sets the preview mesh to use. Loads the hierarchy into the asset's IKRigSkeleton.
---Returns true if the mesh was able to be set. False if it was incompatible for any reason.
---@param SkeletalMesh USkeletalMesh
---@return boolean
function UIKRigController:SetSkeletalMesh(SkeletalMesh) end

---Set the Root Bone of the retargeting (can only be one).
---@param RootBoneName string
---@return boolean
function UIKRigController:SetRetargetRoot(RootBoneName) end

---Set the Start Bone for the given Chain. Returns true if operation was successful.
---@param ChainName string
---@param StartBoneName string
---@return boolean
function UIKRigController:SetRetargetChainStartBone(ChainName, StartBoneName) end

---Set the Goal for the given Chain. Returns true if operation was successful.
---@param ChainName string
---@param GoalName string
---@return boolean
function UIKRigController:SetRetargetChainGoal(ChainName, GoalName) end

---Set the End Bone for the given Chain. Returns true if operation was successful.
---@param ChainName string
---@param EndBoneName string
---@return boolean
function UIKRigController:SetRetargetChainEndBone(ChainName, EndBoneName) end

---The the Bone that the given Goal should be parented to / associated with.
---@param GoalName string
---@param NewBoneName string
---@return boolean
function UIKRigController:SetGoalBone(GoalName, NewBoneName) end

---Set the end bone on a given solver. (not all solvers require extra end bones, checks CanSetEndBone() first)
---@param EndBoneName string
---@param SolverIndex integer
---@return boolean
function UIKRigController:SetEndBone(EndBoneName, SolverIndex) end

---Include/exclude a bone from all the solvers. All bones are included by default.
---@param BoneName string
---@param bExclude boolean
---@return boolean
function UIKRigController:SetBoneExcluded(BoneName, bExclude) end

---Renamed the given Chain. Returns the new name (same as old if unsuccessful).
---@param ChainName string
---@param NewChainName string
---@return string
function UIKRigController:RenameRetargetChain(ChainName, NewChainName) end

---Rename a Goal. Returns new name, which may be different after being sanitized. Returns NAME_None if this fails.
---@param OldName string
---@param PotentialNewName string
---@return string
function UIKRigController:RenameGoal(OldName, PotentialNewName) end

---Remove the solver at the given stack index.
---@param SolverIndex integer
---@return boolean
function UIKRigController:RemoveSolver(SolverIndex) end

---Remove a Chain with the given name. Returns true if a Chain was removed.
---@param ChainName string
---@return boolean
function UIKRigController:RemoveRetargetChain(ChainName) end

---Remove the Goal by name.
---@param GoalName string
---@return boolean
function UIKRigController:RemoveGoal(GoalName) end

---Remove settings for the given Bone/Solver. Does nothing if Bone doesn't have setting in this Solver.
---@param BoneName string
---@param SolverIndex integer
---@return boolean
function UIKRigController:RemoveBoneSetting(BoneName, SolverIndex) end

---Move the solver at the given index to the target index.
---@param SolverToMoveIndex integer
---@param TargetSolverIndex integer
---@return boolean
function UIKRigController:MoveSolverInStack(SolverToMoveIndex, TargetSolverIndex) end

---Returns true if the provided skeletal mesh could be used with this IK Rig.
---@param SkeletalMeshToCheck USkeletalMesh
---@return boolean
function UIKRigController:IsSkeletalMeshCompatible(SkeletalMeshToCheck) end

---Returns true if the given Goal is connected to the given Solver. False otherwise.
---@param GoalName string
---@param SolverIndex integer
---@return boolean
function UIKRigController:IsGoalConnectedToSolver(GoalName, SolverIndex) end

---Returns true if the given Goal is connected to ANY solver. False otherwise.
---@param GoalName string
---@return boolean
function UIKRigController:IsGoalConnectedToAnySolver(GoalName) end

---Get the name of the root bone on a given solver. (not all solvers support start bones, checks CanSetStartBone() first)
---@param SolverIndex integer
---@return string
function UIKRigController:GetStartBone(SolverIndex) end

---Get enabled status of the given solver.
---@param SolverIndex integer
---@return boolean
function UIKRigController:GetSolverEnabled(SolverIndex) end

---Get a controller to customize the settings for a given solver in the stack
---@param SolverIndex integer
---@return UIKRigSolverControllerBase
function UIKRigController:GetSolverController(SolverIndex) end

---Get the skeletal mesh this asset is initialized with
---@return USkeletalMesh
function UIKRigController:GetSkeletalMesh() end

---Get the name of the Root Bone of the retargeting (can only be one).
---@return string
function UIKRigController:GetRetargetRoot() end

---Get the End Bone name for the given Chain.
---@param ChainName string
---@return string
function UIKRigController:GetRetargetChainStartBone(ChainName) end

---Get read-only access to the list of Chains.
---@return TArray_FBoneChain_
function UIKRigController:GetRetargetChains() end

---Get the Goal name for the given Chain.
---@param ChainName string
---@return string
function UIKRigController:GetRetargetChainGoal(ChainName) end

---Get the Start Bone name for the given Chain.
---@param ChainName string
---@return string
function UIKRigController:GetRetargetChainEndBone(ChainName) end

---Get the global-space retarget pose transform of the given Bone.
---@param BoneName string
---@return FTransform
function UIKRigController:GetRefPoseTransformOfBone(BoneName) end

---Get the number of solvers in the stack.
---@return integer
function UIKRigController:GetNumSolvers() end

---Get the index for a given solver in the stack
---The input here is a solver controller (as returned by GetSolverController())
---@param InController UIKRigSolverControllerBase
---@return integer
function UIKRigController:GetIndexOfSolver(InController) end

---@param GoalName string
---@param SolverIndex integer
---@return UObject
function UIKRigController:GetGoalSettingsForSolver(GoalName, SolverIndex) end

---Get the Goal associated with the given Bone (may be NAME_None)
---@param BoneName string
---@return string
function UIKRigController:GetGoalNameForBone(BoneName) end

---Get read-write access to the Goal with the given name.
---@param GoalName string
---@return UIKRigEffectorGoal
function UIKRigController:GetGoal(GoalName) end

---Get the name of the end bone on a given solver. (not all solvers require extra end bones, checks CanSetEndBone() first)
---@param SolverIndex integer
---@return string
function UIKRigController:GetEndBone(SolverIndex) end

---Use this to get the controller for the given IKRig
---@param InIKRigDefinition UIKRigDefinition
---@return UIKRigController
function UIKRigController.GetController(InIKRigDefinition) end

---@param BoneName string
---@param SolverIndex integer
---@return UObject
function UIKRigController:GetBoneSettings(BoneName, SolverIndex) end

---The the Bone associated with the given Goal.
---@param GoalName string
---@return string
function UIKRigController:GetBoneForGoal(GoalName) end

---Returns true if the given Bone is excluded, false otherwise.
---@param BoneName string
---@return boolean
function UIKRigController:GetBoneExcluded(BoneName) end

---Get access to the list of Goals.
---@return TArray_UIKRigEffectorGoal_
function UIKRigController:GetAllGoals() end

---returns true if the goal has custom settings for the given solver
---@param GoalName string
---@param SolverIndex integer
---@return boolean
function UIKRigController:DoesSolverHaveCustomGoalSettings(GoalName, SolverIndex) end

---Disconnect the given Goal from the given Solver. This removes the Effector that associates the Goal with the Solver.
---@param GoalToRemove string
---@param SolverIndex integer
---@return boolean
function UIKRigController:DisconnectGoalFromSolver(GoalToRemove, SolverIndex) end

---Connect the given Goal to the given Solver. This creates an "Effector" with settings specific to this Solver.
---@param GoalName string
---@param SolverIndex integer
---@return boolean
function UIKRigController:ConnectGoalToSolver(GoalName, SolverIndex) end

---Analyse the skeleton to see if it matches a known template and automatically generates all retarget chains and sets the pelvis
---Returns true if a matching skeletal template was found and the retarget definition for it was applied.
---@return boolean
function UIKRigController:ApplyAutoGeneratedRetargetDefinition() end

---Analyse the skeleton to see if it matches a known template and automatically generates a full body IK setup
---Returns true if a matching skeletal template was found and the FBIK setup for it was applied.
---@return boolean
function UIKRigController:ApplyAutoFBIK() end

---Add a new solver of the given type to the bottom of the stack. Returns the stack index.
---The type here is the full package path of the UStruct type. For example: /Script/IKRig.FullBodyIKSolver
---@param InIKRigSolverType string
---@return integer
function UIKRigController:AddSolver(InIKRigSolverType) end

---Add a new chain with the given Chain and Bone names. Returns newly created chain name (uniquified).
---Note: only the ChainName is required here, all else can be set later.
---@param ChainName string
---@param StartBoneName string
---@param EndBoneName string
---@param GoalName string
---@return string
function UIKRigController:AddRetargetChain(ChainName, StartBoneName, EndBoneName, GoalName) end

---Add a new Goal associated with the given Bone. GoalName must be unique. Bones can have multiple Goals (rare).
---@param GoalName string
---@param BoneName string
---@return string
function UIKRigController:AddNewGoal(GoalName, BoneName) end

---Add settings to the given Bone/Solver. Does nothing if Bone already has settings in this Solver.
---@param BoneName string
---@param SolverIndex integer
---@return boolean
function UIKRigController:AddBoneSetting(BoneName, SolverIndex) end

