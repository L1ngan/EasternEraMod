---Settings for a particular Slate Post RT.
---Notably if enabled & blur by default. To be updated with additional effects & to be expandable in game code / settings.
---@class FSlatePostSettings
---@field public bEnabled boolean @Should this post buffer be enabled for updating
---@field public PostProcessorClass TSubclassOf<USlateRHIPostBufferProcessor> @Copy of actually loaded post processor class
---@field private PathToSlatePostRT string @Path to Slate Post RT Asset
---@field private CachedSlatePostRT UTextureRenderTarget2D @Cached load of Slate Post RT Asset
local FSlatePostSettings = {}
