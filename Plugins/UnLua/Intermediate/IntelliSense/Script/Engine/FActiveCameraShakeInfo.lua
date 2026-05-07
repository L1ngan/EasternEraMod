---Information about an active camera shake.
---@class FActiveCameraShakeInfo
---@field public ShakeInstance UCameraShakeBase @The camera shake instance currently running
---@field public ShakeSource TWeakObjectPtr<UCameraShakeSourceComponent> @An optional source that the shake is running from (otherwise it's global and un-attenuated)
---@field public bIsCustomInitialized boolean @Whether the shake was initialized with some custom callback code
local FActiveCameraShakeInfo = {}
