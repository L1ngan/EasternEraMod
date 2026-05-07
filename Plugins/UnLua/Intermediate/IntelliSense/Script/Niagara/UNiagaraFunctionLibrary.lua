---A C++ and Blueprint accessible library of utility functions for accessing Niagara simulations
---All positions & orientations are returned in Unreal reference frame & units, assuming the Leap device is located at the origin.
---@class UNiagaraFunctionLibrary : UBlueprintFunctionLibrary
local UNiagaraFunctionLibrary = {}

---@param SpawnParams FFXSystemSpawnParameters
---@return UNiagaraComponent
function UNiagaraFunctionLibrary.SpawnSystemAttachedWithParams(SpawnParams) end

---@param SystemTemplate UNiagaraSystem
---@param AttachToComponent USceneComponent
---@param AttachPointName string
---@param Location FVector
---@param Rotation FRotator
---@param LocationType integer
---@param bAutoDestroy boolean
---@param bAutoActivate boolean @[opt] 
---@param PoolingMethod ENCPoolMethod @[opt] 
---@param bPreCullCheck boolean @[opt] 
---@return UNiagaraComponent
function UNiagaraFunctionLibrary.SpawnSystemAttached(SystemTemplate, AttachToComponent, AttachPointName, Location, Rotation, LocationType, bAutoDestroy, bAutoActivate, PoolingMethod, bPreCullCheck) end

---@param SpawnParams FFXSystemSpawnParameters
---@return UNiagaraComponent
function UNiagaraFunctionLibrary.SpawnSystemAtLocationWithParams(SpawnParams) end

---Spawns a Niagara System at the specified world location/rotation
---@param WorldContextObject UObject
---@param SystemTemplate UNiagaraSystem
---@param Location FVector
---@param Rotation FRotator
---@param Scale FVector @[opt] 
---@param bAutoDestroy boolean @[opt] 
---@param bAutoActivate boolean @[opt] 
---@param PoolingMethod ENCPoolMethod @[opt] 
---@param bPreCullCheck boolean @[opt] 
---@return UNiagaraComponent
function UNiagaraFunctionLibrary.SpawnSystemAtLocation(WorldContextObject, SystemTemplate, Location, Rotation, Scale, bAutoDestroy, bAutoActivate, PoolingMethod, bPreCullCheck) end

---Overrides the Volume Texture for a Niagara Volume Texture Data Interface User Parameter.
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName string
---@param Texture UVolumeTexture
function UNiagaraFunctionLibrary.SetVolumeTextureObject(NiagaraSystem, OverrideName, Texture) end

---Overrides the Texture Object for a Niagara Texture Data Interface User Parameter.
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName string
---@param Texture UTexture
function UNiagaraFunctionLibrary.SetTextureObject(NiagaraSystem, OverrideName, Texture) end

---Overrides the 2D Array Texture for a Niagara 2D Array Texture Data Interface User Parameter.
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName string
---@param Texture UTexture2DArray
function UNiagaraFunctionLibrary.SetTexture2DArrayObject(NiagaraSystem, OverrideName, Texture) end

---Sets the SamplingRegion to use on the skeletal mesh data interface, this is destructive as it modifies the data interface.
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName string
---@param SamplingRegions TArray_string_
function UNiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions(NiagaraSystem, OverrideName, SamplingRegions) end

---Sets the Filtered Sockets to use on the skeletal mesh data interface, this is destructive as it modifies the data interface.
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName string
---@param FilteredSockets TArray_string_
function UNiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceFilteredSockets(NiagaraSystem, OverrideName, FilteredSockets) end

---Sets the Filtered Bones to use on the skeletal mesh data interface, this is destructive as it modifies the data interface.
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName string
---@param FilteredBones TArray_string_
function UNiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceFilteredBones(NiagaraSystem, OverrideName, FilteredBones) end

---Sets managed mode parameters for the Scene capture 2D  data interface, this is destructive as it modifies the data interface.
---@param NiagaraSystem UNiagaraComponent
---@param DIName string
---@param ManagedCaptureSource integer
---@param ManagedTextureSize FIntPoint
---@param ManagedTextureFormat integer
---@param ManagedProjectionType integer
---@param ManagedFOVAngle number
---@param ManagedOrthoWidth number
---@param bManagedCaptureEveryFrame boolean
---@param bManagedCaptureOnMovement boolean
---@param ShowOnlyActors TArray_AActor_
function UNiagaraFunctionLibrary.SetSceneCapture2DDataInterfaceManagedMode(NiagaraSystem, DIName, ManagedCaptureSource, ManagedTextureSize, ManagedTextureFormat, ManagedProjectionType, ManagedFOVAngle, ManagedOrthoWidth, bManagedCaptureEveryFrame, bManagedCaptureOnMovement, ShowOnlyActors) end

---Sets the Niagara GPU ray traced collision group for the give primitive component.
---@param WorldContextObject UObject
---@param Primitive UPrimitiveComponent
---@param CollisionGroup integer
function UNiagaraFunctionLibrary.SetComponentNiagaraGPURayTracedCollisionGroup(WorldContextObject, Primitive, CollisionGroup) end

---Sets the Niagara GPU ray traced collision group for all primitive components on the given actor.
---@param WorldContextObject UObject
---@param Actor AActor
---@param CollisionGroup integer
function UNiagaraFunctionLibrary.SetActorNiagaraGPURayTracedCollisionGroup(WorldContextObject, Actor, CollisionGroup) end

---Releases a collision group back to the system for use by ohers.
---@param WorldContextObject UObject
---@param CollisionGroup integer
function UNiagaraFunctionLibrary.ReleaseNiagaraGPURayTracedCollisionGroup(WorldContextObject, CollisionGroup) end

---Sets a Niagara StaticMesh parameter by name, overriding locally if necessary.
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName string
---@param StaticMeshComponent UStaticMeshComponent
function UNiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent(NiagaraSystem, OverrideName, StaticMeshComponent) end

---@param NiagaraSystem UNiagaraComponent
---@param OverrideName string
---@param StaticMesh UStaticMesh
function UNiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh(NiagaraSystem, OverrideName, StaticMesh) end

---Sets a Niagara StaticMesh parameter by name, overriding locally if necessary.
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName string
---@param SkeletalMeshComponent USkeletalMeshComponent
function UNiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent(NiagaraSystem, OverrideName, SkeletalMeshComponent) end

---This is gonna be totally reworked
---       UFUNCTION(BlueprintCallable, Category = Niagara, meta = (Keywords = "niagara System", UnsafeDuringActorConstruction = "true"))
---       static void SetUpdateScriptConstant(UNiagaraComponent* Component, FName EmitterName, FName ConstantName, FVector Value);
---@param WorldContextObject UObject
---@param Collection UNiagaraParameterCollection
---@return UNiagaraParameterCollectionInstance
function UNiagaraFunctionLibrary.GetNiagaraParameterCollection(WorldContextObject, Collection) end

---Returns a free collision group for use in HWRT collision group filtering. Returns -1 on failure.
---@param WorldContextObject UObject
---@return integer
function UNiagaraFunctionLibrary.AcquireNiagaraGPURayTracedCollisionGroup(WorldContextObject) end

