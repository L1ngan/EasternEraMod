---@class FOverriddenPropertyNodeID
---@field private Path string
---@field private Object UObject @NOTE: Not always valid can point to a destroyed or can be a stale ptr. Use with cautiousness        * This can happen during reinstantiation. It is only there for ptr comparison in the ==.        * There is no unique id kept between old and new when an object is reinstantiated, so we are keeping the ptr here.        * When it is a ptr of an archetype, there are some cases we do not patch it because we need it in the CPFUO.        * Check FOverriddenPropertySet::HandleObjectsReInstantiated special exception
local FOverriddenPropertyNodeID = {}
