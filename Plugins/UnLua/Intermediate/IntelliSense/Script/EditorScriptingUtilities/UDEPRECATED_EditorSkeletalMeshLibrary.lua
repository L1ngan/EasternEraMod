---Utility class to altering and analyzing a SkeletalMesh and use the common functionalities of the SkeletalMesh Editor.
---The editor should not be in play in editor mode.
---@class UDEPRECATED_EditorSkeletalMeshLibrary : UBlueprintFunctionLibrary
local UDEPRECATED_EditorSkeletalMeshLibrary = {}

---@param SkeletalMesh USkeletalMesh
---@param LODIndex integer
---@param TextureMask UTexture2D
---@param Threshold number
---@return boolean
function UDEPRECATED_EditorSkeletalMeshLibrary.StripLODGeometry(SkeletalMesh, LODIndex, TextureMask, Threshold) end

---@param SkeletalMesh USkeletalMesh
---@param LodIndex integer
---@param BuildOptions FSkeletalMeshBuildSettings
function UDEPRECATED_EditorSkeletalMeshLibrary.SetLodBuildSettings(SkeletalMesh, LodIndex, BuildOptions) end

---@param SkeletalMesh USkeletalMesh
---@param OldName string
---@param NewName string
---@return boolean
function UDEPRECATED_EditorSkeletalMeshLibrary.RenameSocket(SkeletalMesh, OldName, NewName) end

---@param SkeletalMesh USkeletalMesh
---@param ToRemoveLODs TArray_integer_
---@return boolean
function UDEPRECATED_EditorSkeletalMeshLibrary.RemoveLODs(SkeletalMesh, ToRemoveLODs) end

---@param SkeletalMesh USkeletalMesh
---@return boolean
function UDEPRECATED_EditorSkeletalMeshLibrary.ReimportAllCustomLODs(SkeletalMesh) end

---@param SkeletalMesh USkeletalMesh
---@param NewLODCount integer @[opt] 
---@param bRegenerateEvenIfImported boolean @[opt] 
---@param bGenerateBaseLOD boolean @[opt] 
---@return boolean
function UDEPRECATED_EditorSkeletalMeshLibrary.RegenerateLOD(SkeletalMesh, NewLODCount, bRegenerateEvenIfImported, bGenerateBaseLOD) end

---@param BaseMesh USkeletalMesh
---@param LODIndex integer
---@param SourceFilename string
---@return integer
function UDEPRECATED_EditorSkeletalMeshLibrary.ImportLOD(BaseMesh, LODIndex, SourceFilename) end

---@param SkeletalMesh USkeletalMesh
---@param LODIndex integer
---@return integer
function UDEPRECATED_EditorSkeletalMeshLibrary.GetNumVerts(SkeletalMesh, LODIndex) end

---@param SkeletalMesh USkeletalMesh
---@return integer
function UDEPRECATED_EditorSkeletalMeshLibrary.GetLODCount(SkeletalMesh) end

---@param SkeletalMesh USkeletalMesh
---@param LodIndex integer
---@param OutBuildOptions FSkeletalMeshBuildSettings @[out] 
function UDEPRECATED_EditorSkeletalMeshLibrary.GetLodBuildSettings(SkeletalMesh, LodIndex, OutBuildOptions) end

---@param SkeletalMesh USkeletalMesh
---@return UPhysicsAsset
function UDEPRECATED_EditorSkeletalMeshLibrary.CreatePhysicsAsset(SkeletalMesh) end

