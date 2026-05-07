---FAITestSpawnSetBase
---Base struct defining an AI Test Spawn Set that are used in AFunctionalAITestBase tests.
---@class FAITestSpawnSetBase
---@field public Name string @give the set a name to help identify it if need be
---@field public bEnabled boolean
---@field public FallbackSpawnLocation AActor @location used for spawning if spawn info doesn't define one
local FAITestSpawnSetBase = {}
