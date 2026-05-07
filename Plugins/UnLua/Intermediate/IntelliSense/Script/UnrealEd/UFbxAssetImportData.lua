---Base class for import data and options used when importing any asset from FBX
---@class UFbxAssetImportData : UAssetImportData
---@field public ImportTranslation FVector
---@field public ImportRotation FRotator
---@field public ImportUniformScale number
---@field public CoordinateSystemPolicy ECoordinateSystemPolicy @Select strategy to map FBX coordinates system to UE coordinates system
---@field public bConvertScene boolean @Convert the scene from FBX coordinate system to UE coordinate system
---@field public bForceFrontXAxis boolean @Convert the scene from FBX coordinate system to UE coordinate system with front X axis instead of -Y
---@field public bConvertSceneUnit boolean @Convert the scene from FBX unit to UE unit (centimeter).
---@field public bImportAsScene boolean @Use by the reimport factory to answer CanReimport, if true only factory for scene reimport will return true
---@field public FbxSceneImportDataReference UFbxSceneImportData @Use by the reimport factory to answer CanReimport, if true only factory for scene reimport will return true
---@field public bUsingLUFCoordinateSysem boolean @Use to enable or not the new UI
local UFbxAssetImportData = {}

