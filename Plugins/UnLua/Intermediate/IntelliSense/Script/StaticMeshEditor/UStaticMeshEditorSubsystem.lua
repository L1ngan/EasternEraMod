---UStaticMeshEditorSubsystem
---Subsystem for exposing static mesh functionality to scripts
---@class UStaticMeshEditorSubsystem : UEditorSubsystem
local UStaticMeshEditorSubsystem = {}

---Update the Nanite hi-res source filename.
---@param StaticMesh UStaticMesh
---@param NewSourceFilename string
---@return boolean
function UStaticMeshEditorSubsystem:UpdateNaniteSourceFilename(StaticMesh, NewSourceFilename) end

---Get the Nanite Settings for the mesh
---@param StaticMesh UStaticMesh
---@param NaniteSettings FMeshNaniteSettings
---@param bApplyChanges boolean @[opt] 
function UStaticMeshEditorSubsystem:SetNaniteSettings(StaticMesh, NaniteSettings, bApplyChanges) end

---Remove then add LODs on a static mesh.
---The static mesh must have at least LOD 0.
---The LOD 0 of the static mesh is kept after removal.
---The build settings of LOD 0 will be applied to all subsequent LODs.
---An negative value indicates that the reduction could not be performed. See log for explanation.
---No action will be performed if ReductionOptions.ReductionSettings is empty
---@param StaticMesh UStaticMesh
---@param ReductionOptions FStaticMeshReductionOptions
---@param bApplyChanges boolean
---@return integer
function UStaticMeshEditorSubsystem:SetLodsWithNotification(StaticMesh, ReductionOptions, bApplyChanges) end

---Set LOD screen sizes.
---@param StaticMesh UStaticMesh
---@param ScreenSizes TArray_number_
---@return boolean
function UStaticMeshEditorSubsystem:SetLodScreenSizes(StaticMesh, ScreenSizes) end

---Same as SetLodsWithNotification but changes are applied.
---@param StaticMesh UStaticMesh
---@param ReductionOptions FStaticMeshReductionOptions
---@return integer
function UStaticMeshEditorSubsystem:SetLods(StaticMesh, ReductionOptions) end

---Set the LOD reduction for the specified LOD index.
---@param StaticMesh UStaticMesh
---@param LodIndex integer
---@param ReductionOptions FMeshReductionSettings
function UStaticMeshEditorSubsystem:SetLodReductionSettings(StaticMesh, LodIndex, ReductionOptions) end

---Sets the material slot for a specific LOD.
---@param StaticMesh UStaticMesh
---@param MaterialSlotIndex integer
---@param LODIndex integer
---@param SectionIndex integer
function UStaticMeshEditorSubsystem:SetLODMaterialSlot(StaticMesh, MaterialSlotIndex, LODIndex, SectionIndex) end

---Set the LODGroup for the specified static mesh
---@param StaticMesh UStaticMesh
---@param LODGroup string
---@param bRebuildImmediately boolean @[opt] 
---@return boolean
function UStaticMeshEditorSubsystem:SetLODGroup(StaticMesh, LODGroup, bRebuildImmediately) end

---Adds or create a LOD at DestinationLodIndex using the geometry from SourceStaticMesh SourceLodIndex
---                                                                                       when they have the same material assigned. If false, all material slots of SourceStaticMesh will be appended in DestinationStaticMesh.
---                     A negative value indicates that the LOD was not set. See log for explanation.
---@param DestinationStaticMesh UStaticMesh
---@param DestinationLodIndex integer
---@param SourceStaticMesh UStaticMesh
---@param SourceLodIndex integer
---@param bReuseExistingMaterialSlots boolean
---@return integer
function UStaticMeshEditorSubsystem:SetLodFromStaticMesh(DestinationStaticMesh, DestinationLodIndex, SourceStaticMesh, SourceLodIndex, bReuseExistingMaterialSlots) end

---Set the LOD build options for the specified LOD index.
---@param StaticMesh UStaticMesh
---@param LodIndex integer
---@param BuildOptions FMeshBuildSettings
function UStaticMeshEditorSubsystem:SetLodBuildSettings(StaticMesh, LodIndex, BuildOptions) end

---Set Generate Lightmap UVs for StaticMesh
---@param StaticMesh UStaticMesh
---@param bGenerateLightmapUVs boolean
---@return boolean
function UStaticMeshEditorSubsystem:SetGenerateLightmapUVs(StaticMesh, bGenerateLightmapUVs) end

---Add a convex collision to a static mesh.
---Any existing collisions will be removed from the static mesh.
---This method replicates what is done when invoking menu entry "Collision > Auto Convex Collision" in the Mesh Editor.
---@param StaticMesh UStaticMesh
---@param HullCount integer
---@param MaxHullVerts integer
---@param HullPrecision integer
---@param bApplyChanges boolean
---@return boolean
function UStaticMeshEditorSubsystem:SetConvexDecompositionCollisionsWithNotification(StaticMesh, HullCount, MaxHullVerts, HullPrecision, bApplyChanges) end

---Same as SetConvexDecompositionCollisionsWithNotification but changes are automatically applied.
---@param StaticMesh UStaticMesh
---@param HullCount integer
---@param MaxHullVerts integer
---@param HullPrecision integer
---@return boolean
function UStaticMeshEditorSubsystem:SetConvexDecompositionCollisions(StaticMesh, HullCount, MaxHullVerts, HullPrecision) end

---Sets StaticMeshFlag bAllowCPUAccess
---@param StaticMesh UStaticMesh
---@param bAllowCPUAccess boolean
function UStaticMeshEditorSubsystem:SetAllowCPUAccess(StaticMesh, bAllowCPUAccess) end

---Find the references of the mesh MeshToBeReplaced on all the MeshComponents of all the Actors provided and replace it by NewMesh.
---@param Actors TArray_AActor_
---@param MeshToBeReplaced UStaticMesh
---@param NewMesh UStaticMesh
function UStaticMeshEditorSubsystem:ReplaceMeshComponentsMeshesOnActors(Actors, MeshToBeReplaced, NewMesh) end

---Find the references of the mesh MeshToBeReplaced on all the MeshComponents provided and replace it by NewMesh.
---The editor should not be in play in editor mode.
---@param MeshComponents TArray_UStaticMeshComponent_
---@param MeshToBeReplaced UStaticMesh
---@param NewMesh UStaticMesh
function UStaticMeshEditorSubsystem:ReplaceMeshComponentsMeshes(MeshComponents, MeshToBeReplaced, NewMesh) end

---Find the references of the material MaterialToReplaced on all the MeshComponents of all the Actors provided and replace it by NewMaterial.
---@param Actors TArray_AActor_
---@param MaterialToBeReplaced UMaterialInterface
---@param NewMaterial UMaterialInterface
function UStaticMeshEditorSubsystem:ReplaceMeshComponentsMaterialsOnActors(Actors, MaterialToBeReplaced, NewMaterial) end

---Find the references of the material MaterialToReplaced on all the MeshComponents provided and replace it by NewMaterial.
---@param MeshComponents TArray_UMeshComponent_
---@param MaterialToBeReplaced UMaterialInterface
---@param NewMaterial UMaterialInterface
function UStaticMeshEditorSubsystem:ReplaceMeshComponentsMaterials(MeshComponents, MaterialToBeReplaced, NewMaterial) end

---Removes the UV channel at the specified channel index on the given LOD of a StaticMesh.
---@param StaticMesh UStaticMesh
---@param LODIndex integer
---@param UVChannelIndex integer
---@return boolean
function UStaticMeshEditorSubsystem:RemoveUVChannel(StaticMesh, LODIndex, UVChannelIndex) end

---Remove LODs on a static mesh except LOD 0.
---@param StaticMesh UStaticMesh
---@return boolean
function UStaticMeshEditorSubsystem:RemoveLods(StaticMesh) end

---Remove collisions from a static mesh.
---This method replicates what is done when invoking menu entries "Collision > Remove Collision" in the Mesh Editor.
---@param StaticMesh UStaticMesh
---@param bApplyChanges boolean
---@return boolean
function UStaticMeshEditorSubsystem:RemoveCollisionsWithNotification(StaticMesh, bApplyChanges) end

---Same as RemoveCollisionsWithNotification but changes are applied.
---@param StaticMesh UStaticMesh
---@return boolean
function UStaticMeshEditorSubsystem:RemoveCollisions(StaticMesh) end

---Re-import all the custom LODs present in the specified static mesh.
---@param StaticMesh UStaticMesh
---@return boolean
function UStaticMeshEditorSubsystem:ReimportAllCustomLODs(StaticMesh) end

---Merge the meshes into a unique mesh with the provided StaticMeshActors. There are multiple options on how to merge the meshes and their materials.
---The ActorsToMerge need to be in the same Level.
---This may have a high impact on performance depending of the MeshMergingSettings options.
---@param ActorsToMerge TArray_AStaticMeshActor_
---@param MergeOptions FMergeStaticMeshActorsOptions
---@param OutMergedActor AStaticMeshActor @[out] 
---@return boolean
function UStaticMeshEditorSubsystem:MergeStaticMeshActors(ActorsToMerge, MergeOptions, OutMergedActor) end

---Create a new Actor in the level that contains a duplicate of all the Actors Static Meshes Component.
---The ActorsToJoin need to be in the same Level.
---This will have a low impact on performance but may help the edition by grouping the meshes under a single Actor.
---@param ActorsToJoin TArray_AStaticMeshActor_
---@param JoinOptions FJoinStaticMeshActorsOptions
---@return AActor
function UStaticMeshEditorSubsystem:JoinStaticMeshActors(ActorsToJoin, JoinOptions) end

---Checks if a specific LOD mesh section is visible in ray tracing.
---@param StaticMesh UStaticMesh
---@param LODIndex integer
---@param SectionIndex integer
---@return boolean
function UStaticMeshEditorSubsystem:IsSectionVisibleInRayTracingEnabled(StaticMesh, LODIndex, SectionIndex) end

---Checks if a specific LOD mesh section is forced to be opaque.
---@param StaticMesh UStaticMesh
---@param LODIndex integer
---@param SectionIndex integer
---@return boolean
function UStaticMeshEditorSubsystem:IsSectionForceOpaqueEnabled(StaticMesh, LODIndex, SectionIndex) end

---Checks if a specific LOD mesh section has collision.
---@param StaticMesh UStaticMesh
---@param LODIndex integer
---@param SectionIndex integer
---@return boolean
function UStaticMeshEditorSubsystem:IsSectionCollisionEnabled(StaticMesh, LODIndex, SectionIndex) end

---Checks if a specific LOD mesh section can cast shadows.
---@param StaticMesh UStaticMesh
---@param LODIndex integer
---@param SectionIndex integer
---@return boolean
function UStaticMeshEditorSubsystem:IsSectionCastShadowEnabled(StaticMesh, LODIndex, SectionIndex) end

---Checks if a specific LOD mesh section affects distance field lighting.
---@param StaticMesh UStaticMesh
---@param LODIndex integer
---@param SectionIndex integer
---@return boolean
function UStaticMeshEditorSubsystem:IsSectionAffectDistanceFieldLightingEnabled(StaticMesh, LODIndex, SectionIndex) end

---Inserts an empty UV channel at the specified channel index on the given LOD of a StaticMesh.
---@param StaticMesh UStaticMesh
---@param LODIndex integer
---@param UVChannelIndex integer
---@return boolean
function UStaticMeshEditorSubsystem:InsertUVChannel(StaticMesh, LODIndex, UVChannelIndex) end

---Import or re-import the nanite hi-res mesh into the specified base mesh.
---                                                     it can be empty, in this case it will use the last import file. Otherwise it must be an existing file.
---@param StaticMesh UStaticMesh
---@param SourceFilename string
---@param bShowDialogWhenFileMissing boolean
---@return boolean
function UStaticMeshEditorSubsystem:ImportNaniteHiResMesh(StaticMesh, SourceFilename, bShowDialogWhenFileMissing) end

---Import or re-import a LOD into the specified base mesh. If the LOD do not exist it will import it and add it to the base static mesh. If the LOD already exist it will re-import the specified LOD.
---@param BaseStaticMesh UStaticMesh
---@param LODIndex integer
---@param SourceFilename string
---@return integer
function UStaticMeshEditorSubsystem:ImportLOD(BaseStaticMesh, LODIndex, SourceFilename) end

---Check whether a static mesh has vertex colors
---@param StaticMesh UStaticMesh
---@return boolean
function UStaticMeshEditorSubsystem:HasVertexColors(StaticMesh) end

---Check whether a static mesh component has vertex colors
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function UStaticMeshEditorSubsystem:HasInstanceVertexColors(StaticMeshComponent) end

---Get number of simple collisions present on a static mesh.
---An negative value indicates that the command could not be executed. See log for explanation.
---@param StaticMesh UStaticMesh
---@return integer
function UStaticMeshEditorSubsystem:GetSimpleCollisionCount(StaticMesh) end

---Returns the number of UV channels for the given LOD of a StaticMesh.
---@param StaticMesh UStaticMesh
---@param LODIndex integer
---@return integer
function UStaticMeshEditorSubsystem:GetNumUVChannels(StaticMesh, LODIndex) end

---Get number of StaticMesh verts for an LOD
---@param StaticMesh UStaticMesh
---@param LODIndex integer
---@return integer
function UStaticMeshEditorSubsystem:GetNumberVerts(StaticMesh, LODIndex) end

---Get number of Materials for a StaticMesh
---@param StaticMesh UStaticMesh
---@return integer
function UStaticMeshEditorSubsystem:GetNumberMaterials(StaticMesh) end

---Get the Nanite hi-res source filename
---@param StaticMesh UStaticMesh
---@return string
function UStaticMeshEditorSubsystem:GetNaniteSourceFilename(StaticMesh) end

---Get the Nanite Settings for the mesh
---@param StaticMesh UStaticMesh
---@return FMeshNaniteSettings
function UStaticMeshEditorSubsystem:GetNaniteSettings(StaticMesh) end

---Get an array of LOD screen sizes for evaluation.
---@param StaticMesh UStaticMesh
---@return TArray_number_
function UStaticMeshEditorSubsystem:GetLodScreenSizes(StaticMesh) end

---Copy the reduction options with the specified LOD reduction settings.
---@param StaticMesh UStaticMesh
---@param LodIndex integer
---@param OutReductionOptions FMeshReductionSettings @[out] 
function UStaticMeshEditorSubsystem:GetLodReductionSettings(StaticMesh, LodIndex, OutReductionOptions) end

---Gets the material slot used for a specific LOD section.
---@param StaticMesh UStaticMesh
---@param LODIndex integer
---@param SectionIndex integer
---@return integer
function UStaticMeshEditorSubsystem:GetLODMaterialSlot(StaticMesh, LODIndex, SectionIndex) end

---Get the LODGroup for the specified static mesh
---@param StaticMesh UStaticMesh
---@return string
function UStaticMeshEditorSubsystem:GetLODGroup(StaticMesh) end

---Get number of LODs present on a static mesh.
---An negative value indicates that the command could not be executed. See log for explanation.
---@param StaticMesh UStaticMesh
---@return integer
function UStaticMeshEditorSubsystem:GetLodCount(StaticMesh) end

---Copy the build options with the specified LOD build settings.
---@param StaticMesh UStaticMesh
---@param LodIndex integer
---@param OutBuildOptions FMeshBuildSettings @[out] 
function UStaticMeshEditorSubsystem:GetLodBuildSettings(StaticMesh, LodIndex, OutBuildOptions) end

---Get number of convex collisions present on a static mesh.
---An negative value indicates that the command could not be executed. See log for explanation.
---@param StaticMesh UStaticMesh
---@return integer
function UStaticMeshEditorSubsystem:GetConvexCollisionCount(StaticMesh) end

---Get the Collision Trace behavior of a static mesh
---@param StaticMesh UStaticMesh
---@return integer
function UStaticMeshEditorSubsystem:GetCollisionComplexity(StaticMesh) end

---Generates planar UV mapping in the specified UV channel on the given LOD of a StaticMesh.
---@param StaticMesh UStaticMesh
---@param LODIndex integer
---@param UVChannelIndex integer
---@param Position FVector
---@param Orientation FRotator
---@param Tiling FVector2D
---@return boolean
function UStaticMeshEditorSubsystem:GeneratePlanarUVChannel(StaticMesh, LODIndex, UVChannelIndex, Position, Orientation, Tiling) end

---Generates cylindrical UV mapping in the specified UV channel on the given LOD of a StaticMesh.
---@param StaticMesh UStaticMesh
---@param LODIndex integer
---@param UVChannelIndex integer
---@param Position FVector
---@param Orientation FRotator
---@param Tiling FVector2D
---@return boolean
function UStaticMeshEditorSubsystem:GenerateCylindricalUVChannel(StaticMesh, LODIndex, UVChannelIndex, Position, Orientation, Tiling) end

---Generates box UV mapping in the specified UV channel on the given LOD of a StaticMesh.
---@param StaticMesh UStaticMesh
---@param LODIndex integer
---@param UVChannelIndex integer
---@param Position FVector
---@param Orientation FRotator
---@param Size FVector
---@return boolean
function UStaticMeshEditorSubsystem:GenerateBoxUVChannel(StaticMesh, LODIndex, UVChannelIndex, Position, Orientation, Size) end

---Enables/disables mesh section's visibility in ray tracing for a specific LOD.
---@param StaticMesh UStaticMesh
---@param bVisibleInRayTracing boolean
---@param LODIndex integer
---@param SectionIndex integer
function UStaticMeshEditorSubsystem:EnableSectionVisibleInRayTracing(StaticMesh, bVisibleInRayTracing, LODIndex, SectionIndex) end

---Set/unset mesh section to be forcefully opaque for a specific LOD.
---@param StaticMesh UStaticMesh
---@param bForceOpaque boolean
---@param LODIndex integer
---@param SectionIndex integer
function UStaticMeshEditorSubsystem:EnableSectionForceOpaque(StaticMesh, bForceOpaque, LODIndex, SectionIndex) end

---Enables/disables mesh section collision for a specific LOD.
---@param StaticMesh UStaticMesh
---@param bCollisionEnabled boolean
---@param LODIndex integer
---@param SectionIndex integer
function UStaticMeshEditorSubsystem:EnableSectionCollision(StaticMesh, bCollisionEnabled, LODIndex, SectionIndex) end

---Enables/disables mesh section shadow casting for a specific LOD.
---@param StaticMesh UStaticMesh
---@param bCastShadow boolean
---@param LODIndex integer
---@param SectionIndex integer
function UStaticMeshEditorSubsystem:EnableSectionCastShadow(StaticMesh, bCastShadow, LODIndex, SectionIndex) end

---Enables/disables mesh section affects distance field lighting for a specific LOD.
---@param StaticMesh UStaticMesh
---@param bAffectDistanceFieldLighting boolean
---@param LODIndex integer
---@param SectionIndex integer
function UStaticMeshEditorSubsystem:EnableSectionAffectDistanceFieldLighting(StaticMesh, bAffectDistanceFieldLighting, LODIndex, SectionIndex) end

---Build a proxy mesh actor that can replace a set of mesh actors.
---@param ActorsToMerge TArray_AStaticMeshActor_
---@param MergeOptions FCreateProxyMeshActorOptions
---@param OutMergedActor AStaticMeshActor @[out] 
---@return boolean
function UStaticMeshEditorSubsystem:CreateProxyMeshActor(ActorsToMerge, MergeOptions, OutMergedActor) end

---Compute convex collisions for a set of static meshes.
---Any existing collisions will be removed from the static meshes.
---This method replicates what is done when invoking menu entry "Collision > Auto Convex Collision" in the Mesh Editor.
---@param StaticMeshes TArray_UStaticMesh_
---@param HullCount integer
---@param MaxHullVerts integer
---@param HullPrecision integer
---@param bApplyChanges boolean
---@return boolean
function UStaticMeshEditorSubsystem:BulkSetConvexDecompositionCollisionsWithNotification(StaticMeshes, HullCount, MaxHullVerts, HullPrecision, bApplyChanges) end

---Same as SetConvexDecompositionCollisionsWithNotification but changes are automatically applied.
---@param StaticMeshes TArray_UStaticMesh_
---@param HullCount integer
---@param MaxHullVerts integer
---@param HullPrecision integer
---@return boolean
function UStaticMeshEditorSubsystem:BulkSetConvexDecompositionCollisions(StaticMeshes, HullCount, MaxHullVerts, HullPrecision) end

---Adds an empty UV channel at the end of the existing channels on the given LOD of a StaticMesh.
---@param StaticMesh UStaticMesh
---@param LODIndex integer
---@return boolean
function UStaticMeshEditorSubsystem:AddUVChannel(StaticMesh, LODIndex) end

---Add simple collisions to a static mesh.
---This method replicates what is done when invoking menu entries "Collision > Add [...] Simplified Collision" in the Mesh Editor.
---A negative value indicates the addition failed.
---@param StaticMesh UStaticMesh
---@param ShapeType EScriptCollisionShapeType
---@param bApplyChanges boolean
---@return integer
function UStaticMeshEditorSubsystem:AddSimpleCollisionsWithNotification(StaticMesh, ShapeType, bApplyChanges) end

---Same as AddSimpleCollisionsWithNotification but changes are automatically applied.
---@param StaticMesh UStaticMesh
---@param ShapeType EScriptCollisionShapeType
---@return integer
function UStaticMeshEditorSubsystem:AddSimpleCollisions(StaticMesh, ShapeType) end

