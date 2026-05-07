---This class represents a single layer in a tile map.  All layers in the map must have the size dimensions.
---@class UPaperTileLayer : UObject
---@field public LayerName string @Name of the layer
---@field private LayerWidth integer @Width of the layer (in tiles)
---@field private LayerHeight integer @Height of the layer (in tiles)
---@field private bHiddenInEditor boolean @Is this layer currently hidden in the editor?
---@field private bHiddenInGame boolean @Should this layer be hidden in the game?
---@field private bLayerCollides boolean @Should this layer generate collision? Note: This only has an effect if the owning tile map has collision enabled
---@field private bOverrideCollisionThickness boolean @Should this layer use a custom thickness for generated collision instead of the thickness setting in the tile map?
---@field private bOverrideCollisionOffset boolean @Should this layer use a custom offset for generated collision instead of the layer drawing offset?
---@field private CollisionThicknessOverride number @The override thickness of the collision for this layer (when bOverrideCollisionThickness is set)
---@field private CollisionOffsetOverride number @The override offset of the collision for this layer (when bOverrideCollisionOffset is set) Note: This is measured in Unreal Units (cm) from the center of the tile map component, not from the previous layer.
---@field private LayerColor FLinearColor @The color of this layer (multiplied with the tile map color and passed to the material as a vertex color)
---@field private AllocatedWidth integer @The allocated width of the tile data (used to handle resizing without data loss)
---@field private AllocatedHeight integer @The allocated height of the tile data (used to handle resizing without data loss)
---@field private AllocatedCells TArray<FPaperTileInfo> @The allocated tile data
local UPaperTileLayer = {}

