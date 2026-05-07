---Settings for the Fracture Editor Mode.
---@class UFractureModeSettings : UDeveloperSettings
---@field public NewAssetLocation EFractureModeNewAssetLocation @The default asset folder presented when using the "New" tool to create a Geometry Collection in Fracture Mode
---@field public ConvexCanExceedFraction number @Default fraction of geometry volume by which a cluster's convex hull volume can exceed the actual geometry volume before instead using the hulls of the children.  0 means the convex volume cannot exceed the geometry volume; 1 means the convex volume is allowed to be 100% larger (2x) the geometry volume.
---@field public ConvexSimplificationDistanceThreshold number @Default simplification threshold for convex hulls of new geometry collections
---@field public ConvexRemoveOverlaps EConvexOverlapRemoval @Default overlap removal setting for convex hulls of new geometry collections
---@field public ConvexOverlapRemovalShrinkPercent number @Default overlap removal shrink percent (in range 0-100) for convex hulls of new geometry collections. Overlap removal will be computed assuming convex shapes will be scaled down by this percentage.
---@field public ConvexFractionAllowRemove number @Default fraction of convex hulls for a transform that we can remove before using the hulls of the children
---@field public ProximityMethod EProximityMethod @Default method used to detect proximity of geometry in a new geometry collection
---@field public ProximityDistanceThreshold number @When Proximity Detection Method is Convex Hull, how close two hulls need to be to be considered as 'in proximity'
---@field public bProximityUseAsConnectionGraph boolean @Whether to automatically transform the proximity graph into a connection graph to be used for simulation
---@field public ProximityConnectionContactAreaMethod EConnectionContactMethod @Method to use to determine the area of the contact for transforms that are connected in the connection graph used for simulation. Only used if "Use As Connection Graph" is enabled.
---@field public ProximityContactMethod EProximityContactMethod @Method to use to determine the contact between two pieces, if the Contact Threshold is greater than 0, for the purpose of filtering out too-small contacts
---@field public ProximityContactThreshold number @If greater than zero, proximity will be additionally filtered by a 'contact' threshold, in cm, to exclude grazing / corner proximity
local UFractureModeSettings = {}

