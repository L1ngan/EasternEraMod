---Settings controlling how proximity is detected for geometry collections
---@class UFractureProximitySettings : UFractureToolSettings
---@field public Method EProximityMethod @Which method to use to decide whether a given piece of geometry is in proximity with another
---@field public DistanceThreshold number @If hull-based proximity detection is enabled, amount to expand hulls when searching for overlapping neighbors
---@field public ContactMethod EProximityContactMethod @Method to use to determine the contact between two pieces, if the Contact Threshold is greater than 0
---@field public ContactThreshold number @If greater than zero, proximity will be additionally filtered by a 'contact' threshold, in cm, to exclude grazing / corner proximity
---@field public bUseAsConnectionGraph boolean @Whether to automatically transform the proximity graph into a connection graph to be used for simulation
---@field public ContactAreaMethod EConnectionContactMethod @Method to use for determining contact areas that define the strength of connections for destruction simulation
---@field public bShowProximity boolean @Whether to display the proximity graph edges
---@field public bOnlyShowForSelected boolean @Whether to only show the proximity graph connections for selected bones
---@field public LineThickness number @Line thickness for connections
---@field public LineColor FColor @Line color for connections
---@field public CenterSize number @Point size for centers
---@field public CenterColor FColor @Point color for centers
local UFractureProximitySettings = {}

