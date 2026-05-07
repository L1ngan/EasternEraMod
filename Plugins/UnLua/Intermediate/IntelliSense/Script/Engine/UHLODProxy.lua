---This asset acts as a proxy to a static mesh for ALODActors to display
---@class UHLODProxy : UObject
---@field private OwningMap TSoftObjectPtr<UWorld> @Keep hold of the level in the editor to allow for package cleaning etc.
---@field private ProxyMeshes TArray<FHLODProxyMesh> @All the mesh proxies we contain
---@field private HLODActors TMap<UHLODProxyDesc, FHLODProxyMesh>
local UHLODProxy = {}

