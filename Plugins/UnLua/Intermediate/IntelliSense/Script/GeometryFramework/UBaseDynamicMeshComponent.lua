---UBaseDynamicMeshComponent is a base interface for a UMeshComponent based on a UDynamicMesh.
---@class UBaseDynamicMeshComponent : UMeshComponent
---@field public bExplicitShowWireframe boolean @If true, render the Wireframe on top of the Shaded Mesh
---@field public WireframeColor FLinearColor @Constant Color used when Override Color Mode is set to Constant
---@field public ColorMode EDynamicMeshComponentColorOverrideMode
---@field public ConstantColor FColor @Constant Color used when Override Color Mode is set to Constant
---@field public ColorSpaceMode EDynamicMeshVertexColorTransformMode @Color Space Transform that will be applied to the colors stored in the DynamicMesh Attribute Color Overlay when constructing render buffers. Default is "No Transform", ie color R/G/B/A will be independently converted from 32-bit float to 8-bit by direct mapping. LinearToSRGB mode will apply SRGB conversion, ie assumes colors in the Mesh are in Linear space. This will produce the same behavior as UStaticMesh. SRGBToLinear mode will invert SRGB conversion, ie assumes colors in the Mesh are in SRGB space.
---@field public bEnableFlatShading boolean @Enable use of per-triangle facet normals in place of mesh normals
---@field public bEnableViewModeOverrides boolean @This flag controls whether Editor View Mode Overrides are enabled for this mesh. For example, this controls hidden-line removal on the wireframe in Wireframe View Mode, and whether the normal map will be disabled in Lighting-Only View Mode, as well as various other things. Use SetViewModeOverridesEnabled() to control this setting in Blueprints/C++.
---@field protected OverrideRenderMaterial UMaterialInterface
---@field protected SecondaryRenderMaterial UMaterialInterface
---@field protected WireframeMaterialOverride UMaterialInterface
---@field protected SecondaryWireframeMaterialOverride UMaterialInterface
---@field public bEnableRaytracing boolean @Enable/disable Raytracing support on this Mesh, if Raytracing is currently enabled in the Project Settings. Use SetEnableRaytracing() to configure this flag in Blueprints/C++.
---@field protected DrawPath EDynamicMeshDrawPath @Controls whether to use the dynamic or static draw path
---@field public BaseMaterials TArray<UMaterialInterface>
local UBaseDynamicMeshComponent = {}

---@param bEnabled boolean
function UBaseDynamicMeshComponent:SetViewModeOverridesEnabled(bEnabled) end

---Configure the active Color Space Transform Mode
---@param NewMode EDynamicMeshVertexColorTransformMode
function UBaseDynamicMeshComponent:SetVertexColorSpaceTransformMode(NewMode) end

---@param bEnabled boolean
function UBaseDynamicMeshComponent:SetShadowsEnabled(bEnabled) end

---Set an active secondary render material.
---@param Material UMaterialInterface
function UBaseDynamicMeshComponent:SetSecondaryRenderMaterial(Material) end

---Show/Hide the secondary triangle buffers. Does not invalidate SceneProxy.
---@param bSetVisible boolean
function UBaseDynamicMeshComponent:SetSecondaryBuffersVisibility(bSetVisible) end

---Set an active wireframe override render Material
---@param Material UMaterialInterface
function UBaseDynamicMeshComponent:SetOverrideWireframeRenderMaterial(Material) end

---Set an active secondary wireframe override render material
---@param Material UMaterialInterface
function UBaseDynamicMeshComponent:SetOverrideSecondaryWireframeRenderMaterial(Material) end

---Set an active override render material. This should replace all materials during rendering.
---@param Material UMaterialInterface
function UBaseDynamicMeshComponent:SetOverrideRenderMaterial(Material) end

---Set the mesh rendering to use the static or dynamic draw path
---@param NewDrawPath EDynamicMeshDrawPath
function UBaseDynamicMeshComponent:SetMeshDrawPath(NewDrawPath) end

---Configure whether wireframe rendering is enabled or not
---@param bEnable boolean
function UBaseDynamicMeshComponent:SetEnableWireframeRenderPass(bEnable) end

---Enable/Disable raytracing support. This is an expensive call as it flushes
---the rendering queue and forces an immediate rebuild of the SceneProxy.
---@param bSetEnabled boolean
function UBaseDynamicMeshComponent:SetEnableRaytracing(bSetEnabled) end

---Configure the Color used with Constant Color Override Mode
---@param bEnable boolean
function UBaseDynamicMeshComponent:SetEnableFlatShading(bEnable) end

---@param NewDistFieldMode EDynamicMeshComponentDistanceFieldMode
function UBaseDynamicMeshComponent:SetDistanceFieldMode(NewDistFieldMode) end

---Configure the Color used with Constant Color Override Mode
---@param NewColor FColor
function UBaseDynamicMeshComponent:SetConstantOverrideColor(NewColor) end

---Configure the active Color Override
---@param NewMode EDynamicMeshComponentColorOverrideMode
function UBaseDynamicMeshComponent:SetColorOverrideMode(NewMode) end

---
---@param k integer
---@return boolean
function UBaseDynamicMeshComponent:HasOverrideRenderMaterial(k) end

---@return boolean
function UBaseDynamicMeshComponent:GetViewModeOverridesEnabled() end

---
---@return EDynamicMeshVertexColorTransformMode
function UBaseDynamicMeshComponent:GetVertexColorSpaceTransformMode() end

---@return boolean
function UBaseDynamicMeshComponent:GetShadowsEnabled() end

---
---@return UMaterialInterface
function UBaseDynamicMeshComponent:GetSecondaryRenderMaterial() end

---
---@return boolean
function UBaseDynamicMeshComponent:GetSecondaryBuffersVisibility() end

---
---@return UMaterialInterface
function UBaseDynamicMeshComponent:GetOverrideWireframeRenderMaterial() end

---
---@return UMaterialInterface
function UBaseDynamicMeshComponent:GetOverrideSecondaryWireframeRenderMaterial() end

---
---@param MaterialIndex integer
---@return UMaterialInterface
function UBaseDynamicMeshComponent:GetOverrideRenderMaterial(MaterialIndex) end

---
---@return EDynamicMeshDrawPath
function UBaseDynamicMeshComponent:GetMeshDrawPath() end

---
---@return boolean
function UBaseDynamicMeshComponent:GetFlatShadingEnabled() end

---
---@return boolean
function UBaseDynamicMeshComponent:GetEnableWireframeRenderPass() end

---
---@return boolean
function UBaseDynamicMeshComponent:GetEnableRaytracing() end

---
---@return UDynamicMesh
function UBaseDynamicMeshComponent:GetDynamicMesh() end

---@return EDynamicMeshComponentDistanceFieldMode
function UBaseDynamicMeshComponent:GetDistanceFieldMode() end

---
---@return FColor
function UBaseDynamicMeshComponent:GetConstantOverrideColor() end

---
---@return EDynamicMeshComponentColorOverrideMode
function UBaseDynamicMeshComponent:GetColorOverrideMode() end

---Clear any active secondary render material
function UBaseDynamicMeshComponent:ClearSecondaryRenderMaterial() end

---Clear any active wireframe override render material
function UBaseDynamicMeshComponent:ClearOverrideWireframeRenderMaterial() end

---Clear any active secondary wireframe override render material
function UBaseDynamicMeshComponent:ClearOverrideSecondaryWireframeRenderMaterial() end

---Clear any active override render material
function UBaseDynamicMeshComponent:ClearOverrideRenderMaterial() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UBaseDynamicMeshComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UBaseDynamicMeshComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UBaseDynamicMeshComponent:AddAssetUserDataOfClass(InUserDataClass) end

