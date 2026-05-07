---* There should be one of these Ids generated and stored per Actor or Component that inherits from INavLinkCustomInterface. Primarily
---* its a way of differentiating between Components that inherit from INavLinkCustomInterface as the ActorInstanceGuid
---* alone can not do this.See UNavLinkCustomComponent as an example. For Level Instances these will be different for each component in an actor but repeated
---* in repeated Level Instances.FNavLinkId::GenerateUniqueId() uses this to make the UniqueId
---@class FNavLinkAuxiliaryId
---@field private Id integer
local FNavLinkAuxiliaryId = {}
