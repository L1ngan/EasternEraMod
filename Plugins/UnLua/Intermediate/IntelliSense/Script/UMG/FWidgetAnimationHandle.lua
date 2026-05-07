---Handle to an ongoing or finished widget animation.
---@class FWidgetAnimationHandle
---@field private WeakUserWidget TWeakObjectPtr<UUserWidget> @The widget this handle relates to.
---@field private StateIndex integer @The animation state index.
---@field private StateSerial integer @The animation state serial.
local FWidgetAnimationHandle = {}
