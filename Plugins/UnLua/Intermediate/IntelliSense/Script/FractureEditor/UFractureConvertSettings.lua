---Settings related to geometry collection -> static mesh conversion *
---@class UFractureConvertSettings : UFractureToolSettings
---@field public bPromptForBaseName boolean @Whether to prompt user for a location and base name for the generated meshes, or automatically place them next to the source geometry collections
---@field public bPerBone boolean @Whether to generate a separate mesh for each bone, or one combined mesh
---@field public bCenterPivots boolean @Whether to center the pivot for each mesh, or use the pivot from the geometry collection
---@field public bPlaceInWorld boolean @Whether to place new static mesh actors in the level
---@field public bSelectNewActors boolean @Whether to select new static mesh actors
local UFractureConvertSettings = {}

