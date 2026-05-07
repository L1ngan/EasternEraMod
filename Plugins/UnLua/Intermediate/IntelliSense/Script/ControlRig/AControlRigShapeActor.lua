---An actor used to represent a rig control
---@class AControlRigShapeActor : AActor
---@field public ActorRootComponent USceneComponent @this is the one holding transform for the controls
---@field public StaticMeshComponent UStaticMeshComponent @this is visual representation of the transform
---@field public ControlRigIndex integer @the name of the control this actor is referencing
---@field public ControlRig TWeakObjectPtr<UControlRig> @control rig this actor is referencing we can have multiple control rig's visible
---@field public ControlName string @the name of the control this actor is referencing
---@field public ShapeName string @the name of the shape to use on this actor
---@field public ColorParameterName string @the name of the color parameter on the material
---@field public CachedIndex FCachedRigElement
---@field private bSelected boolean @Whether this control is selected
---@field private bHovered boolean @Whether this control is hovered
local AControlRigShapeActor = {}

---Set the control to be selected/unselected
---@param bInSelected boolean
function AControlRigShapeActor:SetSelected(bInSelected) end

---Set the control to be selected/unselected
---@param bInSelectable boolean
function AControlRigShapeActor:SetSelectable(bInSelectable) end

---Set the control to be hovered
---@param bInHovered boolean
function AControlRigShapeActor:SetHovered(bInHovered) end

---this returns root component transform based on attach
---when there is no attach, it is based on 0
---@param InTransform FTransform
function AControlRigShapeActor:SetGlobalTransform(InTransform) end

---Set the control to be enabled/disabled
---@param bInEnabled boolean
function AControlRigShapeActor:SetEnabled(bInEnabled) end

---Event called when the transform of this control has changed
---@param NewTransform FTransform
function AControlRigShapeActor:OnTransformChanged(NewTransform) end

---Event called when the selection state of this control has changed
---@param bIsSelected boolean
function AControlRigShapeActor:OnSelectionChanged(bIsSelected) end

---Event called when the manipulating state of this control has changed
---@param bIsManipulating boolean
function AControlRigShapeActor:OnManipulatingChanged(bIsManipulating) end

---Event called when the hovered state of this control has changed
---@param bIsSelected boolean
function AControlRigShapeActor:OnHoveredChanged(bIsSelected) end

---Event called when the enabled state of this control has changed
---@param bIsEnabled boolean
function AControlRigShapeActor:OnEnabledChanged(bIsEnabled) end

---Get whether the control is selected/unselected
---@return boolean
function AControlRigShapeActor:IsSelectedInEditor() end

---Get whether the control is hovered
---@return boolean
function AControlRigShapeActor:IsHovered() end

---Get whether the control is enabled/disabled
---@return boolean
function AControlRigShapeActor:IsEnabled() end

---@return FTransform
function AControlRigShapeActor:GetGlobalTransform() end

