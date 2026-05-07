---@class FCompositeFont
---@field public DefaultTypeface FTypeface @The default typeface that will be used when not overridden by a sub-typeface
---@field public FallbackTypeface FCompositeFallbackFont @The fallback typeface that will be used as a last resort when no other typeface provides a match
---@field public SubTypefaces TArray<FCompositeSubFont> @Sub-typefaces to use for a specific set of characters
---@field public bEnableAscentDescentOverride boolean @If set to false, the ascent and descent override specified in a Font face will be ignored, and the value from the font source file will be used instead.
local FCompositeFont = {}
