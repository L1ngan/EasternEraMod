---@class AChaosSolverActor : AActor
---@field public Properties FChaosSolverConfiguration
---@field public bHasFloor boolean @End deprecated properties
---@field public FloorHeight number
---@field public ChaosDebugSubstepControl FChaosDebugSubstepControl @* Control to pause/step/substep the solver to the next synchronization point.
---@field public SpriteComponent UBillboardComponent @* Display icon in the editor
---@field private SimulationAsset FDataflowSimulationAsset @Solver dataflow asset used to advance in time
---@field private GameplayEventDispatcherComponent UChaosGameplayEventDispatcher @Component responsible for harvesting and triggering physics-related gameplay events (hits, breaks, etc)
local AChaosSolverActor = {}

---Controls whether the solver is able to simulate particles it controls
---@param bActive boolean
function AChaosSolverActor:SetSolverActive(bActive) end

---Makes this solver the current world solver. Dynamically spawned objects will have their physics state created in this solver.
function AChaosSolverActor:SetAsCurrentWorldSolver() end

