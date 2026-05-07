---A CameraActor is a camera viewpoint that can be placed in a level.
---@class ACameraActor : AActor
---@field private AutoActivateForPlayer integer @Specifies which player controller, if any, should automatically use this Camera when the controller is active.
---@field private CameraComponent UCameraComponent @The camera component for this camera
---@field private SceneComponent USceneComponent
local ACameraActor = {}

---Returns index of the player for whom we auto-activate, or INDEX_NONE (-1) if disabled.
---@return integer
function ACameraActor:GetAutoActivatePlayerIndex() end

