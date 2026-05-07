---Blueprint library for Media related functions.
---@class UMediaBlueprintFunctionLibrary : UBlueprintFunctionLibrary
local UMediaBlueprintFunctionLibrary = {}

---Enumerate available audio capture devices.
---To filter for a specific subset of devices, use the MakeBitmask node
---with EMediaWebcamCaptureDeviceFilter as the Bitmask Enum.
---@param OutDevices TArray_FMediaCaptureDevice_ @[out] 
---@param Filter integer @[opt] 
function UMediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices(OutDevices, Filter) end

---Enumerate available audio capture devices.
---To filter for a specific subset of devices, use the MakeBitmask node
---with EMediaVideoCaptureDeviceFilter as the Bitmask Enum.
---@param OutDevices TArray_FMediaCaptureDevice_ @[out] 
---@param Filter integer @[opt] 
function UMediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices(OutDevices, Filter) end

---Enumerate available audio capture devices.
---To filter for a specific subset of devices, use the MakeBitmask node
---with EMediaAudioCaptureDeviceFilter as the Bitmask Enum.
---@param OutDevices TArray_FMediaCaptureDevice_ @[out] 
---@param Filter integer @[opt] 
function UMediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices(OutDevices, Filter) end

