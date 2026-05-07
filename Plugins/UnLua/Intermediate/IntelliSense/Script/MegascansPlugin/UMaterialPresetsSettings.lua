---@class UMaterialPresetsSettings : UObject
---@field public MasterMaterial3d TLazyObjectPtr<UMaterial> @Replace default master material with your own custom master material for all 3D assets. Default material is used if field is left empty.
---@field public MasterMaterialSurface TLazyObjectPtr<UMaterial> @Replace default master material with your own custom master material for all Surfaces. Default material is used if field is left empty.
---@field public MasterMaterialPlant TLazyObjectPtr<UMaterial> @Replace default master material with your own custom master material for all 3D Plants. Default material is used if field is left empty.
local UMaterialPresetsSettings = {}

