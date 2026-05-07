---VR Editor user interface manager
---@class UVREditorUISystem : UObject
---@field protected VRMode UVREditorMode @Owning object
---@field protected FloatingUIs TMap<string, AVREditorFloatingUI> @All of the floating UIs.  These may or may not be visible (spawned)
---@field protected PreviewWindowInfo TMap<string, AActor> @All of the preview window info.
---@field protected InfoDisplayPanel AVREditorFloatingUI @Our Quick Menu UI
---@field protected QuickRadialMenu AVREditorRadialFloatingUI @The Radial Menu UI
---@field protected DraggingUI AVREditorDockableWindow @The current UI that is being dragged
---@field protected ColorPickerUI AVREditorDockableWindow @The color picker dockable window
---@field protected LaserInteractor UVREditorInteractor @Interactor that has a laser and is generally interacting with the scene
---@field protected UIInteractor UVREditorInteractor @Interactor that usually accesses UI and other helper functionality
---@field protected VRButtons TArray<FVRButton> @All buttons created for the radial and quick menus
---@field protected RadialMenuHandler UVRRadialMenuHandler @The add-on that handles radial menu switching
local UVREditorUISystem = {}

