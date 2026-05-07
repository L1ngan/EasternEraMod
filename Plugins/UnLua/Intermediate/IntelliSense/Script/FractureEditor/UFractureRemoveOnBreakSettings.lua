---@class UFractureRemoveOnBreakSettings : UFractureToolSettings
---@field public Enabled boolean @whether or not the remove on fracture is enabled
---@field public PostBreakTimer FVector2f @Min/Max time after break before removal starts
---@field public ClusterCrumbling boolean @When set, clusters will crumble when post break timer expires, non clusters will simply use the removal timer
---@field public RemovalTimer FVector2f @Min/Max time for how long removal lasts - not applicable when cluster crumbling is on
local UFractureRemoveOnBreakSettings = {}

---remove the remove on break attribute from the geometry collection, usefull to save memory on the asset if not needed
function UFractureRemoveOnBreakSettings:DeleteRemoveOnBreakData() end

