---@class UNiagaraDataInterfaceGrid3D : UNiagaraDataInterfaceRWBase
---@field public ClearBeforeNonIterationStage boolean @Option to clear the buffer prior to a stage where the iteration count does not match the grid resolution.  Useful for stages where one wants to do sparse writes and accumulate values.
---@field public NumCells FIntVector @Number of cells
---@field public CellSize number @World space size of a cell
---@field public NumCellsMaxAxis integer @Number of cells on the longest axis
---@field public SetResolutionMethod ESetResolutionMethod @Method for setting the grid resolution
---@field public WorldBBoxSize FVector @World size of the grid
local UNiagaraDataInterfaceGrid3D = {}

