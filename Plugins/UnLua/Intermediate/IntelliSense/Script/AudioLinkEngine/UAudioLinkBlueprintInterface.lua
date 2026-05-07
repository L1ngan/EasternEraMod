---@class UAudioLinkBlueprintInterface : UInterface
local UAudioLinkBlueprintInterface = {}

---Stop an audio component's sound, issue any delegates if needed
function UAudioLinkBlueprintInterface:StopLink() end

---@param NewSound USoundBase
function UAudioLinkBlueprintInterface:SetLinkSound(NewSound) end

---@param StartTime number @[opt] 
function UAudioLinkBlueprintInterface:PlayLink(StartTime) end

---@return boolean
function UAudioLinkBlueprintInterface:IsLinkPlaying() end

