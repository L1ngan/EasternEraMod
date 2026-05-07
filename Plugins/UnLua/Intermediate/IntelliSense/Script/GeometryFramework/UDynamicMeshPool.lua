---UDynamicMeshPool manages a Pool of UDynamicMesh objects. This allows
---the meshes to be re-used instead of being garbage-collected. This
---is intended to be used by Blueprints that need to do procedural geometry
---operations that generate temporary meshes, as these will commonly run their
---construction scripts many times as the user (eg) manipulates parameters,
---and constantly spawning new UDynamicMesh instances will result in enormous
---memory usage hanging around until GC runs.
---Usage is to call RequestMesh() to take ownership of an available UDynamicMesh (which
---will allocate a new one if the pool is empty) and ReturnMesh() to return it to the pool.
---ReturnAllMeshes() can be called to return all allocated meshes.
---In both cases, there is nothing preventing you from still holding on to the mesh.
---So, be careful.
---FreeAllMeshes() calls ReturnAllMeshes() and then releases the pool's references to
---the allocated meshes, so they can be Garbage Collected
---If you Request() more meshes than you Return(), the Pool will still be holding on to
---references to those meshes, and they will never be Garbage Collected (ie memory leak).
---As a failsafe, if the number of allocated meshes exceeds geometry.DynamicMesh.MaxPoolSize,
---the Pool will release all it's references and run garbage collection on the next call to RequestMesh().
---(Do not rely on this as a memory management strategy)
---An alternate strategy that could be employed here is for the Pool to not hold
---references to meshes it has provided, only those that have been explicitly returned.
---Then non-returned meshes would simply be garbage-collected, however it allows
---potentially a large amount of memory to be consumed until that occurs.
---UDynamicMesh::Reset() is called on the object returned to the Pool, which clears
---the internal FDynamicMesh3 (which uses normal C++ memory management, so no garbage collection involved)
---So the Pool does not re-use mesh memory, only the UObject containers.
---@class UDynamicMeshPool : UObject
---@field protected CachedMeshes TArray<UDynamicMesh> @Meshes in the pool that are available
---@field protected AllCreatedMeshes TArray<UDynamicMesh> @All meshes the pool has allocated
local UDynamicMeshPool = {}

---Release a UDynamicMesh returned by RequestMesh() back to the pool
---@param Mesh UDynamicMesh
function UDynamicMeshPool:ReturnMesh(Mesh) end

---Release all GeneratedMeshes back to the pool
function UDynamicMeshPool:ReturnAllMeshes() end

---
---@return UDynamicMesh
function UDynamicMeshPool:RequestMesh() end

---Release all GeneratedMeshes back to the pool and allow them to be garbage collected
function UDynamicMeshPool:FreeAllMeshes() end

