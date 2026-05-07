---Represents the interactor in the world
---@class UVRScoutingInteractor : UVREditorInteractor
---@field public FlyingIndicatorComponent UStaticMeshComponent @Shown in Navigation mode
---@field private EditorOnlyInputComponent UInputComponent
---@field private bReceivesEditorInput boolean @If set to true, then this interactor will be able to recieve input delegate callbacks when in the editor. Defaults to true since we will always want this interactor to consume input
local UVRScoutingInteractor = {}

---@param bInValue boolean
function UVRScoutingInteractor:SetReceivesEditorInput(bInValue) end

---Sets the gizmo mode for selected object
---@param InGizmoMode EGizmoHandleTypes
function UVRScoutingInteractor:SetGizmoMode(InGizmoMode) end

---Gets all actors that are selected in the world editor
---@return TArray_AActor_
function UVRScoutingInteractor.GetSelectedActors() end

---@return boolean
function UVRScoutingInteractor:GetReceivesEditorInput() end

---Returns the current InputComponent. This will be NULL unless bReceivesEditorInput is set to true.
---@return UInputComponent
function UVRScoutingInteractor:GetInputComponent() end

---Gets the gizmo mode for selected object
---@return EGizmoHandleTypes
function UVRScoutingInteractor:GetGizmoMode() end

