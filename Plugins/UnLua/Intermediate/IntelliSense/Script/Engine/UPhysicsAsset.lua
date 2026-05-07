---PhysicsAsset contains a set of rigid bodies and constraints that make up a single ragdoll.
---The asset is not limited to human ragdolls, and can be used for any physical simulation using bodies and constraints.
---A SkeletalMesh has a single PhysicsAsset, which allows for easily turning ragdoll physics on or off for many SkeletalMeshComponents
---The asset can be configured inside the Physics Asset Editor.
---@class UPhysicsAsset : UObject
---@field public PreviewSkeletalMesh TSoftObjectPtr<USkeletalMesh>
---@field public PhysicalAnimationProfiles TArray<string>
---@field public ConstraintProfiles TArray<string>
---@field public EditorBodyFlags TArray<integer> @A set of flags for each physics body. Used to store persistent per body editor data.
---@field public CurrentPhysicalAnimationProfileName string
---@field public CurrentConstraintProfileName string
---@field public BoundsBodies TArray<integer> @Index of bodies that are marked bConsiderForBounds
---@field public SkeletalBodySetups TArray<USkeletalBodySetup> @Array of SkeletalBodySetup objects. Stores information about collision shape etc. for each body. Does not include body position - those are taken from mesh.
---@field public ConstraintSetup TArray<UPhysicsConstraintTemplate> @Array of RB_ConstraintSetup objects. Stores information about a joint between two bodies, such as position relative to each body, joint limits etc.
---@field public SolverSettings FPhysicsAssetSolverSettings @Solver settings when the asset is used with a RigidBody Anim Node (RBAN).
---@field public SolverIterations FSolverIterations @Old solver settings shown for reference. These will be removed at some point. When you open an old asset you should see that the settings were transferred to "SolverSettings" above. You should usually see: SolverSettings.PositionIterations = OldSettings.SolverIterations * OldSetting.JointIterations; SolverSettings.VelocityIterations = 1; SolverSettings.ProjectionIterations = 1;
---@field public SolverType EPhysicsAssetSolverType @Solver type used in physics asset editor. This can be used to make what you see in the asset editor more closely resembles what you see in game (though there will be differences owing to framerate variation etc). If your asset will primarily be used as a ragdoll select "World", but if it will be used in the AnimGraph select "RBAN".
---@field public bNotForDedicatedServer boolean @If true, we skip instancing bodies for this PhysicsAsset on dedicated servers
---@field public ThumbnailInfo UThumbnailInfo @Information for thumbnail rendering
local UPhysicsAsset = {}

---Gets all constraints
---@param bIncludesTerminated boolean
---@param OutConstraints TArray_FConstraintInstanceAccessor_ @[out] 
function UPhysicsAsset:GetConstraints(bIncludesTerminated, OutConstraints) end

---Gets a constraint by its joint name
---@param ConstraintName string
---@return FConstraintInstanceAccessor
function UPhysicsAsset:GetConstraintByName(ConstraintName) end

---Gets a constraint by its joint name
---@param Bone1Name string
---@param Bone2Name string
---@return FConstraintInstanceAccessor
function UPhysicsAsset:GetConstraintByBoneNames(Bone1Name, Bone2Name) end

