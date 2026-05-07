---Settings for the camera calibration when in editor and standalone.
---@class UCameraCalibrationEditorSettings : UDeveloperSettings
---@field public bShowEditorToolbarButton boolean @True if a lens file button shortcut should be added to level editor toolbar.
---@field public CategoryColor FLensDataCategoryEditorColor @Data Table category color settings
---@field public bEnableTimeSlider boolean @Enable or Disable Time input driven by evaluation inputs.
---@field public DefaultDisplayUnit ELensDisplayUnit @Units used to display/interpret Focal Length and Image Center
---@field public bForceDefaultMediaStepRate boolean @If true, the media player in the calibration tools will always use the default step rate. Otherwise, it will try to use the frame rate of the media to step by exactly one frame.
---@field public DefaultMediaStepRateInMilliseconds number @The default step rate (ms) that the media player in the calibration tools should use when stepping forward/back
---@field private UserLensFile TSoftObjectPtr<ULensFile> @Startup lens file per user in editor Can be overridden. Priority of operation is 1. Apply startup lens file found in 'CameraCalibration.StartupLensFile' cvar at launch 2. If none found, apply user startup file (this one) 3. If none found, apply project startup file
local UCameraCalibrationEditorSettings = {}

