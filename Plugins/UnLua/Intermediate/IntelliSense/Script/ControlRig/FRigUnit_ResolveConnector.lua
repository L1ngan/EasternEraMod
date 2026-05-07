---Returns the resolved item of the connector.
---@class FRigUnit_ResolveConnector : FRigUnit_RigModulesBase
---@field public Connector FRigElementKey @* The key of the connector to resolve
---@field public SkipSocket boolean @* If the connector is resolved to a socket the node * will return the socket's direct parent (skipping it).
---@field public Result FRigElementKey @* The resulting item the connector is resolved to
---@field public bIsConnected boolean @* Returns true if the connector is resolved to a target.
local FRigUnit_ResolveConnector = {}
