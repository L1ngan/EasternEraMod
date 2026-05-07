---@class UIKRigDefinition : UObject
---@field public PreviewSkeletalMesh TSoftObjectPtr<USkeletalMesh> @The skeletal mesh to run the IK solve on (loaded into viewport). NOTE: you can assign ANY Skeletal Mesh to apply the IK Rig to. Compatibility is determined when a new mesh is assigned by comparing it's hierarchy with the goals, solvers and bone settings required by the rig. See output log for details.
---@field public BoneSize number @The size of the Bones in the editor viewport. This is set by callbacks from the viewport Character>Bones menu
---@field public DrawGoals boolean @Draw bones in the viewport.
---@field public GoalSize number @The size of the Goals in the editor viewport.
---@field public GoalThickness number @The thickness of the Goals in the editor viewport.
---@field public Controller UObject @The controller responsible for managing this asset's data (all editor mutation goes through this)
---@field private Skeleton FIKRigSkeleton @hierarchy and bone-pose transforms
---@field private Goals TArray<UIKRigEffectorGoal> @goals, used as effectors by solvers that support them
---@field private SolverStack TArray<FInstancedStruct> @polymorphic stack of solvers, executed in serial fashion where output of prior solve is input to the next
---@field private RetargetDefinition FRetargetDefinition @bone chains for IK Retargeter
local UIKRigDefinition = {}

