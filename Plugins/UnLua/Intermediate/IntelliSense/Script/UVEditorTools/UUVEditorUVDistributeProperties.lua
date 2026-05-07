---UV Distribute Settings
---@class UUVEditorUVDistributeProperties : UUVEditorUVTransformPropertiesBase
---@field public DistributeMode EUVEditorDistributeMode @Controls the distribution behavior
---@field public Grouping EUVEditorAlignDistributeGroupingMode @Controls how distribution considers grouping selected objects with respect to the distribution behavior.
---@field public bEnableManualDistances boolean @If true, enable overriding distances used in the distribution behavior with manually entered values.
---@field public ManualExtent number @For Edge and Center distribution modes, specify the desired overall distance within which to evenly place the edges or centers.
---@field public ManualSpacing number @For Spacing and Remove Overlap distribution modes, specify the desired distance between objects.
local UUVEditorUVDistributeProperties = {}

