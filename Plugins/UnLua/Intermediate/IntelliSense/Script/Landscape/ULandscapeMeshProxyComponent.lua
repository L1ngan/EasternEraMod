---@class ULandscapeMeshProxyComponent : UStaticMeshComponent
---@field private LandscapeGuid FGuid @The landscape this proxy was generated for
---@field private ProxyComponentBases TArray<FIntPoint> @The section coordinates of the landscape components that this proxy was generated for.  Used to register with LandscapeRender when LODGroupKey == 0
---@field private ProxyComponentCentersObjectSpace TArray<FVector> @The center of the landscape components that this proxy was generated for, in local component space.  Used to register with LandscapeRender when LODGroupKey != 0
---@field private ComponentXVectorObjectSpace FVector
---@field private ComponentYVectorObjectSpace FVector
---@field private ComponentResolution integer
---@field private ProxyLOD integer @LOD level this proxy was generated for
---@field private LODGroupKey integer
local ULandscapeMeshProxyComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function ULandscapeMeshProxyComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function ULandscapeMeshProxyComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function ULandscapeMeshProxyComponent:AddAssetUserDataOfClass(InUserDataClass) end

