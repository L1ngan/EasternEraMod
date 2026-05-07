---Switch Actor allows quickly toggling the visibility of its child actors so that
---only one is visible at a time. It can also be captured with the Variant Manager
---to expose this capability as a property capture
---@class ASwitchActor : AActor
---@field private SceneComponent USceneComponent @Exposing our root component like this allows manual Mobility control on the details panel
---@field private LastSelectedOption integer
local ASwitchActor = {}

---Select one of the available options by index
---@param OptionIndex integer
function ASwitchActor:SelectOption(OptionIndex) end

---If we have exactly one child actor visible, it will return a pointer to it. Returns nullptr otherwise
---@return integer
function ASwitchActor:GetSelectedOption() end

---Returns the child actors that are available options, in a fixed order that may differ from the one displayed in the world outliner
---@return TArray_AActor_
function ASwitchActor:GetOptions() end

