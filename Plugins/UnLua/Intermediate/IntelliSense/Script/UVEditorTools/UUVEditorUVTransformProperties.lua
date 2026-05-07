---UV Transform Settings
---@class UUVEditorUVTransformProperties : UUVEditorUVTransformPropertiesBase
---@field public Scale FVector2D @Scale applied to UVs, potentially non-uniform
---@field public Rotation number @Rotation applied to UVs after scaling, specified in degrees
---@field public Translation FVector2D @Translation applied to UVs, and after scaling and rotation
---@field public TranslationMode EUVEditorTranslationMode @Translation applied to UVs, and after scaling and rotation
---@field public PivotMode EUVEditorPivotType @Transformation origin mode used for scaling and rotation
---@field public ManualPivot FVector2D @Manual Transformation origin point
---@field public QuickTranslateOffset number
---@field public QuickRotationOffset number
---@field public QuickTranslation FVector2D
---@field public QuickRotation number
local UUVEditorUVTransformProperties = {}

