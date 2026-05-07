---@class UReimportFbxSceneFactory : UFbxSceneImportFactory
local UReimportFbxSceneFactory = {}

---Script helper to allow fbx scene reimport from scripted language
---       * @@param Obj: type must be one of the following type
---       * UFbxSceneImportData
---       * UStaticMesh, USkeletalMesh, UAnimSequence: It must have been imported with the scene import so the AssetImportData point on a UFbxSceneImportData
---@param Obj UObject
function UReimportFbxSceneFactory:ScriptReimportHelper(Obj) end

