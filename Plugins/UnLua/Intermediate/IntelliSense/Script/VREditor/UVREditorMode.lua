---VR Editor Mode. Extends editor viewports with functionality for VR controls and object manipulation
---@class UVREditorMode : UVREditorModeBase
---@field protected AvatarActor AVREditorAvatarActor @Actor with components to represent the VR avatar in the world, including motion controller meshes
---@field protected UISystem UVREditorUISystem @VR UI system
---@field protected TeleportActor AVREditorTeleporter @Teleporter system
---@field protected AutoScalerSystem UVREditorAutoScaler @Automatic scale system
---@field protected WorldInteraction UViewportWorldInteraction @World interaction manager
---@field protected PlacementSystem UVREditorPlacement
---@field protected Interactors TArray<UVREditorInteractor> @Interactors
---@field public InteractorClass TSoftClassPtr<UVREditorInteractor> @The controller to use when UnrealEd is in VR mode. Use VREditorInteractor get default editor behavior, or select a custom controller for special behavior
---@field public TeleporterClass TSoftClassPtr<AVREditorTeleporter> @The teleporter to use when UnrealEd is in VR mode. Use VREditorTeleporter to get default editor behavior, or select a custom teleporter
---@field private AssetContainer UVREditorAssetContainer @Container of assets
local UVREditorMode = {}

---Display the scene more closely to how it would appear at runtime (as opposed to edit time).
---@param bGameView boolean
function UVREditorMode:SetGameView(bGameView) end

---Returns whether game view is currently active.
---@return boolean
function UVREditorMode:IsInGameView() end

---Gets the world scale factor, which can be multiplied by a scale vector to convert to room space
---@return number
function UVREditorMode:GetWorldScaleFactor() end

