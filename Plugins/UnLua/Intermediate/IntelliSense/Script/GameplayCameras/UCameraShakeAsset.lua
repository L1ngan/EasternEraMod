---@class UCameraShakeAsset : UBaseCameraObject
---@field public RootNode UShakeCameraNode @Root camera node.
---@field public BlendIn USimpleFixedTimeBlendCameraNode @The blend to use for easing into the shake.
---@field public BlendOut USimpleFixedTimeBlendCameraNode @The blend to use for easing out of the shake.
---@field public bIsSingleInstance boolean @Whether only one instance of this shake can be started via the camera shake functions. Note that this doesn't prevent this shake from being used "inline" inside a camera rig.
---@field public BuildStatus ECameraBuildStatus @The current build state of this camera shake.
---@field private Guid FGuid @The camera shake's unique ID.
---@field private GraphNodePos FIntVector2 @Position of the camera shake node in the node graph editor.
---@field private GraphNodeComment string @User-written comment in the node graph editor.
---@field private AllNodeObjects TArray<UObject> @A list of all the camera nodes, including the 'loose' ones that aren't connected to the root node, and therefore would be GC'ed if we didn't hold them here.
local UCameraShakeAsset = {}

