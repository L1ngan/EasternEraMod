---Camera Calibration subsystem
---@class UCameraCalibrationSubsystem : UEngineSubsystem
---@field private DefaultLensFile ULensFile @Default lens file to use when no override has been provided
---@field private LensModelMap TMap<string, TSubclassOf<ULensModel>> @Map of model names to ULensModel subclasses
---@field private CameraNodalOffsetAlgosMap TMap<string, TSubclassOf<UCameraNodalOffsetAlgo>> @Holds the registered camera nodal offset algos
---@field private CameraImageCenterAlgosMap TMap<string, TSubclassOf<UCameraImageCenterAlgo>> @Holds the registered camera image center algos
---@field private CameraCalibrationStepsMap TMap<string, TSubclassOf<UCameraCalibrationStep>> @Holds the registered camera calibration steps
local UCameraCalibrationSubsystem = {}

---@param Component UCineCameraComponent
---@param Handler ULensDistortionModelHandlerBase
function UCameraCalibrationSubsystem:UnregisterDistortionModelHandler(Component, Handler) end

---Get the default lens file.
---@param NewDefaultLensFile ULensFile
function UCameraCalibrationSubsystem:SetDefaultLensFile(NewDefaultLensFile) end

---Return the ULensModel subclass that was registered with the input model name
---@param ModelName string
---@return TSubclassOf_ULensModel_
function UCameraCalibrationSubsystem:GetRegisteredLensModel(ModelName) end

---Returns a list of all overlays known to the subsystem
---This includes the default overlays listed in the camera calibration settings
---as well as any of overlays that have been registered with this subsystem
---@return TArray_string_
function UCameraCalibrationSubsystem:GetOverlayMaterialNames() end

---Returns the overlay material associated with the input overlay name
---@param OverlayName string
---@return UMaterialInterface
function UCameraCalibrationSubsystem:GetOverlayMaterial(OverlayName) end

---Facilitator around the picker to get the desired lens file.
---@param Picker FLensFilePicker
---@return ULensFile
function UCameraCalibrationSubsystem:GetLensFile(Picker) end

---@param Component UCineCameraComponent
---@return TArray_ULensDistortionModelHandlerBase_
function UCameraCalibrationSubsystem:GetDistortionModelHandlers(Component) end

---Get the default lens file.
---@return ULensFile
function UCameraCalibrationSubsystem:GetDefaultLensFile() end

---Returns an array with the names of the available nodal offset algorithms
---@return TArray_string_
function UCameraCalibrationSubsystem:GetCameraNodalOffsetAlgos() end

---Returns the nodal offset algorithm by name
---@param Name string
---@return TSubclassOf_UCameraNodalOffsetAlgo_
function UCameraCalibrationSubsystem:GetCameraNodalOffsetAlgo(Name) end

---Returns an array with the names of the available image center algorithms
---@return TArray_string_
function UCameraCalibrationSubsystem:GetCameraImageCenterAlgos() end

---Returns the image center algorithm by name
---@param Name string
---@return TSubclassOf_UCameraImageCenterAlgo_
function UCameraCalibrationSubsystem:GetCameraImageCenterAlgo(Name) end

---Returns an array with the names of the available camera calibration steps
---@return TArray_string_
function UCameraCalibrationSubsystem:GetCameraCalibrationSteps() end

---Returns the camera calibration step by name
---@param Name string
---@return TSubclassOf_UCameraCalibrationStep_
function UCameraCalibrationSubsystem:GetCameraCalibrationStep(Name) end

---@param DistortionHandlerPicker FDistortionHandlerPicker @[out] 
---@param LensModelClass TSubclassOf_ULensModel_
---@return ULensDistortionModelHandlerBase
function UCameraCalibrationSubsystem:FindOrCreateDistortionModelHandler(DistortionHandlerPicker, LensModelClass) end

---@param DistortionHandlerPicker FDistortionHandlerPicker @[out] 
---@param bUpdatePicker boolean @[opt] 
---@return ULensDistortionModelHandlerBase
function UCameraCalibrationSubsystem:FindDistortionModelHandler(DistortionHandlerPicker, bUpdatePicker) end

