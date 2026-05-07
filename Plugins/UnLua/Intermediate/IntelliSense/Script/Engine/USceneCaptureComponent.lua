----> will be exported to EngineDecalClasses.h
---@class USceneCaptureComponent : USceneComponent
---@field public PrimitiveRenderMode ESceneCapturePrimitiveRenderMode @Controls what primitives get rendered into the scene capture.
---@field public CaptureSource integer
---@field public bCaptureEveryFrame boolean @Whether to update the capture's contents every frame.  If disabled, the component will render once on load and then only when moved.
---@field public bCaptureOnMovement boolean @Whether to update the capture's contents on movement.  Disable if you are going to capture manually from blueprint.
---@field public bCaptureGpuNextRender boolean @Capture a GPU frame for this scene capture, next time it renders (capture program must be connected).
---@field public bDumpGpuNextRender boolean @Run DumpGPU for this scene capture, next time it renders.
---@field public bExcludeFromSceneTextureExtents boolean @Whether this capture should be excluded from tracking scene texture extents.  This should be set when this capture is not expected to be frequently used, especially if the capture resolution is very large.  Setting this for a single-use capture will avoid influencing other scene texture extent decisions and avoid a possible ongoing increase in memory usage.
---@field public bAlwaysPersistRenderingState boolean @Whether to persist the rendering state even if bCaptureEveryFrame==false.  This allows velocities for Motion Blur and Temporal AA to be computed.
---@field public HiddenComponents TArray<TWeakObjectPtr<UPrimitiveComponent>> @The components won't rendered by current component.
---@field public HiddenActors TArray<AActor> @The actors to hide in the scene capture.
---@field public ShowOnlyComponents TArray<TWeakObjectPtr<UPrimitiveComponent>> @The only components to be rendered by this scene capture, if PrimitiveRenderMode is set to UseShowOnlyList.
---@field public ShowOnlyActors TArray<AActor> @The only actors to be rendered by this scene capture, if PrimitiveRenderMode is set to UseShowOnlyList.
---@field public LODDistanceFactor number @Scales the distance used by LOD. Set to values greater than 1 to cause the scene capture to use lower LODs than the main view to speed up the scene capture pass.
---@field public MaxViewDistanceOverride number @if > 0, sets a maximum render distance override.  Can be used to cull distant objects from a reflection if the reflecting plane is in an enclosed area like a hallway or room
---@field public CaptureSortPriority integer @Capture priority within the frame to sort scene capture on GPU to resolve interdependencies between multiple capture components. Highest come first.
---@field public bUseRayTracingIfEnabled boolean @Whether to use ray tracing for this capture. Ray Tracing must be enabled in the project.
---@field public CollectionTransform UMaterialParameterCollection @Store WorldToLocal and/or Projection matrices (2D capture only) to a Material Parameter Collection on render.
---@field public CollectionTransformWorldToLocal string @Parameter name of the first element of the transform in the CollectionTransform Material Parameter Collection set above.  Requires space for 5 vectors (large world coordinate transform).
---@field public CollectionTransformProjection string @Parameter name of the first element of the transform in the CollectionTransform Material Parameter Collection set above.  Requires space for 4 vectors.
---@field public ViewLightingChannels FViewLightingChannels @View / light masking support.  Controls which lights should affect this view.
---@field public ShowFlagSettings TArray<FEngineShowFlagsSetting>
---@field public ProfilingEventName string @Name of the profiling event.
---@field protected CaptureMesh UStaticMesh @The mesh used by ProxyMeshComponent
local USceneCaptureComponent = {}

---Adds the component to our list of show-only components.
---@param InComponent UPrimitiveComponent
function USceneCaptureComponent:ShowOnlyComponent(InComponent) end

---Adds all primitive components in the actor to our list of show-only components.
---@param InActor AActor
---@param bIncludeFromChildActors boolean @[opt] 
function USceneCaptureComponent:ShowOnlyActorComponents(InActor, bIncludeFromChildActors) end

---Set the show flag settings.
---@param InShowFlagSettings TArray_FEngineShowFlagsSetting_
function USceneCaptureComponent:SetShowFlagSettings(InShowFlagSettings) end

---Changes the value of TranslucentSortPriority.
---@param NewCaptureSortPriority integer
function USceneCaptureComponent:SetCaptureSortPriority(NewCaptureSortPriority) end

---Removes a component from the Show Only list.
---@param InComponent UPrimitiveComponent
function USceneCaptureComponent:RemoveShowOnlyComponent(InComponent) end

---Removes an actor's components from the Show Only list.
---@param InActor AActor
---@param bIncludeFromChildActors boolean @[opt] 
function USceneCaptureComponent:RemoveShowOnlyActorComponents(InActor, bIncludeFromChildActors) end

---Adds the component to our list of hidden components.
---@param InComponent UPrimitiveComponent
function USceneCaptureComponent:HideComponent(InComponent) end

---Adds all primitive components in the actor to our list of hidden components.
---@param InActor AActor
---@param bIncludeFromChildActors boolean @[opt] 
function USceneCaptureComponent:HideActorComponents(InActor, bIncludeFromChildActors) end

---Get the show flag settings.
---@return TArray_FEngineShowFlagsSetting_
function USceneCaptureComponent:GetShowFlagSettings() end

---Clears the Show Only list.
function USceneCaptureComponent:ClearShowOnlyComponents() end

---Clears the hidden list.
function USceneCaptureComponent:ClearHiddenComponents() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USceneCaptureComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function USceneCaptureComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USceneCaptureComponent:AddAssetUserDataOfClass(InUserDataClass) end

