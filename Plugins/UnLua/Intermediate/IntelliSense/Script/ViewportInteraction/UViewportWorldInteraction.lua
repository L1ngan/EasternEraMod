---@class UViewportWorldInteraction : UEditorWorldExtension
---@field private Interactors TArray<UViewportInteractor> @All the interactors registered to modify the world
---@field private ViewportTransformer UViewportTransformer @The active system being used to transform objects
---@field private TransformGizmoActor ABaseTransformGizmo @Transform gizmo actor, for manipulating selected actor(s)
---@field private SnapGridActor AActor @Actor for the snap grid
---@field private SnapGridMeshComponent UStaticMeshComponent @The plane mesh we use to draw a snap grid under selected objects
---@field private SnapGridMID UMaterialInstanceDynamic @MID for the snap grid, so we can update snap values on the fly
---@field private DefaultMouseCursorInteractor UMouseCursorInteractor @The default mouse cursor interactor, activated on demand
---@field private ActorsToExcludeFromHitTest TArray<TWeakObjectPtr<AActor>> @List of actors which should never be hit by an interactor, such as the 'avatar mesh actor' in VR
---@field private AssetContainer UViewportInteractionAssetContainer @Container of assets
local UViewportWorldInteraction = {}

---Sets GNewWorldToMetersScale
---@param NewWorldToMetersScale number
---@param bCompensateRoomWorldScale boolean @[opt] 
function UViewportWorldInteraction:SetWorldToMetersScale(NewWorldToMetersScale, bCompensateRoomWorldScale) end

---@param NewRoomTransform FTransform
function UViewportWorldInteraction:SetRoomTransformForNextFrame(NewRoomTransform) end

---Sets a new transform for the room so that the HMD is aligned to the new transform.
---              The Head is kept level to the ground and only rotated on the yaw
---@param NewHeadTransform FTransform
function UViewportWorldInteraction:SetHeadTransform(NewHeadTransform) end

---Removes interactor from the worldinteraction and removes the interactor from its paired interactor if any
---@param Interactor UViewportInteractor
function UViewportWorldInteraction:RemoveInteractor(Interactor) end

---Gets the world scale factor, which can be multiplied by a scale vector to convert to room space
---@return number
function UViewportWorldInteraction:GetWorldScaleFactor() end

---Gets the transform gizmo actor, or returns null if we currently don't have one
---@return ABaseTransformGizmo
function UViewportWorldInteraction:GetTransformGizmoActor() end

---Gets the world space transform of the calibrated VR room origin.  When using a seated VR device, this will feel like the
---      camera's world transform (before any HMD positional or rotation adjustments are applied.)
---@return FTransform
function UViewportWorldInteraction:GetRoomTransform() end

---Gets the transform of the viewport / user's HMD in room space
---@return FTransform
function UViewportWorldInteraction:GetRoomSpaceHeadTransform() end

---Gets all the interactors
---@return TArray_UViewportInteractor_
function UViewportWorldInteraction:GetInteractors() end

---Gets the transform of the viewport / user's HMD in world space
---@return FTransform
function UViewportWorldInteraction:GetHeadTransform() end

---Adds interactor to the worldinteraction
---@param Interactor UViewportInteractor
function UViewportWorldInteraction:AddInteractor(Interactor) end

---Adds an actor to the list of actors to never allow an interactor to hit in the scene.  No selection.  No hover.
---There's no need to remove actors from this list.  They'll expire from it automatically when destroyed.
---@param ActorToExcludeFromHitTests AActor
function UViewportWorldInteraction:AddActorToExcludeFromHitTests(ActorToExcludeFromHitTests) end

