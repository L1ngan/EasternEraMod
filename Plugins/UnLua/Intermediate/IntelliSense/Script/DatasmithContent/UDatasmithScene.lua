---@class UDatasmithScene : UObject
---@field public AssetImportData UDatasmithSceneImportData @Importing data and options used for this Datasmith scene
---@field public BulkDataVersion integer
---@field public StaticMeshes TMap<string, TSoftObjectPtr<UStaticMesh>> @Map of all the static meshes related to this Datasmith Scene
---@field public Clothes TMap<string, TSoftObjectPtr<UObject>>
---@field public Textures TMap<string, TSoftObjectPtr<UTexture>> @Map of all the textures related to this Datasmith Scene
---@field public MaterialFunctions TMap<string, TSoftObjectPtr<UMaterialFunction>> @Map of all the material functions related to this Datasmith Scene
---@field public Materials TMap<string, TSoftObjectPtr<UMaterialInterface>> @Map of all the materials related to this Datasmith Scene
---@field public LevelSequences TMap<string, TSoftObjectPtr<ULevelSequence>> @Map of all the level sequences related to this Datasmith Scene
---@field public LevelVariantSets TMap<string, TSoftObjectPtr<ULevelVariantSets>> @Map of all the level variant sets related to this Datasmith Scene
---@field public AssetUserData TArray<UAssetUserData> @Array of user data stored with the asset
local UDatasmithScene = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UDatasmithScene:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UDatasmithScene:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UDatasmithScene:AddAssetUserDataOfClass(InUserDataClass) end

