---MeshComponent is an abstract base for any component that is an instance of a renderable collection of triangles.
---@class UMeshComponent : UPrimitiveComponent
---@field public OverrideMaterials TArray<UMaterialInterface> @Material overrides.
---@field public OverlayMaterial UMaterialInterface @Translucent material to blend on top of this mesh. Mesh will be rendered twice - once with a base material and once with overlay material
---@field public OverlayMaterialMaxDrawDistance number @The max draw distance for overlay material. A distance of 0 indicates that overlay will be culled using primitive max distance.
---@field public MaterialSlotsOverlayMaterial TArray<UMaterialInterface> @Translucent material to blend on top of this mesh. Mesh will be rendered twice - once with a base material and once with overlay material. The difference with the  global OverlayMaterial is those are per material slot, if the entry is null or doesn't exist the global OverlayMaterial will be use for sections using the material slot.
---@field public bEnableMaterialParameterCaching boolean @Whether or not to cache material parameter to speed up setting scalar or vector value on materials
local UMeshComponent = {}

---Set all occurrences of Vector Material Parameters with ParameterName in the set of materials of the SkeletalMesh to ParameterValue
---@param ParameterName string
---@param ParameterValue FVector
function UMeshComponent:SetVectorParameterValueOnMaterials(ParameterName, ParameterValue) end

---Set all occurrences of Scalar Material Parameters with ParameterName in the set of materials of the SkeletalMesh to ParameterValue
---@param ParameterName string
---@param ParameterValue number
function UMeshComponent:SetScalarParameterValueOnMaterials(ParameterName, ParameterValue) end

---Change the overlay material max draw distance used by this instance
---@param InMaxDrawDistance number
function UMeshComponent:SetOverlayMaterialMaxDrawDistance(InMaxDrawDistance) end

---Change the overlay material used by this instance
---@param NewOverlayMaterial UMaterialInterface
function UMeshComponent:SetOverlayMaterial(NewOverlayMaterial) end

---Set all occurrences of Vector Material Parameters with ParameterName in the set of materials of the SkeletalMesh to ParameterValue
---@param ParameterName string
---@param ParameterValue FLinearColor
function UMeshComponent:SetColorParameterValueOnMaterials(ParameterName, ParameterValue) end

---Tell the streaming system to start loading all textures with all mip-levels.
---@param Seconds number
---@param bPrioritizeCharacterTextures boolean
---@param CinematicTextureGroups integer @[opt] 
function UMeshComponent:PrestreamTextures(Seconds, bPrioritizeCharacterTextures, CinematicTextureGroups) end

---Tell the streaming system to start streaming in all LODs for the mesh.
--- Note: this function may set bIgnoreStreamingMipBias on this component enable the FastForceResident system.
---@param Seconds number
---@return boolean
function UMeshComponent:PrestreamMeshLODs(Seconds) end

---Get the overlay material used by this instance
---@return number
function UMeshComponent:GetOverlayMaterialMaxDrawDistance() end

---Get the overlay material used by this instance
---@return UMaterialInterface
function UMeshComponent:GetOverlayMaterial() end

---@return TArray_UMaterialInterface_
function UMeshComponent:GetMaterials() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMeshComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UMeshComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMeshComponent:AddAssetUserDataOfClass(InUserDataClass) end

