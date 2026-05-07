---Base class for a camera shake. A camera shake contains a root shake "pattern" which is
---the object that contains the actual logic driving how the camera is shaken. Keeping the two
---separate makes it possible to completely change how a shake works without having to create
---a completely different asset.
---@class UCameraShakeBase : UObject
---@field public bSingleInstance boolean @If true to only allow a single instance of this shake class to play at any given time. Subsequent attempts to play this shake will simply restart the timer.
---@field public ShakeScale number @The overall scale to apply to the shake. Only valid when the shake is active.
---@field private RootShakePattern UCameraShakePattern @The root pattern for this camera shake
---@field private CameraManager APlayerCameraManager @The camera manager owning this camera shake. Only valid when the shake is active.
local UCameraShakeBase = {}

---Sets the root pattern of this camera shake
---@param InPattern UCameraShakePattern
function UCameraShakeBase:SetRootShakePattern(InPattern) end

---Gets the root pattern of this camera shake
---@return UCameraShakePattern
function UCameraShakeBase:GetRootShakePattern() end

