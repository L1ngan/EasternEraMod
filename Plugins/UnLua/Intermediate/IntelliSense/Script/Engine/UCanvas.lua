---A drawing canvas.
---@class UCanvas : UObject
---@field public OrgX number @Modifiable properties.
---@field public OrgY number @Origin for drawing in X.
---@field public ClipX number @Origin for drawing in Y.
---@field public ClipY number @Bottom right clipping region.
---@field public DrawColor FColor @Bottom right clipping region.
---@field public bCenterX boolean @Color for drawing.
---@field public bCenterY boolean @Whether to center the text horizontally (about CurX)
---@field public bNoSmooth boolean @Whether to center the text vertically (about CurY)
---@field public SizeX integer @Don't bilinear filter.
---@field public SizeY integer @Zero-based actual dimensions X.
---@field public ColorModulate FPlane @Internal.
---@field public DefaultTexture UTexture2D
---@field public GradientTexture0 UTexture2D @Default texture to use
---@field public ReporterGraph UReporterGraph @Helper class to render 2d graphs on canvas
local UCanvas = {}

---Returns the clipped text size in screen space coordinates.
---@param RenderFont UFont
---@param RenderText string
---@param Scale FVector2D @[opt] 
---@return FVector2D
function UCanvas:K2_TextSize(RenderFont, RenderText, Scale) end

---Returns the wrapped text size in screen space coordinates.
---@param RenderFont UFont
---@param RenderText string
---@return FVector2D
function UCanvas:K2_StrLen(RenderFont, RenderText) end

---Performs a projection of a world space coordinates using the projection matrix set up for the Canvas.
---@param WorldLocation FVector
---@return FVector
function UCanvas:K2_Project(WorldLocation) end

---Draws a set of triangles on the Canvas.
---@param RenderTexture UTexture
---@param Triangles TArray_FCanvasUVTri_
function UCanvas:K2_DrawTriangle(RenderTexture, Triangles) end

---Draws a texture on the Canvas.
---@param RenderTexture UTexture
---@param ScreenPosition FVector2D
---@param ScreenSize FVector2D
---@param CoordinatePosition FVector2D
---@param CoordinateSize FVector2D @[opt] 
---@param RenderColor FLinearColor @[opt] 
---@param BlendMode integer @[opt] 
---@param Rotation number @[opt] 
---@param PivotPoint FVector2D @[opt] 
function UCanvas:K2_DrawTexture(RenderTexture, ScreenPosition, ScreenSize, CoordinatePosition, CoordinateSize, RenderColor, BlendMode, Rotation, PivotPoint) end

---Draws text on the Canvas.
---@param RenderFont UFont
---@param RenderText string
---@param ScreenPosition FVector2D
---@param Scale FVector2D @[opt] 
---@param RenderColor FLinearColor @[opt] 
---@param Kerning number @[opt] 
---@param ShadowColor FLinearColor @[opt] 
---@param ShadowOffset FVector2D @[opt] 
---@param bCentreX boolean @[opt] 
---@param bCentreY boolean @[opt] 
---@param bOutlined boolean @[opt] 
---@param OutlineColor FLinearColor @[opt] 
function UCanvas:K2_DrawText(RenderFont, RenderText, ScreenPosition, Scale, RenderColor, Kerning, ShadowColor, ShadowOffset, bCentreX, bCentreY, bOutlined, OutlineColor) end

---Draws a polygon on the Canvas.
---@param RenderTexture UTexture
---@param ScreenPosition FVector2D
---@param Radius FVector2D @[opt] 
---@param NumberOfSides integer @[opt] 
---@param RenderColor FLinearColor @[opt] 
function UCanvas:K2_DrawPolygon(RenderTexture, ScreenPosition, Radius, NumberOfSides, RenderColor) end

---Draws a set of triangles on the Canvas.
---@param RenderMaterial UMaterialInterface
---@param Triangles TArray_FCanvasUVTri_
function UCanvas:K2_DrawMaterialTriangle(RenderMaterial, Triangles) end

---Draws a material on the Canvas.
---@param RenderMaterial UMaterialInterface
---@param ScreenPosition FVector2D
---@param ScreenSize FVector2D
---@param CoordinatePosition FVector2D
---@param CoordinateSize FVector2D @[opt] 
---@param Rotation number @[opt] 
---@param PivotPoint FVector2D @[opt] 
function UCanvas:K2_DrawMaterial(RenderMaterial, ScreenPosition, ScreenSize, CoordinatePosition, CoordinateSize, Rotation, PivotPoint) end

---Draws a line on the Canvas.
---@param ScreenPositionA FVector2D
---@param ScreenPositionB FVector2D
---@param Thickness number @[opt] 
---@param RenderColor FLinearColor @[opt] 
function UCanvas:K2_DrawLine(ScreenPositionA, ScreenPositionB, Thickness, RenderColor) end

---Draws an unfilled box on the Canvas.
---@param ScreenPosition FVector2D
---@param ScreenSize FVector2D
---@param Thickness number @[opt] 
---@param RenderColor FLinearColor @[opt] 
function UCanvas:K2_DrawBox(ScreenPosition, ScreenSize, Thickness, RenderColor) end

---Draws a 3x3 grid border with tiled frame and tiled interior on the Canvas.
---@param BorderTexture UTexture
---@param BackgroundTexture UTexture
---@param LeftBorderTexture UTexture
---@param RightBorderTexture UTexture
---@param TopBorderTexture UTexture
---@param BottomBorderTexture UTexture
---@param ScreenPosition FVector2D
---@param ScreenSize FVector2D
---@param CoordinatePosition FVector2D
---@param CoordinateSize FVector2D @[opt] 
---@param RenderColor FLinearColor @[opt] 
---@param BorderScale FVector2D @[opt] 
---@param BackgroundScale FVector2D @[opt] 
---@param Rotation number @[opt] 
---@param PivotPoint FVector2D @[opt] 
---@param CornerSize FVector2D
function UCanvas:K2_DrawBorder(BorderTexture, BackgroundTexture, LeftBorderTexture, RightBorderTexture, TopBorderTexture, BottomBorderTexture, ScreenPosition, ScreenSize, CoordinatePosition, CoordinateSize, RenderColor, BorderScale, BackgroundScale, Rotation, PivotPoint, CornerSize) end

---Performs a deprojection of a screen space coordinate using the projection matrix set up for the Canvas.
---@param ScreenPosition FVector2D
---@param WorldOrigin FVector @[out] 
---@param WorldDirection FVector @[out] 
function UCanvas:K2_Deproject(ScreenPosition, WorldOrigin, WorldDirection) end

