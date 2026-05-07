---General purpose data structure for grouping all parameters needed when sizing or wrapping a string
---@class FTextSizingParameters
---@field public DrawX number @a pixel value representing the horizontal screen location to begin rendering the string
---@field public DrawY number @a pixel value representing the vertical screen location to begin rendering the string
---@field public DrawXL number @a pixel value representing the width of the area available for rendering the string
---@field public DrawYL number @a pixel value representing the height of the area available for rendering the string
---@field public Scaling FVector2D @A value between 0.0 and 1.0, which represents how much the width/height should be scaled, where 1.0 represents 100% scaling.
---@field public DrawFont UFont @the font to use for sizing/wrapping the string
---@field public SpacingAdjust FVector2D @Horizontal spacing adjustment between characters and vertical spacing adjustment between wrapped lines
local FTextSizingParameters = {}
