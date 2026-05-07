---@class UVOIPTalker : UActorComponent
---@field public Settings FVoiceSettings @Configurable settings for this player's voice. When set, this will update the next time the player speaks.
local UVOIPTalker = {}

---This function sets up this talker with a specific player.
---It is necessary to use this to properly control a specific player's voice
---and receive events.
---@param OwningState APlayerState
function UVOIPTalker:RegisterWithPlayerState(OwningState) end

---Get the current level of how loud this player is speaking. Will return 0.0
---if player is not talking.
---@return number
function UVOIPTalker:GetVoiceLevel() end

---function for creating and registering a UVOIPTalker.
---@param OwningState APlayerState
---@return UVOIPTalker
function UVOIPTalker.CreateTalkerForPlayer(OwningState) end

---Blueprint native event for when this player stops speaking.
function UVOIPTalker:BPOnTalkingEnd() end

---Blueprint native event for when this player starts speaking.
---@param AudioComponent UAudioComponent
function UVOIPTalker:BPOnTalkingBegin(AudioComponent) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UVOIPTalker:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UVOIPTalker:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UVOIPTalker:AddAssetUserDataOfClass(InUserDataClass) end

