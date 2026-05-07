---The base class for Blueprint camera node evaluators.
---@class UBlueprintCameraNodeEvaluator : UObject
---@field protected bIsFirstFrame boolean @Whether this is the first frame of this camera node's lifetime.
---@field protected EvaluationContextOwner UObject @The owner object of this camera node's evaluation context.
---@field protected CameraData FBlueprintCameraEvaluationDataRef @The input/output camera data for this frame.
---@field protected CameraPose FBlueprintCameraPose @Deprecated fields.
---@field protected VariableTable FBlueprintCameraEvaluationDataRef
local UBlueprintCameraNodeEvaluator = {}

---The main execution callback for the camera node. Call SetCameraPose to affect the result.
---@param DeltaTime number
function UBlueprintCameraNodeEvaluator:TickCameraNode(DeltaTime) end

---Assigns the default parameter values of the owning camera rig to the given camera evaluation data.
---@param TargetCameraData FBlueprintCameraEvaluationDataRef
function UBlueprintCameraNodeEvaluator:SetDefaultOwningCameraRigParameters(TargetCameraData) end

---A utility function to set the current camera pose on this node's camera data.
---@param CameraPose FBlueprintCameraPose
function UBlueprintCameraNodeEvaluator:SetCurrentCameraPose(CameraPose) end

---@param InCameraPose FBlueprintCameraPose
function UBlueprintCameraNodeEvaluator:SetCameraPose(InCameraPose) end

function UBlueprintCameraNodeEvaluator:InitializeCameraNode() end

---Gets the player controller that the node is running for, if any.
---@return APlayerController
function UBlueprintCameraNodeEvaluator:GetPlayerController() end

---A utility function to get the current camera pose from this node's camera data.
---@return FBlueprintCameraPose
function UBlueprintCameraNodeEvaluator:GetCurrentCameraPose() end

---Deprecated methods.
---@return FBlueprintCameraPose
function UBlueprintCameraNodeEvaluator:GetCameraPose() end

---A utility function that tries to find if an actor owns the evaluation context.
---Handles the situation where the evaluation context is an actor component (like a
---UGameplayCameraComponent) or an actor itself.
---@param ActorClass TSubclassOf_AActor_
---@return AActor
function UBlueprintCameraNodeEvaluator:FindEvaluationContextOwnerActor(ActorClass) end

