---@class UFractureClusterCutterSettings : UFractureToolSettings
---@field public NumberClustersMin integer @Minimum number of clusters of Voronoi sites to create. The amount of clusters created will be chosen at random between Min and Max
---@field public NumberClustersMax integer @Maximum number of clusters of Voronoi sites to create. The amount of clusters created will be chosen at random between Min and Max
---@field public SitesPerClusterMin integer @Minimum number of Voronoi sites per cluster. The amount of sites in each cluster will be chosen at random between Min and Max
---@field public SitesPerClusterMax integer @Maximum number of Voronoi sites per cluster. The amount of sites in each cluster will be chosen at random between Min and Max
---@field public ClusterRadiusFractionMin number @Minimum cluster radius (as fraction of the overall Voronoi diagram size). Cluster Radius Offset will be added to this Each Voronoi site will be placed at least this far (plus the Cluster Radius Offset) from its cluster center
---@field public ClusterRadiusFractionMax number @Maximum cluster radius (as fraction of the overall Voronoi diagram size). Cluster Radius Offset will be added to this Each Voronoi site will be placed at most this far (plus the Cluster Radius Offset) from its cluster center
---@field public ClusterRadiusOffset number @Cluster radius offset (in cm). This offset will be added to the 'Min/Max Dist from Center' distance
local UFractureClusterCutterSettings = {}

