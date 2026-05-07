---Utility class to altering and analyzing a StaticMesh and use the common functionalities of the Mesh Editor.
---The editor should not be in play in editor mode.
---@class UDEPRECATED_EditorStaticMeshLibrary : UBlueprintFunctionLibrary
local UDEPRECATED_EditorStaticMeshLibrary = {}

---@param StaticMesh UStaticMesh
---@param ReductionOptions FStaticMeshReductionOptions
---@param bApplyChanges boolean
---@return integer
function UDEPRECATED_EditorStaticMeshLibrary.SetLodsWithNotification(StaticMesh, ReductionOptions, bApplyChanges) end

---@param StaticMesh UStaticMesh
---@param ReductionOptions FStaticMeshReductionOptions
---@return integer
function UDEPRECATED_EditorStaticMeshLibrary.SetLods(StaticMesh, ReductionOptions) end

---@param StaticMesh UStaticMesh
---@param LodIndex integer
---@param ReductionOptions FMeshReductionSettings
function UDEPRECATED_EditorStaticMeshLibrary.SetLodReductionSettings(StaticMesh, LodIndex, ReductionOptions) end

---@param DestinationStaticMesh UStaticMesh
---@param DestinationLodIndex integer
---@param SourceStaticMesh UStaticMesh
---@param SourceLodIndex integer
---@param bReuseExistingMaterialSlots boolean
---@return integer
function UDEPRECATED_EditorStaticMeshLibrary.SetLodFromStaticMesh(DestinationStaticMesh, DestinationLodIndex, SourceStaticMesh, SourceLodIndex, bReuseExistingMaterialSlots) end

---@param StaticMesh UStaticMesh
---@param LodIndex integer
---@param BuildOptions FMeshBuildSettings
function UDEPRECATED_EditorStaticMeshLibrary.SetLodBuildSettings(StaticMesh, LodIndex, BuildOptions) end

---@param StaticMesh UStaticMesh
---@param bGenerateLightmapUVs boolean
---@return boolean
function UDEPRECATED_EditorStaticMeshLibrary.SetGenerateLightmapUVs(StaticMesh, bGenerateLightmapUVs) end

---@param StaticMesh UStaticMesh
---@param HullCount integer
---@param MaxHullVerts integer
---@param HullPrecision integer
---@param bApplyChanges boolean
---@return boolean
function UDEPRECATED_EditorStaticMeshLibrary.SetConvexDecompositionCollisionsWithNotification(StaticMesh, HullCount, MaxHullVerts, HullPrecision, bApplyChanges) end

---@param StaticMesh UStaticMesh
---@param HullCount integer
---@param MaxHullVerts integer
---@param HullPrecision integer
---@return boolean
function UDEPRECATED_EditorStaticMeshLibrary.SetConvexDecompositionCollisions(StaticMesh, HullCount, MaxHullVerts, HullPrecision) end

---@param StaticMesh UStaticMesh
---@param bAllowCPUAccess boolean
function UDEPRECATED_EditorStaticMeshLibrary.SetAllowCPUAccess(StaticMesh, bAllowCPUAccess) end

---@param StaticMesh UStaticMesh
---@param LODIndex integer
---@param UVChannelIndex integer
---@return boolean
function UDEPRECATED_EditorStaticMeshLibrary.RemoveUVChannel(StaticMesh, LODIndex, UVChannelIndex) end

---@param StaticMesh UStaticMesh
---@return boolean
function UDEPRECATED_EditorStaticMeshLibrary.RemoveLods(StaticMesh) end

---@param StaticMesh UStaticMesh
---@param bApplyChanges boolean
---@return boolean
function UDEPRECATED_EditorStaticMeshLibrary.RemoveCollisionsWithNotification(StaticMesh, bApplyChanges) end

---@param StaticMesh UStaticMesh
---@return boolean
function UDEPRECATED_EditorStaticMeshLibrary.RemoveCollisions(StaticMesh) end

---@param StaticMesh UStaticMesh
---@return boolean
function UDEPRECATED_EditorStaticMeshLibrary.ReimportAllCustomLODs(StaticMesh) end

---@param StaticMesh UStaticMesh
---@param LODIndex integer
---@param SectionIndex integer
---@return boolean
function UDEPRECATED_EditorStaticMeshLibrary.IsSectionCollisionEnabled(StaticMesh, LODIndex, SectionIndex) end

---@param StaticMesh UStaticMesh
---@param LODIndex integer
---@param UVChannelIndex integer
---@return boolean
function UDEPRECATED_EditorStaticMeshLibrary.InsertUVChannel(StaticMesh, LODIndex, UVChannelIndex) end

---@param BaseStaticMesh UStaticMesh
---@param LODIndex integer
---@param SourceFilename string
---@return integer
function UDEPRECATED_EditorStaticMeshLibrary.ImportLOD(BaseStaticMesh, LODIndex, SourceFilename) end

---@param StaticMesh UStaticMesh
---@return boolean
function UDEPRECATED_EditorStaticMeshLibrary.HasVertexColors(StaticMesh) end

---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function UDEPRECATED_EditorStaticMeshLibrary.HasInstanceVertexColors(StaticMeshComponent) end

---@param StaticMesh UStaticMesh
---@return integer
function UDEPRECATED_EditorStaticMeshLibrary.GetSimpleCollisionCount(StaticMesh) end

---@param StaticMesh UStaticMesh
---@param LODIndex integer
---@return integer
function UDEPRECATED_EditorStaticMeshLibrary.GetNumUVChannels(StaticMesh, LODIndex) end

---@param StaticMesh UStaticMesh
---@param LODIndex integer
---@return integer
function UDEPRECATED_EditorStaticMeshLibrary.GetNumberVerts(StaticMesh, LODIndex) end

---@param StaticMesh UStaticMesh
---@return integer
function UDEPRECATED_EditorStaticMeshLibrary.GetNumberMaterials(StaticMesh) end

---@param StaticMesh UStaticMesh
---@return TArray_number_
function UDEPRECATED_EditorStaticMeshLibrary.GetLodScreenSizes(StaticMesh) end

---@param StaticMesh UStaticMesh
---@param LodIndex integer
---@param OutReductionOptions FMeshReductionSettings @[out] 
function UDEPRECATED_EditorStaticMeshLibrary.GetLodReductionSettings(StaticMesh, LodIndex, OutReductionOptions) end

---@param StaticMesh UStaticMesh
---@return integer
function UDEPRECATED_EditorStaticMeshLibrary.GetLodCount(StaticMesh) end

---@param StaticMesh UStaticMesh
---@param LodIndex integer
---@param OutBuildOptions FMeshBuildSettings @[out] 
function UDEPRECATED_EditorStaticMeshLibrary.GetLodBuildSettings(StaticMesh, LodIndex, OutBuildOptions) end

---@param StaticMesh UStaticMesh
---@return integer
function UDEPRECATED_EditorStaticMeshLibrary.GetConvexCollisionCount(StaticMesh) end

---@param StaticMesh UStaticMesh
---@return integer
function UDEPRECATED_EditorStaticMeshLibrary.GetCollisionComplexity(StaticMesh) end

---@param StaticMesh UStaticMesh
---@param LODIndex integer
---@param UVChannelIndex integer
---@param Position FVector
---@param Orientation FRotator
---@param Tiling FVector2D
---@return boolean
function UDEPRECATED_EditorStaticMeshLibrary.GeneratePlanarUVChannel(StaticMesh, LODIndex, UVChannelIndex, Position, Orientation, Tiling) end

---@param StaticMesh UStaticMesh
---@param LODIndex integer
---@param UVChannelIndex integer
---@param Position FVector
---@param Orientation FRotator
---@param Tiling FVector2D
---@return boolean
function UDEPRECATED_EditorStaticMeshLibrary.GenerateCylindricalUVChannel(StaticMesh, LODIndex, UVChannelIndex, Position, Orientation, Tiling) end

---@param StaticMesh UStaticMesh
---@param LODIndex integer
---@param UVChannelIndex integer
---@param Position FVector
---@param Orientation FRotator
---@param Size FVector
---@return boolean
function UDEPRECATED_EditorStaticMeshLibrary.GenerateBoxUVChannel(StaticMesh, LODIndex, UVChannelIndex, Position, Orientation, Size) end

---@param StaticMesh UStaticMesh
---@param bCollisionEnabled boolean
---@param LODIndex integer
---@param SectionIndex integer
function UDEPRECATED_EditorStaticMeshLibrary.EnableSectionCollision(StaticMesh, bCollisionEnabled, LODIndex, SectionIndex) end

---@param StaticMesh UStaticMesh
---@param bCastShadow boolean
---@param LODIndex integer
---@param SectionIndex integer
function UDEPRECATED_EditorStaticMeshLibrary.EnableSectionCastShadow(StaticMesh, bCastShadow, LODIndex, SectionIndex) end

---@param StaticMeshes TArray_UStaticMesh_
---@param HullCount integer
---@param MaxHullVerts integer
---@param HullPrecision integer
---@param bApplyChanges boolean
---@return boolean
function UDEPRECATED_EditorStaticMeshLibrary.BulkSetConvexDecompositionCollisionsWithNotification(StaticMeshes, HullCount, MaxHullVerts, HullPrecision, bApplyChanges) end

---@param StaticMeshes TArray_UStaticMesh_
---@param HullCount integer
---@param MaxHullVerts integer
---@param HullPrecision integer
---@return boolean
function UDEPRECATED_EditorStaticMeshLibrary.BulkSetConvexDecompositionCollisions(StaticMeshes, HullCount, MaxHullVerts, HullPrecision) end

---@param StaticMesh UStaticMesh
---@param LODIndex integer
---@return boolean
function UDEPRECATED_EditorStaticMeshLibrary.AddUVChannel(StaticMesh, LODIndex) end

---@param StaticMesh UStaticMesh
---@param ShapeType EScriptCollisionShapeType
---@param bApplyChanges boolean
---@return integer
function UDEPRECATED_EditorStaticMeshLibrary.AddSimpleCollisionsWithNotification(StaticMesh, ShapeType, bApplyChanges) end

---@param StaticMesh UStaticMesh
---@param ShapeType EScriptCollisionShapeType
---@return integer
function UDEPRECATED_EditorStaticMeshLibrary.AddSimpleCollisions(StaticMesh, ShapeType) end

