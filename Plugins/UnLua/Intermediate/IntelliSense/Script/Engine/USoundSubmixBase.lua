---@class USoundSubmixBase : UObject
---@field public bAutoDisable boolean @Auto-manage enabling and disabling the submix as a CPU optimization. It will be disabled if the submix and all child submixes are silent. It will re-enable if a sound is sent to the submix or a child submix is audible.
---@field public AutoDisableTime number @The minimum amount of time to wait before automatically disabling a submix if it is silent. Will immediately re-enable if source audio is sent to it.
---@field public ChildSubmixes TArray<USoundSubmixBase> @Child submixes to this sound mix
---@field public DynamicChildSubmixes TMap<integer, FDynamicChildSubmix> @Dynamic Child submixes (Map of AudioDevice -> [Submix] )
local USoundSubmixBase = {}

---Searching upwards from this Submix to the root looking for the first Submix marked Dynamic
---If this Submix is Dynamic this will be returned.
---@return USoundSubmixBase
function USoundSubmixBase:FindDynamicAncestor() end

---Dynamically Disconnect from a parent.
---@param WorldContextObject UObject
---@return boolean
function USoundSubmixBase:DynamicDisconnect(WorldContextObject) end

---Dynamically Connects to a parent submix.
---@param WorldContextObject UObject
---@param InParent USoundSubmixBase
---@return boolean
function USoundSubmixBase:DynamicConnect(WorldContextObject, InParent) end

