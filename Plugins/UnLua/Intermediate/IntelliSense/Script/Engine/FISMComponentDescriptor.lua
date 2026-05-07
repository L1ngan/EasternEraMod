---@class FISMComponentDescriptor : FISMComponentDescriptorBase
---@field public StaticMesh UStaticMesh
---@field public OverrideMaterials TArray<UMaterialInterface>
---@field public OverlayMaterial UMaterialInterface
---@field public RuntimeVirtualTextures TArray<URuntimeVirtualTexture>
---@field public LocalTransform FTransform
---@field private StaticMeshComponent TWeakObjectPtr<UStaticMeshComponent>
local FISMComponentDescriptor = {}
