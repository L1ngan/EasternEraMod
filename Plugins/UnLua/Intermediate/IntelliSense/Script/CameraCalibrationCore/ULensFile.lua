---A Lens file containing calibration mapping from FIZ data
---@class ULensFile : UObject
---@field public LensInfo FLensInfo @Lens information
---@field public CameraFeedInfo FCameraFeedInfo @Camera feed information
---@field public SimulcamInfo FSimulcamInfo @Simulcam information
---@field public DataMode ELensDataMode @Type of data used for lens mapping
---@field public UserMetadata TMap<string, string> @Metadata user could enter for its lens
---@field public EncodersTable FEncodersTable @Encoder mapping table
---@field public DistortionTable FDistortionTable @Distortion parameters table mapping to input focus/zoom
---@field public FocalLengthTable FFocalLengthTable @Focal length table mapping to input focus/zoom
---@field public ImageCenterTable FImageCenterTable @Image center table mapping to input focus/zoom
---@field public NodalOffsetTable FNodalOffsetTable @Nodal offset table mapping to input focus/zoom
---@field public STMapTable FSTMapTable @STMap table mapping to input focus/zoom
---@field public AssetImportData UAssetImportData @Importing data and options used for importing ulens files.
---@field protected UndistortionDisplacementMapHolders TArray<UTextureRenderTarget2D> @Texture used to store temporary undistortion displacement map when using map blending
---@field protected DistortionDisplacementMapHolders TArray<UTextureRenderTarget2D> @Texture used to store temporary distortion displacement map when using map blending
local ULensFile = {}

---Removes a zoom point
---@param InDataCategory ELensDataCategory
---@param InFocus number
---@param InZoom number
function ULensFile:RemoveZoomPoint(InDataCategory, InFocus, InZoom) end

---Removes a focus point
---@param InDataCategory ELensDataCategory
---@param InFocus number
function ULensFile:RemoveFocusPoint(InDataCategory, InFocus) end

---Merges the contents of one focus point into another focus point
---@param InDataCategory ELensDataCategory
---@param InSrcFocus number
---@param InDestFocus number
---@param bReplaceExistingZoomPoints boolean
function ULensFile:MergeFocusPoint(InDataCategory, InSrcFocus, InDestFocus, bReplaceExistingZoomPoints) end

---Removes a zoom point
---@param InDataCategory ELensDataCategory
---@param InFocus number
---@param InZoom number
---@return boolean
function ULensFile:HasZoomPoint(InDataCategory, InFocus, InZoom) end

---Returns whether a category has data samples
---@param InDataCategory ELensDataCategory
---@return boolean
function ULensFile:HasSamples(InDataCategory) end

---Whether iris encoder mapping is configured
---@return boolean
function ULensFile:HasIrisEncoderMapping() end

---Checks to see if there is a focal point for the specified focus in the data category
---@param InDataCategory ELensDataCategory
---@param InFocus number
---@return boolean
function ULensFile:HasFocusPoint(InDataCategory, InFocus) end

---Whether focus encoder mapping is configured
---@return boolean
function ULensFile:HasFocusEncoderMapping() end

---Returns total number of the points for given category
---@param InDataCategory ELensDataCategory
---@return integer
function ULensFile:GetTotalPointNum(InDataCategory) end

---Gets all ST Map points struct with focus, zoom and info
---@return TArray_FSTMapPointInfo_
function ULensFile:GetSTMapPoints() end

---Gets a ST Map point by given focus and zoom, if point does not exists returns false
---@param InFocus number
---@param InZoom number
---@param OutSTMapInfo FSTMapInfo @[out] 
---@return boolean
function ULensFile:GetSTMapPoint(InFocus, InZoom, OutSTMapInfo) end

---Gets all Nodal Offset points struct with focus, zoom and info
---@return TArray_FNodalOffsetPointInfo_
function ULensFile:GetNodalOffsetPoints() end

---Gets a Nodal Offset point by given focus and zoom, if point does not exists returns false
---@param InFocus number
---@param InZoom number
---@param OutNodalPointOffset FNodalPointOffset @[out] 
---@return boolean
function ULensFile:GetNodalOffsetPoint(InFocus, InZoom, OutNodalPointOffset) end

---Gets all Image Center points struct with focus, zoom and info
---@return TArray_FImageCenterPointInfo_
function ULensFile:GetImageCenterPoints() end

---Gets a Image Center point by given focus and zoom, if point does not exists returns false
---@param InFocus number
---@param InZoom number
---@param OutImageCenterInfo FImageCenterInfo @[out] 
---@return boolean
function ULensFile:GetImageCenterPoint(InFocus, InZoom, OutImageCenterInfo) end

---Gets all Focal Length points struct with focus, zoom and info
---@return TArray_FFocalLengthPointInfo_
function ULensFile:GetFocalLengthPoints() end

---Gets a Focal Length point by given focus and zoom, if point does not exists returns false
---@param InFocus number
---@param InZoom number
---@param OutFocalLengthInfo FFocalLengthInfo @[out] 
---@return boolean
function ULensFile:GetFocalLengthPoint(InFocus, InZoom, OutFocalLengthInfo) end

---Gets all Distortion points struct with focus, zoom and info
---@return TArray_FDistortionPointInfo_
function ULensFile:GetDistortionPoints() end

---Gets a Distortion point by given focus and zoom, if point does not exists returns false
---@param InFocus number
---@param InZoom number
---@param OutDistortionInfo FDistortionInfo @[out] 
---@return boolean
function ULensFile:GetDistortionPoint(InFocus, InZoom, OutDistortionInfo) end

---Returns interpolated iris based on input normalized value and mapping
---@param InNormalizedValue number
---@return number
function ULensFile:EvaluateNormalizedIris(InNormalizedValue) end

---Returns interpolated focus based on input normalized value and mapping
---@param InNormalizedValue number
---@return number
function ULensFile:EvaluateNormalizedFocus(InNormalizedValue) end

---Returns interpolated nodal point offset based on input focus and zoom
---@param InFocus number
---@param InZoom number
---@param OutEvaluatedValue FNodalPointOffset @[out] 
---@return boolean
function ULensFile:EvaluateNodalPointOffset(InFocus, InZoom, OutEvaluatedValue) end

---Returns interpolated image center parameters based on input focus and zoom
---@param InFocus number
---@param InZoom number
---@param OutEvaluatedValue FImageCenterInfo @[out] 
---@return boolean
function ULensFile:EvaluateImageCenterParameters(InFocus, InZoom, OutEvaluatedValue) end

---Returns interpolated focal length
---@param InFocus number
---@param InZoom number
---@param OutEvaluatedValue FFocalLengthInfo @[out] 
---@return boolean
function ULensFile:EvaluateFocalLength(InFocus, InZoom, OutEvaluatedValue) end

---Returns interpolated distortion parameters
---@param InFocus number
---@param InZoom number
---@param OutEvaluatedValue FDistortionInfo @[out] 
---@return boolean
function ULensFile:EvaluateDistortionParameters(InFocus, InZoom, OutEvaluatedValue) end

---Draws the distortion map based on evaluation point
---@param InFocus number
---@param InZoom number
---@param InFilmback FVector2D
---@param InLensHandler ULensDistortionModelHandlerBase
---@return boolean
function ULensFile:EvaluateDistortionData(InFocus, InZoom, InFilmback, InLensHandler) end

---Removes table associated to data category
---@param InDataCategory ELensDataCategory
function ULensFile:ClearData(InDataCategory) end

---Removes all points of all tables
function ULensFile:ClearAll() end

---Changes the value of a zoom point
---@param InDataCategory ELensDataCategory
---@param InFocus number
---@param InExistingZoom number
---@param InNewZoom number
function ULensFile:ChangeZoomPoint(InDataCategory, InFocus, InExistingZoom, InNewZoom) end

---Changes the value of a focus point
---@param InDataCategory ELensDataCategory
---@param InExistingFocus number
---@param InNewFocus number
function ULensFile:ChangeFocusPoint(InDataCategory, InExistingFocus, InNewFocus) end

---Adds an STMap point in our map. If a point already exist at the location, it is updated
---@param NewFocus number
---@param NewZoom number
---@param NewPoint FSTMapInfo
function ULensFile:AddSTMapPoint(NewFocus, NewZoom, NewPoint) end

---Adds an NodalOffset point in our map. If a point already exist at the location, it is updated
---@param NewFocus number
---@param NewZoom number
---@param NewPoint FNodalPointOffset
function ULensFile:AddNodalOffsetPoint(NewFocus, NewZoom, NewPoint) end

---Adds an ImageCenter point in our map. If a point already exist at the location, it is updated
---@param NewFocus number
---@param NewZoom number
---@param NewPoint FImageCenterInfo
function ULensFile:AddImageCenterPoint(NewFocus, NewZoom, NewPoint) end

---Adds a focal length point in our map. If a point already exist at the location, it is updated
---@param NewFocus number
---@param NewZoom number
---@param NewFocalLength FFocalLengthInfo
function ULensFile:AddFocalLengthPoint(NewFocus, NewZoom, NewFocalLength) end

---Adds a distortion point in our map. If a point already exist at the location, it is updated
---@param NewFocus number
---@param NewZoom number
---@param NewPoint FDistortionInfo
---@param NewFocalLength FFocalLengthInfo
function ULensFile:AddDistortionPoint(NewFocus, NewZoom, NewPoint, NewFocalLength) end

