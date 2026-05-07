---Actor that contains all relevant data for the current visualized solver frame
---@class AChaosVDSolverInfoActor : AChaosVDDataContainerBaseActor
---@field protected SimulationTransform FTransform
---@field protected SolverName string
---@field protected CollisionDataComponent UChaosVDSolverCollisionDataComponent
---@field protected ParticleDataComponent UChaosVDParticleDataComponent
---@field protected JointsDataComponent UChaosVDSolverJointConstraintDataComponent
---@field protected CharacterGroundConstraintDataComponent UChaosVDSolverCharacterGroundConstraintDataComponent
---@field protected SceneQueryDataComponent UChaosVDSceneQueryDataComponent
---@field protected GTDataReRouteComponent UChaosVDAdditionalGTDataRouterComponent
local AChaosVDSolverInfoActor = {}

