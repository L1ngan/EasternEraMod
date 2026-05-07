---Draws 3D text in the world along with targeting line cues
---@class AFloatingText : AActor
---@field private SceneComponent USceneComponent @Scene component root of this actor
---@field private FirstLineComponent UStaticMeshComponent @First line segment component.  Starts at the designation location, goes toward the line connection point.
---@field private JointSphereComponent UStaticMeshComponent @Sphere that connects the two line segments and makes the joint look smooth and round
---@field private SecondLineComponent UStaticMeshComponent @Second line segment component.  Starts at the connection point and goes toward the 3D text.
---@field private TextComponent UTextRenderComponent @The 3D text we're drawing.  Positioned at the end of the second line.
---@field private MaskedTextMaterial UMaterialInterface @Masked text material.  Used after faded in
---@field private TranslucentTextMaterial UMaterialInterface @Translucent text material.  Used during fading
---@field private LineMaterial UMaterialInterface @Material to use for the line meshes
---@field private LineMaterialMID UMaterialInstanceDynamic @Dynamic material instance for fading lines in and out
local AFloatingText = {}

