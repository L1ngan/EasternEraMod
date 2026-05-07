---UV Align Settings
---@class UUVEditorUVAlignProperties : UUVEditorUVTransformPropertiesBase
---@field public AlignAnchor EUVEditorAlignAnchor @Controls what geometry the alignment is to be relative to when performed.
---@field public ManualAnchor FVector2D @Manual anchor location for relative alignment
---@field public AlignDirection EUVEditorAlignDirection @Controls what side of the island bounding boxes are being aligned
---@field public Grouping EUVEditorAlignDistributeGroupingMode @Controls how alignment considers grouping selected objects with respect to the alignment behavior.
local UUVEditorUVAlignProperties = {}

