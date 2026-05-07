---Settings for the CameraCalibration plugin modules.
---@class UCameraCalibrationSettings : UDeveloperSettings
---@field private StartupLensFile TSoftObjectPtr<ULensFile> @Startup lens file for the project Can be overriden. Priority of operation is 1. Apply startup lens file found in 'CameraCalibration.StartupLensFile' cvar at launch 2. If none found, apply user startup file (only for editor runs) 3. If none found, apply projet startup file (this one)
---@field private DisplacementMapResolution FIntPoint @Resolution used when creating new distortion and undistortion displacement maps
---@field private CalibrationInputTolerance number @Tolerance to use when adding or accessing data in a calibrated LensFile
---@field private CheckerboardDetectionTimeout number @Length of time (in seconds) the calibration tool will wait when attempting to detect a checkerboard pattern in the media image
---@field private DefaultUndistortionDisplacementMaterials TMap<TSubclassOf<ULensDistortionModelHandlerBase>, TSoftObjectPtr<UMaterialInterface>> @Map of Lens Distortion Model Handler classes to the default displacement map material used by that class
---@field private DefaultDistortionDisplacementMaterials TMap<TSubclassOf<ULensDistortionModelHandlerBase>, TSoftObjectPtr<UMaterialInterface>> @Map of Lens Distortion Model Handler classes to the default displacement map material used by that class
---@field private DefaultDistortionMaterials TMap<TSubclassOf<ULensDistortionModelHandlerBase>, TSoftObjectPtr<UMaterialInterface>> @Map of Lens Distortion Model Handler classes to the default lens distortion post-process material used by that class
---@field private CalibrationOverlayMaterialOverrides TMap<string, TSoftObjectPtr<UMaterialInterface>> @Map of overlay names to override overlay materials
---@field private bEnableCalibrationDatasetImportExport boolean @Setting to toggle the calibration dataset import and export features
local UCameraCalibrationSettings = {}

