---Movie scene animation embedded within an actor.
---@class UActorSequenceComponent : UActorComponent
---@field protected PlaybackSettings FMovieSceneSequencePlaybackSettings
---@field protected Sequence UActorSequence @Embedded actor sequence data
---@field protected SequencePlayer UActorSequencePlayer
local UActorSequenceComponent = {}

---Calls the Stop function on the SequencePlayer if its valid.
function UActorSequenceComponent:StopSequence() end

---Calls the Play function on the SequencePlayer if its valid.
function UActorSequenceComponent:PlaySequence() end

---Calls the Pause function on the SequencePlayer if its valid.
function UActorSequenceComponent:PauseSequence() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UActorSequenceComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UActorSequenceComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UActorSequenceComponent:AddAssetUserDataOfClass(InUserDataClass) end

