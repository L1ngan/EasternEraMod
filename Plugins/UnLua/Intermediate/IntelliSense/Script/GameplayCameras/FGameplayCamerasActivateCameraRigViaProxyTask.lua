---A task that activates a camera rig via the given camera rig proxy inside a
---StateTreeCameraDirector. The given proxy must be mapped to an actual proxy
---in each camera asset using this StateTree.
---@class FGameplayCamerasActivateCameraRigViaProxyTask : FGameplayCamerasStateTreeTask
---@field public bRunOnce boolean @If true, the task will complete immediately. If false, the task will run until a transition triggers.
local FGameplayCamerasActivateCameraRigViaProxyTask = {}
