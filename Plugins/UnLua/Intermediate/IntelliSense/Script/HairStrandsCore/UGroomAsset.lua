---Implements an asset that can be used to store hair strands
---@class UGroomAsset : UObject
---@field private LODMode EGroomLODMode @Define how LOD adapts curves & points for strands geometry. Auto: adapts the curve count based on screen coverage. Manual: use the discrete LOD created for each groups
---@field private AutoLODBias number @When LOD mode is set to Auto, decrease the screen size at which curves reduction will occur.
---@field private DataflowSettings FGroomDataflowSettings @Dataflow settings used for any dataflow related operations
---@field public HairGroupsInfo TArray<FHairGroupInfoWithVisibility>
---@field public HairGroupsRendering TArray<FHairGroupsRendering>
---@field public HairGroupsPhysics TArray<FHairGroupsPhysics>
---@field public HairGroupsInterpolation TArray<FHairGroupsInterpolation>
---@field public HairGroupsLOD TArray<FHairGroupsLOD>
---@field public HairGroupsCards TArray<FHairGroupsCardsSourceDescription>
---@field public HairGroupsMeshes TArray<FHairGroupsMeshesSourceDescription>
---@field public HairGroupsMaterials TArray<FHairGroupsMaterial>
---@field public EnableGlobalInterpolation boolean @Enable radial basis function interpolation to be used instead of the local skin rigid transform (WIP)
---@field public EnableSimulationCache boolean @Enable guide-cache support. This allows to attach a simulation-cache dynamically at runtime
---@field public HairInterpolationType EGroomInterpolationType @Type of interpolation used (WIP)
---@field public RiggedSkeletalMesh USkeletalMesh
---@field public DeformedGroupSections TArray<integer>
---@field public MinLOD FPerPlatformInt
---@field public DisableBelowMinLodStripping FPerPlatformBool
---@field public EffectiveLODBias TArray<number>
---@field public ThumbnailInfo UThumbnailInfo @Thumbnail Info used for Groom Assets
---@field public AssetImportData UAssetImportData @Asset data to be used when re-importing
---@field public AssetUserData TArray<UAssetUserData> @Array of user data stored with the asset
local UGroomAsset = {}

---@param In USkeletalMesh
function UGroomAsset:SetRiggedSkeletalMesh(In) end

---@param In EGroomInterpolationType
function UGroomAsset:SetHairInterpolationType(In) end

---@param In TArray_FHairGroupsRendering_
function UGroomAsset:SetHairGroupsRendering(In) end

---@param In TArray_FHairGroupsPhysics_
function UGroomAsset:SetHairGroupsPhysics(In) end

---@param In TArray_FHairGroupsMeshesSourceDescription_
function UGroomAsset:SetHairGroupsMeshes(In) end

---@param In TArray_FHairGroupsMaterial_
function UGroomAsset:SetHairGroupsMaterials(In) end

---@param In TArray_FHairGroupsLOD_
function UGroomAsset:SetHairGroupsLOD(In) end

---@param In TArray_FHairGroupsInterpolation_
function UGroomAsset:SetHairGroupsInterpolation(In) end

---@param In TArray_FHairGroupsCardsSourceDescription_
function UGroomAsset:SetHairGroupsCards(In) end

---@param In boolean
function UGroomAsset:SetEnableSimulationCache(In) end

---@param In boolean
function UGroomAsset:SetEnableGlobalInterpolation(In) end

---@param In TArray_integer_
function UGroomAsset:SetDeformedGroupSections(In) end

---@return USkeletalMesh
function UGroomAsset:GetRiggedSkeletalMesh() end

---@return EGroomInterpolationType
function UGroomAsset:GetHairInterpolationType() end

---@return TArray_FHairGroupsRendering_
function UGroomAsset:GetHairGroupsRendering() end

---@return TArray_FHairGroupsPhysics_
function UGroomAsset:GetHairGroupsPhysics() end

---@return TArray_FHairGroupsMeshesSourceDescription_
function UGroomAsset:GetHairGroupsMeshes() end

---@return TArray_FHairGroupsMaterial_
function UGroomAsset:GetHairGroupsMaterials() end

---@return TArray_FHairGroupsLOD_
function UGroomAsset:GetHairGroupsLOD() end

---@return TArray_FHairGroupsInterpolation_
function UGroomAsset:GetHairGroupsInterpolation() end

---@return TArray_FHairGroupsCardsSourceDescription_
function UGroomAsset:GetHairGroupsCards() end

---@return boolean
function UGroomAsset:GetEnableSimulationCache() end

---@return boolean
function UGroomAsset:GetEnableGlobalInterpolation() end

---@return TArray_integer_
function UGroomAsset:GetDeformedGroupSections() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGroomAsset:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UGroomAsset:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGroomAsset:AddAssetUserDataOfClass(InUserDataClass) end

