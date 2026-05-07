---"Explodes" the pieces from the Collection for better visualization
---@class FExplodedViewDataflowNode : FDataflowNode
---@field public Collection FManagedArrayCollection @Collection to explode
---@field public UniformScale number @Scale amount to expand the pieces uniformly in all directions
---@field public Scale FVector @Scale amounts to expand the pieces in all 3 directions
---@field public Offset FVector @Translate collection for exploded view
local FExplodedViewDataflowNode = {}
