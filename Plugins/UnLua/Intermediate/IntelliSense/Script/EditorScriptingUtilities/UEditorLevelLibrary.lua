---Utility class to do most of the common functionalities in the World Editor.
---The editor should not be in play in editor mode.
---@class UEditorLevelLibrary : UBlueprintFunctionLibrary
local UEditorLevelLibrary = {}

---@param ObjectToUse UObject
---@param Location FVector
---@param Rotation FRotator
---@param bTransient boolean @[opt] 
---@return AActor
function UEditorLevelLibrary.SpawnActorFromObject(ObjectToUse, Location, Rotation, bTransient) end

---@param ActorClass TSubclassOf_AActor_
---@param Location FVector
---@param Rotation FRotator
---@param bTransient boolean @[opt] 
---@return AActor
function UEditorLevelLibrary.SpawnActorFromClass(ActorClass, Location, Rotation, bTransient) end

---@param ActorsToSelect TArray_AActor_
function UEditorLevelLibrary.SetSelectedLevelActors(ActorsToSelect) end

---@param CameraLocation FVector
---@param CameraRotation FRotator
function UEditorLevelLibrary.SetLevelViewportCameraInfo(CameraLocation, CameraRotation) end

---@param LevelName string
---@return boolean
function UEditorLevelLibrary.SetCurrentLevelByName(LevelName) end

---@param Actor AActor
---@param bShouldBeSelected boolean
function UEditorLevelLibrary.SetActorSelectionState(Actor, bShouldBeSelected) end

function UEditorLevelLibrary.SelectNothing() end

---@return boolean
function UEditorLevelLibrary.SaveCurrentLevel() end

---@return boolean
function UEditorLevelLibrary.SaveAllDirtyLevels() end

---Replaces the selected Actors with the same number of a different kind of Actor using the specified factory to spawn the new Actors
---note that only Location, Rotation, Drawscale, Drawscale3D, Tag, and Group are copied from the old Actors
---@param InAssetPath string
function UEditorLevelLibrary.ReplaceSelectedActors(InAssetPath) end

---@param Actors TArray_AActor_
---@param MeshToBeReplaced UStaticMesh
---@param NewMesh UStaticMesh
function UEditorLevelLibrary.ReplaceMeshComponentsMeshesOnActors(Actors, MeshToBeReplaced, NewMesh) end

---@param MeshComponents TArray_UStaticMeshComponent_
---@param MeshToBeReplaced UStaticMesh
---@param NewMesh UStaticMesh
function UEditorLevelLibrary.ReplaceMeshComponentsMeshes(MeshComponents, MeshToBeReplaced, NewMesh) end

---@param Actors TArray_AActor_
---@param MaterialToBeReplaced UMaterialInterface
---@param NewMaterial UMaterialInterface
function UEditorLevelLibrary.ReplaceMeshComponentsMaterialsOnActors(Actors, MaterialToBeReplaced, NewMaterial) end

---@param MeshComponents TArray_UMeshComponent_
---@param MaterialToBeReplaced UMaterialInterface
---@param NewMaterial UMaterialInterface
function UEditorLevelLibrary.ReplaceMeshComponentsMaterials(MeshComponents, MaterialToBeReplaced, NewMaterial) end

---@param ActorToPilot AActor
function UEditorLevelLibrary.PilotLevelActor(ActorToPilot) end

---@param AssetPath string
---@param TemplateAssetPath string
---@return boolean
function UEditorLevelLibrary.NewLevelFromTemplate(AssetPath, TemplateAssetPath) end

---@param AssetPath string
---@return boolean
function UEditorLevelLibrary.NewLevel(AssetPath) end

---@param ActorsToMerge TArray_AStaticMeshActor_
---@param MergeOptions FMergeStaticMeshActorsOptions
---@param OutMergedActor AStaticMeshActor @[out] 
---@return boolean
function UEditorLevelLibrary.MergeStaticMeshActors(ActorsToMerge, MergeOptions, OutMergedActor) end

---@param AssetPath string
---@return boolean
function UEditorLevelLibrary.LoadLevel(AssetPath) end

---@param ActorsToJoin TArray_AStaticMeshActor_
---@param JoinOptions FJoinStaticMeshActorsOptions
---@return AActor
function UEditorLevelLibrary.JoinStaticMeshActors(ActorsToJoin, JoinOptions) end

---@return TArray_AActor_
function UEditorLevelLibrary.GetSelectedLevelActors() end

---@param bIncludeDedicatedServer boolean
---@return TArray_UWorld_
function UEditorLevelLibrary.GetPIEWorlds(bIncludeDedicatedServer) end

---@param CameraLocation FVector @[out] 
---@param CameraRotation FRotator @[out] 
---@return boolean
function UEditorLevelLibrary.GetLevelViewportCameraInfo(CameraLocation, CameraRotation) end

---@return UWorld
function UEditorLevelLibrary.GetGameWorld() end

---@return UWorld
function UEditorLevelLibrary.GetEditorWorld() end

---@return TArray_UActorComponent_
function UEditorLevelLibrary.GetAllLevelActorsComponents() end

---@return TArray_AActor_
function UEditorLevelLibrary.GetAllLevelActors() end

---@param PathToActor string
---@return AActor
function UEditorLevelLibrary.GetActorReference(PathToActor) end

function UEditorLevelLibrary.EjectPilotLevelActor() end

---@param bGameView boolean
function UEditorLevelLibrary.EditorSetGameView(bGameView) end

function UEditorLevelLibrary.EditorPlaySimulate() end

function UEditorLevelLibrary.EditorInvalidateViewports() end

function UEditorLevelLibrary.EditorEndPlay() end

---@param ActorToDestroy AActor
---@return boolean
function UEditorLevelLibrary.DestroyActor(ActorToDestroy) end

---@param ActorsToMerge TArray_AStaticMeshActor_
---@param MergeOptions FCreateProxyMeshActorOptions
---@param OutMergedActor AStaticMeshActor @[out] 
---@return boolean
function UEditorLevelLibrary.CreateProxyMeshActor(ActorsToMerge, MergeOptions, OutMergedActor) end

---@param Actors TArray_AActor_
---@param ActorClass TSubclassOf_AActor_
---@param StaticMeshPackagePath string
---@return TArray_AActor_
function UEditorLevelLibrary.ConvertActors(Actors, ActorClass, StaticMeshPackagePath) end

function UEditorLevelLibrary.ClearActorSelectionSet() end

