---@class UPaperExtractSpritesSettings : UObject
---@field public SpriteExtractMode ESpriteExtractMode @Sprite extract mode
---@field public OutlineColor FLinearColor @The color of the sprite boundary outlines
---@field public ViewportTextureTint FLinearColor @Apply a tint to the texture in the viewport to improve outline visibility in this editor
---@field public BackgroundColor FLinearColor @The viewport background color
---@field public NamingTemplate string @The name of the sprite that will be created. {0} will get replaced by the sprite number.
---@field public NamingStartIndex integer @The number to start naming with
local UPaperExtractSpritesSettings = {}

