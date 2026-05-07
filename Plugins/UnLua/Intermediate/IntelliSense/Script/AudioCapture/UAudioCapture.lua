---Class which opens up a handle to an audio capture device.
---Allows other objects to get audio buffers from the capture device.
---@class UAudioCapture : UAudioGenerator
local UAudioCapture = {}

---Stops capturing audio
function UAudioCapture:StopCapturingAudio() end

---Starts capturing audio
function UAudioCapture:StartCapturingAudio() end

---Returns true if capturing audio
---@return boolean
function UAudioCapture:IsCapturingAudio() end

---Returns the audio capture device info
---@param OutInfo FAudioCaptureDeviceInfo @[out] 
---@return boolean
function UAudioCapture:GetAudioCaptureDeviceInfo(OutInfo) end

