---Defines an interface by which touch input can be controlled using any number of buttons and virtual joysticks
---@class UTouchInterface : UObject
---@field public Controls TArray<FTouchInputControl>
---@field public ActiveOpacity number @Opacity (0.0 - 1.0) of all controls while any control is active
---@field public InactiveOpacity number @Opacity (0.0 - 1.0) of all controls while no controls are active
---@field public TimeUntilDeactive number @How long after user interaction will all controls fade out to Inactive Opacity
---@field public TimeUntilReset number @How long after going inactive will controls reset/recenter themselves (0.0 will disable this feature)
---@field public ActivationDelay number @How long after joystick enabled for touch (0.0 will disable this feature)
---@field public bPreventRecenter boolean @Prevent joystick re-centering and moving from Center through user taps
---@field public StartupDelay number @Delay at startup before virtual joystick is drawn
local UTouchInterface = {}

