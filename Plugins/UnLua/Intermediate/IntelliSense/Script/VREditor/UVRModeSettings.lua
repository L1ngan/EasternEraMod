---Implements the settings for VR Mode.
---@class UVRModeSettings : UVISettings
---@field public bEnableAutoVREditMode boolean @If true, wearing a Vive or Oculus Rift headset will automatically enter VR Editing mode
---@field public bAutokeySequences boolean @Whether or not sequences should be autokeyed
---@field public InteractorHand EInteractorHand @Which hand should have the primary interactor laser on it
---@field public bShowWorldMovementGrid boolean @Show the movement grid for orientation while moving through the world
---@field public bShowWorldMovementPostProcess boolean @Dim the surroundings while moving through the world
---@field public bShowWorldScaleProgressBar boolean @Display a progress bar while scaling that shows your current scale
---@field public UIBrightness number @Adjusts the brightness of the UI panels
---@field public GizmoScale number @The size of the transform gizmo
---@field public DoubleClickTime number @The maximum time in seconds between two clicks for a double-click to register
---@field public TriggerPressedThreshold_Vive number @The amount (between 0-1) you have to depress the Vive controller trigger to register a press
---@field public TriggerPressedThreshold_Rift number @The amount (between 0-1) you have to depress the Oculus Touch controller trigger to register a press
---@field public InteractorClass TSoftClassPtr<UVREditorInteractor>
---@field public TeleporterClass TSoftClassPtr<AVREditorTeleporter>
---@field public ModeClass TSoftClassPtr<UVREditorModeBase> @The mode extension to use when UnrealEd is in VR mode. Use VREditorMode to get default editor behavior or select a custom mode.
local UVRModeSettings = {}

