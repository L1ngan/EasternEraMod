---@class FCompositeSubFont : FCompositeFallbackFont
---@field public CharacterRanges TArray<FInt32Range> @Array of character ranges for which this sub-font should be used
---@field public Cultures string @Optional semi-colon separated list of cultures that this sub-font should be used with (if specified, this sub-font will be favored by those cultures and ignored by others)
---@field public EditorName string @Name of this sub-font. Only used by the editor UI as a convenience to let you state the purpose of the font family.
local FCompositeSubFont = {}
