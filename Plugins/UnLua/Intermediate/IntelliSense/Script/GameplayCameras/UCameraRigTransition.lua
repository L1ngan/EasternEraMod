---A camera transition.
---@class UCameraRigTransition : UObject
---@field public Conditions TArray<UCameraRigTransitionCondition> @The list of conditions that must pass for this transition to be used.
---@field public Blend UBlendCameraNode @The blend to use to blend a given camera rig in or out.
---@field public InitialOrientation ECameraRigInitialOrientation @The orientation to set on the camera rig.
---@field public bOverrideInitialOrientation boolean @Whether to override the default orientation to set on the camera rig.
---@field public bAllowCameraRigMerging boolean @Whether this transition allows merging two similar camera rigs together. Similar camera rigs run the same underlying camera rig prefab with different parameter overrides. When merged, instead of pushing a new camera rig instance on the blend stack, only the parameter overrides are kept. These parameter overrides are blended together and the underlying camera rig prefab is run only once.
---@field private GraphNodePos FIntVector2 @Position of the transition node in the transition graph editor.
---@field private GraphNodeComment string @User-written comment in the transition graph editor.
local UCameraRigTransition = {}

