---ADynamicMeshActor is an Actor that has a USimpleDynamicMeshComponent as it's RootObject.
---@class ADynamicMeshActor : AActor
---@field protected DynamicMeshComponent UDynamicMeshComponent
---@field public bEnableComputeMeshPool boolean @Control whether the DynamicMeshPool will be created when requested via GetComputeMeshPool()
---@field protected DynamicMeshPool UDynamicMeshPool @The internal Mesh Pool, for use in DynamicMeshActor BPs. Use GetComputeMeshPool() to access this, as it will only be created on-demand if bEnableComputeMeshPool = true
local ADynamicMeshActor = {}

---Release a compute mesh back to the Pool
---@param Mesh UDynamicMesh
---@return boolean
function ADynamicMeshActor:ReleaseComputeMesh(Mesh) end

---Release all compute meshes that the Pool has allocated
function ADynamicMeshActor:ReleaseAllComputeMeshes() end

---@return UDynamicMeshComponent
function ADynamicMeshActor:GetDynamicMeshComponent() end

---Access the compute mesh pool
---@return UDynamicMeshPool
function ADynamicMeshActor:GetComputeMeshPool() end

---Release all compute meshes that the Pool has allocated, and then release them from the Pool, so that they will be garbage-collected
function ADynamicMeshActor:FreeAllComputeMeshes() end

---Request a compute mesh from the Pool, which will return a previously-allocated mesh or add and return a new one. If the Pool is disabled, a new UDynamicMesh will be allocated and returned.
---@return UDynamicMesh
function ADynamicMeshActor:AllocateComputeMesh() end

