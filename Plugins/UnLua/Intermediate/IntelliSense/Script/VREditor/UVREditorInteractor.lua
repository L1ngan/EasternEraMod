---VREditor default interactor
---@class UVREditorInteractor : UViewportInteractor
---@field protected bIsUndoRedoSwipeEnabled boolean @Whether swiping left/right on touchpad/joystick triggers undo/redo
---@field protected MotionControllerComponent UMotionControllerComponent @Motion controller component which handles late-frame transform updates of all parented sub-components
---@field protected LaserMotionControllerComponent UMotionControllerComponent @Separate motion controller component set to the "aim" pose motion source, used for the laser pointer.
---@field protected HandMeshComponent UStaticMeshComponent @Access to the current handmesh. Use ReplaceHandMeshComponent() to update the entire StaticMeshComponent.
---@field private LaserSplineComponent USplineComponent @Spline for this hand's laser pointer
---@field private LaserSplineMeshComponents TArray<USplineMeshComponent> @Spline meshes for curved laser
---@field private LaserPointerMID UMaterialInstanceDynamic @MID for laser pointer material (opaque parts)
---@field private TranslucentLaserPointerMID UMaterialInstanceDynamic @MID for laser pointer material (translucent parts)
---@field private HoverMeshComponent UStaticMeshComponent @Hover impact indicator mesh
---@field private HoverPointLightComponent UPointLightComponent @Hover point light
---@field private HandMeshMID UMaterialInstanceDynamic @MID for hand mesh
---@field private OwningAvatar AActor @Avatar actor that we're attached to. Cached so that we can change the HandMeshComponent via BP at runtime.
---@field private ControllerType EControllerType @For asymmetrical systems - what type of controller this is
---@field private OverrideControllerType EControllerType @What was our previous controller type
---@field protected ControllerMotionSource string @Right or left hand
---@field protected VRMode UVREditorMode @The mode that owns this interactor
local UVREditorInteractor = {}

function UVREditorInteractor:UpdateHandMeshRelativeTransform() end

---Temporary set what controller type this is for asymmetric control schemes.
---You can't override the controller type when there's already an override.
---Remove the temporary controller type with EControllerType::Unknown
---@param InControllerType EControllerType
---@return boolean
function UVREditorInteractor:TryOverrideControllerType(InControllerType) end

---Sets up all components
---@param OwningActor AActor
function UVREditorInteractor:SetupComponent(OwningActor) end

---Set if we want to force to show the laser
---@param bInForceShow boolean
function UVREditorInteractor:SetForceShowLaser(bInForceShow) end

---Next frame this will be used as color for the laser
---@param InColor FLinearColor
function UVREditorInteractor:SetForceLaserColor(InColor) end

---Set what controller type this is for asymmetric control schemes
---@param InControllerType EControllerType
function UVREditorInteractor:SetControllerType(InControllerType) end

---Sets the EControllerHand for this motioncontroller
---@param InControllerHandSide string
function UVREditorInteractor:SetControllerHandSide(InControllerHandSide) end

---Replace the default VR controller mesh with a custom one.
---@param NewMesh UStaticMesh
---@param MeshScale FVector @[opt] 
function UVREditorInteractor:ReplaceHandMeshComponent(NewMesh, MeshScale) end

---Check if the touchpad is currently touched
---@return boolean
function UVREditorInteractor:IsTouchingTrackpad() end

---Gets if this interactor is hovering over UI
---@return boolean
function UVREditorInteractor:IsHoveringOverUI() end

---Gets if the interactor is clicking on any UI
---@return boolean
function UVREditorInteractor:IsClickingOnUI() end

---Initialize default values
---@param InVRMode UVREditorMode
function UVREditorInteractor:Init(InVRMode) end

---Get the current position of the trackpad or analog stick
---@return FVector2D
function UVREditorInteractor:GetTrackpadPosition() end

---@return AVREditorTeleporter
function UVREditorInteractor:GetTeleportActor() end

---Returns the slide delta for pushing and pulling objects. Needs to be implemented by derived classes (e.g. touchpad for vive controller or scrollweel for mouse )
---@return number
function UVREditorInteractor:GetSlideDelta() end

---Gets the trigger value
---@return number
function UVREditorInteractor:GetSelectAndMoveTriggerValue() end

---Get the motioncontroller component of this interactor
---@return UMotionControllerComponent
function UVREditorInteractor:GetMotionControllerComponent() end

---Get the last position of the trackpad or analog stick
---@return FVector2D
function UVREditorInteractor:GetLastTrackpadPosition() end

---Getters and setters
---@return FVector
function UVREditorInteractor:GetLaserStart() end

---@return FVector
function UVREditorInteractor:GetLaserEnd() end

---
---@return string
function UVREditorInteractor:GetHMDDeviceType() end

---Returns what controller type this is for asymmetric control schemes
---@return EControllerType
function UVREditorInteractor:GetControllerType() end

---Get the side of the controller
---@return EControllerHand
function UVREditorInteractor:GetControllerSide() end

---Sets the EControllerHand for this motioncontroller
---@return string
function UVREditorInteractor:GetControllerHandSide() end

