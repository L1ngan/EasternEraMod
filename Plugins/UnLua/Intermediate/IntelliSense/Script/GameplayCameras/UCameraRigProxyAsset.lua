---A proxy for a camera rig asset.
---This is useful for indicating that a camera rig should be activated in a camera director,
---but without hard-referencing a particular camera rig. This way, that camera director can
---be used by multiple cameras with their own camera rigs.
---@class UCameraRigProxyAsset : UObject
---@field public Guid FGuid @Unique identifier for this camera rig proxy.
local UCameraRigProxyAsset = {}

