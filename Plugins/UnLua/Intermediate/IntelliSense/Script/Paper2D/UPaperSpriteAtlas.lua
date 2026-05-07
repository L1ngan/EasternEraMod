---Groups together a set of sprites that will try to share the same texture atlas (allowing them to be combined into a single draw call)
---@class UPaperSpriteAtlas : UObject
---@field public AtlasDescription string @Description of this atlas, which shows up in the content browser tooltip
---@field public MaxWidth integer @Maximum atlas page width (single pages might be smaller)
---@field public MaxHeight integer @Maximum atlas page height (single pages might be smaller)
---@field public MipCount integer @Maximum atlas page height (single pages might be smaller)
---@field public PaddingType EPaperSpriteAtlasPadding @The type of padding performed on this atlas
---@field public Padding integer @The number of pixels of padding
---@field public CompressionSettings integer @Compression settings to use on atlas texture
---@field public Filter integer @Texture filtering mode when sampling these textures
---@field public GeneratedTextures TArray<UTexture> @List of generated atlas textures
---@field public AtlasGUID FGuid @The GUID of the atlas group, used to match up sprites that belong to this group even thru atlas renames
---@field public bRebuildAtlas boolean @Slots in the atlas
---@field public AtlasSlots TArray<FPaperSpriteAtlasSlot> @Slots in the atlas
---@field public NumIncrementalBuilds integer @Track the number of incremental builds
---@field public BuiltWidth integer @Values used when building this atlas
---@field public BuiltHeight integer
---@field public BuiltPadding integer
local UPaperSpriteAtlas = {}

