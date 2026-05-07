---@class UPaperSpriteSheet : UObject
---@field public SpriteNames TArray<string> @The names of sprites during import
---@field public Sprites TArray<TSoftObjectPtr<UPaperSprite>>
---@field public TextureName string @The name of the default or diffuse texture during import
---@field public Texture UTexture2D @The asset that was created for TextureName
---@field public NormalMapTextureName string @The name of the normal map texture during import (if any)
---@field public NormalMapTexture UTexture2D @The asset that was created for NormalMapTextureName (if any)
---@field public AssetImportData UAssetImportData @Import data for this
local UPaperSpriteSheet = {}

