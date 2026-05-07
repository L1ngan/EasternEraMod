---A complete camera asset.
---@class UCameraAsset : UObject
---@field private CameraDirector UCameraDirector @The camera director to use in this camera.
---@field private EnterTransitions TArray<UCameraRigTransition> @A list of default enter transitions for all the camera rigs in this asset.
---@field private ExitTransitions TArray<UCameraRigTransition> @A list of default exit transitions for all the camera rigs in this asset.
---@field private BuildStatus ECameraBuildStatus @The current build state of this camera asset.
---@field private DefaultParameters FInstancedPropertyBag @Generated values for all camera rig parameters.
---@field private ParameterDefinitions TArray<FCameraObjectInterfaceParameterDefinition> @Generated list of all the camera rigs' parameters.
---@field private ParameterOwners TArray<UCameraRigAsset> @Owner rigs for each parameter definition.
---@field private AllocationInfo FCameraAssetAllocationInfo @Allocation info for the camera asset.
---@field private TransitionGraphNodePos FIntVector2 @Position of the camera node in the shared transitions graph editor.
---@field private TransitionGraphNodeComment string @User-written comment in the transition graph editor.
---@field private AllSharedTransitionsObjects TArray<UObject> @All nodes used in the shared transitions graph editor.
local UCameraAsset = {}

