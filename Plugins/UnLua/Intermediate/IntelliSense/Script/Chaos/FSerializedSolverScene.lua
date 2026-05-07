---Structure holding the serialized state of a rigid solver
---Used to save it to disk or to re-hydrate a new solver instance
---@class FSerializedSolverScene
---@field public ParticleData TArray<FChaosVDParticleDataWrapper>
---@field public JointConstraintData TArray<FChaosVDJointConstraint>
---@field public CharacterGroundConstraintData TArray<FChaosVDCharacterGroundConstraint>
---@field public CollisionMidPhaseData TArray<FChaosVDParticlePairMidPhase>
local FSerializedSolverScene = {}
