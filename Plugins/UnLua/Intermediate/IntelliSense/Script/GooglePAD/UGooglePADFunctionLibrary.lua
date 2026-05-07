---@class UGooglePADFunctionLibrary : UBlueprintFunctionLibrary
local UGooglePADFunctionLibrary = {}

---Show confirmation dialog to start all asset pack downloads in either REQUIRES_USER_CONFIRMATION or WAITING_FOR_WIFI state.
---@return EGooglePADErrorCode
function UGooglePADFunctionLibrary.ShowConfirmationDialog() end

---Show confirmation dialog requesting data download over cellular network (DEPRECIATED)
---@return EGooglePADErrorCode
function UGooglePADFunctionLibrary.ShowCellularDataConfirmation() end

---Request removal of an asset pack
---@param Name string
---@return EGooglePADErrorCode
function UGooglePADFunctionLibrary.RequestRemoval(Name) end

---Request information about a set of asset packs
---@param AssetPacks TArray_string_
---@return EGooglePADErrorCode
function UGooglePADFunctionLibrary.RequestInfo(AssetPacks) end

---Request download of a set of asset packs
---@param AssetPacks TArray_string_
---@return EGooglePADErrorCode
function UGooglePADFunctionLibrary.RequestDownload(AssetPacks) end

---Release download state resources
---@param State integer
function UGooglePADFunctionLibrary.ReleaseDownloadState(State) end

---Release location resources
---@param Location integer
function UGooglePADFunctionLibrary.ReleaseAssetPackLocation(Location) end

---Get the total number of bytes to download from a download state
---@param State integer
---@return integer
function UGooglePADFunctionLibrary.GetTotalBytesToDownload(State) end

---Get storage method from location
---@param Location integer
---@return EGooglePADStorageMethod
function UGooglePADFunctionLibrary.GetStorageMethod(Location) end

---Gets the status of confirmation dialog requests
---@param Status EGooglePADConfirmationDialogStatus @[out] 
---@return EGooglePADErrorCode
function UGooglePADFunctionLibrary.GetShowConfirmationDialogStatus(Status) end

---Get status of cellular confirmation dialog (DEPRECIATED)
---@param Status EGooglePADCellularDataConfirmStatus @[out] 
---@return EGooglePADErrorCode
function UGooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus(Status) end

---Get download status from a download state
---@param State integer
---@return EGooglePADDownloadStatus
function UGooglePADFunctionLibrary.GetDownloadStatus(State) end

---Get download state handle of an asset pack (release when done)
---@param Name string
---@param State integer @[out] 
---@return EGooglePADErrorCode
function UGooglePADFunctionLibrary.GetDownloadState(Name, State) end

---Get the number of bytes downloaded from a download state
---@param State integer
---@return integer
function UGooglePADFunctionLibrary.GetBytesDownloaded(State) end

---Get asset path from from location
---@param Location integer
---@return string
function UGooglePADFunctionLibrary.GetAssetsPath(Location) end

---Get location handle of requested asset pack (release when done)
---@param Name string
---@param Location integer @[out] 
---@return EGooglePADErrorCode
function UGooglePADFunctionLibrary.GetAssetPackLocation(Name, Location) end

---Cancel download of a set of asset packs
---@param AssetPacks TArray_string_
---@return EGooglePADErrorCode
function UGooglePADFunctionLibrary.CancelDownload(AssetPacks) end

