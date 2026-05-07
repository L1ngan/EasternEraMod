---Solver settings that will be used in dataflow/deformergraph
---@class FGroomSolverSettings
---@field public NumSubSteps integer @Number of temporal sub-steps
---@field public NumSolverIterations integer @Number of iterations for the constraint solver
---@field public SimulationFrameRate number @Frame rate for the simulation to run
---@field public MaxLODDistance number @Maximum LOD distance (if distance between the component and the views is higher that this threshold, no simulation)
---@field public MinLODDistance number @Minimum LOD distance (if distance between the component and the views is lower that this threshold, no simulation)
local FGroomSolverSettings = {}
