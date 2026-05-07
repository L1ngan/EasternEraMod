---@class FHairSolverSettings
---@field public bEnableDeformation boolean @Use deformer for the groom solver
---@field public EnableSimulation boolean @Use niagara for the groom solver
---@field public NiagaraSolver EGroomNiagaraSolvers @Niagara solver to be used for simulation
---@field public CustomSystem TSoftObjectPtr<UNiagaraSystem> @Custom niagara system to be used if custom solver is picked
---@field public GravityPreloading number @Optimisation of the rest state configuration to compensate from the gravity
---@field public SubSteps integer @Number of sub steps to be done per frame. The actual solver calls are done at 24 fps
---@field public IterationCount integer @Number of iterations to solve the constraints with the xpbd solver
---@field public bForceVisible boolean @Force the Niagara solver component to be visible
local FHairSolverSettings = {}
