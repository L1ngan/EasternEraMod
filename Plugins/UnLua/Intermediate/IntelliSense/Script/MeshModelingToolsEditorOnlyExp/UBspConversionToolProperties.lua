---@class UBspConversionToolProperties : UInteractiveToolPropertySet
---@field public ConversionMode EBspConversionMode
---@field public bIncludeVolumes boolean @Whether to consider BSP volumes to be valid conversion targets.
---@field public bRemoveConvertedVolumes boolean @Whether to remove any selected BSP volumes after using them to create a static mesh.
---@field public bExplicitSubtractiveBrushSelection boolean @Whether subtractive brushes have to be explicitly selected to be part of the conversion. If false, all        subtractive brushes in the level will be used.
---@field public bRemoveConvertedSubtractiveBrushes boolean @Whether subtractive brushes used in a conversion should be removed. Only acts on explicitly selected        subtractive brushes.
---@field public bCacheBrushes boolean @Caches individual brush conversions in "convert then combine" mode during a single invocation of        the tool. Only useful if changing selections or properties after starting the tool. Cleared on tool shutdown.
---@field public bShowPreview boolean @Determines whether a dynamic preview is shown. Note that this introduces non-background computations       at each event that changes the result, rather than only performing a computation on Accept.
local UBspConversionToolProperties = {}

