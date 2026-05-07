---@class UVertexPaintBasicProperties : UInteractiveToolPropertySet
---@field public PrimaryBrushType EMeshVertexPaintBrushType @Primary Brush Mode //UPROPERTY(EditAnywhere, Category = Brush2, meta = (DisplayName = "Brush Type"))
---@field public SubToolType EMeshVertexPaintInteractionType @Painting Operation to apply when left-clicking and dragging
---@field public PaintColor FLinearColor @The Color that will be assigned to painted triangle vertices
---@field public bIsPaintPressureEnabled boolean @Should pressure sensitivity affect Paint brush strength?
---@field public BlendMode EMeshVertexPaintColorBlendMode @Controls how painted Colors will be combined with the existing Colors
---@field public SecondaryActionType EMeshVertexPaintSecondaryActionType @The Brush Operation that will be applied when holding the Shift key when in Painting
---@field public EraseColor FLinearColor @Color to set when using Erase brush
---@field public bIsErasePressureEnabled boolean @Should pressure sensitivity affect Erase brush strength?
---@field public SmoothStrength number @Strength of Smooth Brush
---@field public ChannelFilter FModelingToolsColorChannelFilter @Controls which Color Channels will be affected by Operations. Only enabled Channels are rendered.
---@field public bHardEdges boolean @Create Split Colors / Hard Color Edges at the borders of the painted area. Use Soften operations to un-split.
local UVertexPaintBasicProperties = {}

