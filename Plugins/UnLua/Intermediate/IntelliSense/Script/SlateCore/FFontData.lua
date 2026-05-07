---Payload data describing an individual font in a typeface. Keep this lean as it's also used as a key!
---@class FFontData
---@field private FontFilename string @The filename of the font to use. This variable is ignored if we have a font face asset, and is set to the .ufont file in a cooked build.
---@field private Hinting EFontHinting @The hinting algorithm to use with the font. This variable is ignored if we have a font face asset, and is synchronized with the font face asset on load in a cooked build.
---@field private LoadingPolicy EFontLoadingPolicy @Enum controlling how this font should be loaded at runtime. See the enum for more explanations of the options. This variable is ignored if we have a font face asset, and is synchronized with the font face asset on load in a cooked build.
---@field private SubFaceIndex integer @The index of the sub-face that should be used. This is typically zero unless using a TTC/OTC font.
---@field private FontFaceAsset UObject @Font data v3. This points to a font face asset.
local FFontData = {}
