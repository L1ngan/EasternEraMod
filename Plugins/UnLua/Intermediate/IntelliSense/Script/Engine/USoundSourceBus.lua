---A source bus is a type of USoundBase and can be "played" like any sound.
---@class USoundSourceBus : USoundWave
---@field public SourceBusChannels ESourceBusChannels @How many channels to use for the source bus if the audio bus is not specified, otherwise it will use the audio bus object's channel count.
---@field public SourceBusDuration number @The duration (in seconds) to use for the source bus. A duration of 0.0 indicates to play the source bus indefinitely.
---@field public AudioBus UAudioBus @Audio bus to use as audio for this source bus. This source bus will sonify the audio from the audio bus.
---@field public bAutoDeactivateWhenSilent boolean @Stop the source bus when the volume goes to zero.
local USoundSourceBus = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USoundSourceBus:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function USoundSourceBus:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USoundSourceBus:AddAssetUserDataOfClass(InUserDataClass) end

