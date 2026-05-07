---@class UFoliageType_InstancedStaticMesh : UFoliageType
---@field public Mesh UStaticMesh
---@field public OverrideMaterials TArray<UMaterialInterface> @Material overrides for foliage instances.
---@field public NaniteOverrideMaterials TArray<UMaterialInterface> @Nanite material overrides for foliage instances.
---@field public ComponentClass TSubclassOf<UFoliageInstancedStaticMeshComponent> @The component class to use for foliage instances. You can make a Blueprint subclass of FoliageInstancedStaticMeshComponent to implement custom behavior and assign that class here.
local UFoliageType_InstancedStaticMesh = {}

