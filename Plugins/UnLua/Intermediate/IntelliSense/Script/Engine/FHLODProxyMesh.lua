---A mesh proxy entry
---@class FHLODProxyMesh
---@field private LODActor TLazyObjectPtr<ALODActor> @The ALODActor that we were generated from
---@field private StaticMesh UStaticMesh @The mesh used to display this proxy
---@field private Key string @The key generated from an ALODActor. If this differs from that generated from the ALODActor, then the mesh needs regenerating.
local FHLODProxyMesh = {}
