---Avatar Actor
---@class AVREditorAvatarActor : AActor
---@field private HeadMeshComponent UStaticMeshComponent @Our avatar's head mesh
---@field private WorldMovementGridMeshComponent UStaticMeshComponent @The grid that appears while the user is dragging the world around
---@field private WorldMovementGridMID UMaterialInstanceDynamic @Grid mesh component dynamic material instance to set the opacity
---@field private WorldMovementGridOpacity number @Opacity of the movement grid and post process
---@field private bIsDrawingWorldMovementPostProcess boolean @True if we're currently drawing our world movement post process
---@field private WorldMovementPostProcessMaterial UMaterialInstanceDynamic @Post process material for "greying out" the world while in world movement mode
---@field private ScaleProgressMeshComponent UStaticMeshComponent @Background progressbar scaling mesh
---@field private CurrentScaleProgressMeshComponent UStaticMeshComponent @Current scale progressbar mesh
---@field private UserScaleIndicatorText UTextRenderComponent @Current scale text
---@field private FixedUserScaleMID UMaterialInstanceDynamic @Base dynamic material for the user scale fixed progressbar
---@field private TranslucentFixedUserScaleMID UMaterialInstanceDynamic @Translucent dynamic material for the user scale fixed progressbar
---@field private CurrentUserScaleMID UMaterialInstanceDynamic @Base dynamic material for the current user scale progressbar
---@field private TranslucentCurrentUserScaleMID UMaterialInstanceDynamic @Translucent dynamic material for the current user scale progressbar
---@field private PostProcessComponent UPostProcessComponent @Post process for drawing VR-specific post effects
---@field private VRMode UVREditorMode @Owning object
local AVREditorAvatarActor = {}

