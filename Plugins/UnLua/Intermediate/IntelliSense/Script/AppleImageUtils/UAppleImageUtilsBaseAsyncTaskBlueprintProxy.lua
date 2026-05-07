---@class UAppleImageUtilsBaseAsyncTaskBlueprintProxy : UObject
---@field public OnSuccess MulticastDelegate
---@field public OnFailure MulticastDelegate
---@field public ConversionResult FAppleImageUtilsImageConversionResult
local UAppleImageUtilsBaseAsyncTaskBlueprintProxy = {}

---Converts a image to an array of TIFF data in a background task
---@param SourceImage UTexture
---@param bWantColor boolean @[opt] 
---@param bUseGpu boolean @[opt] 
---@param Scale number @[opt] 
---@param Rotate ETextureRotationDirection @[opt] 
---@return UAppleImageUtilsBaseAsyncTaskBlueprintProxy
function UAppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF(SourceImage, bWantColor, bUseGpu, Scale, Rotate) end

---Converts a image to an array of TIFF data in a background task
---@param SourceImage UTexture
---@param bWantColor boolean @[opt] 
---@param bUseGpu boolean @[opt] 
---@param Scale number @[opt] 
---@param Rotate ETextureRotationDirection @[opt] 
---@return UAppleImageUtilsBaseAsyncTaskBlueprintProxy
function UAppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToPNG(SourceImage, bWantColor, bUseGpu, Scale, Rotate) end

---Converts a image to an array of JPEG data in a background task
---@param SourceImage UTexture
---@param Quality integer @[opt] 
---@param bWantColor boolean @[opt] 
---@param bUseGpu boolean @[opt] 
---@param Scale number @[opt] 
---@param Rotate ETextureRotationDirection @[opt] 
---@return UAppleImageUtilsBaseAsyncTaskBlueprintProxy
function UAppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToJPEG(SourceImage, Quality, bWantColor, bUseGpu, Scale, Rotate) end

---Converts a image to an array of HEIF data in a background task
---@param SourceImage UTexture
---@param Quality integer @[opt] 
---@param bWantColor boolean @[opt] 
---@param bUseGpu boolean @[opt] 
---@param Scale number @[opt] 
---@param Rotate ETextureRotationDirection @[opt] 
---@return UAppleImageUtilsBaseAsyncTaskBlueprintProxy
function UAppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToHEIF(SourceImage, Quality, bWantColor, bUseGpu, Scale, Rotate) end

