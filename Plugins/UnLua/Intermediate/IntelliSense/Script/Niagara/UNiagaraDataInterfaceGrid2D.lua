---@class UNiagaraDataInterfaceGrid2D : UNiagaraDataInterfaceRWBase
---@field public ClearBeforeNonIterationStage boolean @Option to clear the buffer prior to a stage where the iteration count does not match the grid resolution.  Useful for stages where one wants to do sparse writes and accumulate values.
---@field public NumCellsX integer @Number of cells in X
---@field public NumCellsY integer @Number of cells in Y
---@field public NumCellsMaxAxis integer @Number of cells on the longest axis
---@field public NumAttributes integer @Number of Attributes
---@field public SetGridFromMaxAxis boolean @Set grid resolution according to longest axis
---@field public WorldBBoxSize FVector2D @World size of the grid
local UNiagaraDataInterfaceGrid2D = {}

