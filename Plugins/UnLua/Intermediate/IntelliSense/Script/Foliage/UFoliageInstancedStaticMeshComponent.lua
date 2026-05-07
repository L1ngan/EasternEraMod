---@class UFoliageInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent
---@field public OnInstanceTakePointDamage MulticastDelegate
---@field public OnInstanceTakeRadialDamage MulticastDelegate
---@field public bEnableDiscardOnLoad boolean
---@field public FoliageHiddenEditorViews integer
---@field private GenerationGuid FGuid
local UFoliageInstancedStaticMeshComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UFoliageInstancedStaticMeshComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UFoliageInstancedStaticMeshComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UFoliageInstancedStaticMeshComponent:AddAssetUserDataOfClass(InUserDataClass) end

