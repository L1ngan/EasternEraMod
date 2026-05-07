---UV map generation settings that are exposed to the user for scripting and through the editor
---@class FUVMapSettings
---@field public Size FVector @Length, width, height of the UV mapping gizmo
---@field public UVTile FVector2D @Tiling of the UV mapping
---@field public Position FVector @Position of the UV mapping gizmo
---@field public Rotation FRotator @Rotation of the UV mapping gizmo (angles in degrees)
---@field public Scale FVector @Scale of the UV mapping gizmo
local FUVMapSettings = {}
