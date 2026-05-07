---Struct used to configure which NetDriver is started with Iris enabled or not
---Only one attribute out of the NetDriverDefinition, NetDriverName or NetDriverWildcardName should be set along with the bEnableIris property
---@class FIrisNetDriverConfig
---@field public NetDriverDefinition string @Name of the net driver definition to configure e.g. GameNetDriver, BeaconNetDriver, etc.
---@field public NetDriverName string @Name of the named driver to configure. e.g. GameNetDriver, DemoNetDriver, etc.
---@field public NetDriverWildcardName string @Wildcard match the netdriver name to configure e.g. NetDriverWildcardName="UnitTestNetDriver*" matches with UnitTestNetDriver_1, UnitTestNetDriver_2, etc.
---@field public bCanUseIris boolean @Configurable property that decides if the NetDriver will use the Iris replication system or not if Iris is enabled
local FIrisNetDriverConfig = {}
