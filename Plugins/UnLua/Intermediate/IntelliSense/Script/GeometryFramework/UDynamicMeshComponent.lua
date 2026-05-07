---UDynamicMeshComponent is a mesh component similar to UProceduralMeshComponent,
---except it bases the renderable geometry off an internal UDynamicMesh instance (which
---encapsulates a FDynamicMesh3).
---There is extensive support for partial updates to render buffers, customizing colors,
---internally decomposing the mesh into separate chunks for more efficient render updates,
---and support for attaching a 'Postprocessor' to generate a render mesh on-the-fly
---See comment sections below for details.
---@class UDynamicMeshComponent : UBaseDynamicMeshComponent
---@field protected MeshObject UDynamicMesh @Internal FDynamicMesh is stored inside a UDynamicMesh container, which allows it to be used from BP, shared with other UObjects, and so on
---@field private bAllowsGeometrySelection boolean @If set to false, the geometry element selection UI will not be used for this mesh component. This is useful for procedural meshes where selection would be frequently invalidated.
---@field protected TangentsType EDynamicMeshComponentTangentsMode @Tangent source defines whether we use the provided tangents on the Dynamic Mesh, autogenerate tangents, or do not use tangents
---@field public CollisionType integer @Type of Collision Geometry to use for this Mesh
---@field public bUseAsyncCooking boolean @Controls whether the physics cooking should be done off the game thread. This should be used when collision geometry doesn't have to be immediately up to date (For example streaming in far away objects)
---@field public bEnableComplexCollision boolean @If true, current mesh will be used as Complex Collision source mesh. This is independent of the CollisionType setting, ie, even if Complex collision is enabled, if this is false, then the Complex Collision mesh will be empty
---@field public bDeferCollisionUpdates boolean @If true, updates to the mesh will not result in immediate collision regeneration. Useful when the mesh will be modified multiple times before collision is needed.
---@field public bDisableMeshUVHitResults boolean @If true, UV hit results will not be enabled for this mesh's complex collision even if they are enabled for the project settings generally. This can make the complex build faster and take less memory.
---@field protected MeshBodySetup UBodySetup
---@field protected AggGeom FKAggregateGeom @Simplified collision representation for the mesh component
---@field protected AsyncBodySetupQueue TArray<UBodySetup> @Queue for async body setups that are being cooked
local UDynamicMeshComponent = {}

---Compute the maximum MaterialID on the DynamicMesh, and ensure that Material Slots match.
---Pass both arguments as false to just do a check.
---@param bCreateIfMissing boolean @[opt] 
---@param bDeleteExtraSlots boolean @[opt] 
---@return boolean
function UDynamicMeshComponent:ValidateMaterialSlots(bCreateIfMissing, bDeleteExtraSlots) end

---Force an update of the Collision/Physics data for this Component.
---@param bOnlyIfPending boolean @[opt] 
function UDynamicMeshComponent:UpdateCollision(bOnlyIfPending) end

---@param NewTangentsType EDynamicMeshComponentTangentsMode
function UDynamicMeshComponent:SetTangentsType(NewTangentsType) end

---Replace the current UDynamicMesh with a new one, and transfer ownership of NewMesh to this Component.
---This can be used to (eg) assign a UDynamicMesh created with NewObject in the Transient Package to this Component.
---@param NewMesh UDynamicMesh
function UDynamicMeshComponent:SetDynamicMesh(NewMesh) end

---Set value of bDeferCollisionUpdates, when enabled, collision is not automatically recomputed each time the mesh changes.
---@param bEnabled boolean
---@param bImmediateUpdate boolean @[opt] 
function UDynamicMeshComponent:SetDeferredCollisionUpdatesEnabled(bEnabled, bImmediateUpdate) end

---If bEnabled=true, sets bEnableComplexCollision=true and CollisionType=CTF_UseComplexAsSimple
---If bEnabled=true, sets bEnableComplexCollision=false and CollisionType=CTF_UseDefault
---@param bEnabled boolean
---@param bImmediateUpdate boolean @[opt] 
function UDynamicMeshComponent:SetComplexAsSimpleCollisionEnabled(bEnabled, bImmediateUpdate) end

---Enable/Disable interactive geometry element selection for the mesh. Useful to disable geometry selection on procedural meshes where the selection will be frequently invalidated.
---@param bInAllowsGeometrySelection boolean
function UDynamicMeshComponent:SetAllowsGeometrySelection(bInAllowsGeometrySelection) end

---Notify the Component that vertex attribute values of it's DynamicMesh have been modified externally. This will result in
---Rendering vertex buffers being updated. This update path is more efficient than doing a full Notify Mesh Updated.
---or (3) any attribute overlay (normal, color, UV) topology has been modified, ie split-vertices have been added/removed.
---Behavior of this function is undefined in these cases and may crash. If you are unsure, use Notify Mesh Updated.
---@param bPositions boolean @[opt] 
---@param bNormals boolean @[opt] 
---@param bUVs boolean @[opt] 
---@param bColors boolean @[opt] 
function UDynamicMeshComponent:NotifyMeshVertexAttributesModified(bPositions, bNormals, bUVs, bColors) end

---Notify the Component that it's DynamicMesh has been modified externally. This will result in all Rendering Data
---for the Component being rebuilt on the next frame (internally the Scene Proxy is fully destroyed and rebuilt).
---You must use this function if the mesh triangulation has been modified, or if polygroups or material assignments
---have been changed, or if Normal/UV/Color topology has changed (ie new split-vertices have been introduced).
---If only vertex attribute values (position, normals, UVs, colors) have been modified, then
---Notify Vertex Attributes Updated can be used to do a faster update.
function UDynamicMeshComponent:NotifyMeshModified() end

---pure version of GetTangentsType, so it can be used as a getter below (getters must be BlueprintPure)
---@return EDynamicMeshComponentTangentsMode
function UDynamicMeshComponent:GetTangentsTypePure() end

---@return EDynamicMeshComponentTangentsMode
function UDynamicMeshComponent:GetTangentsType() end

---calls SetComplexAsSimpleCollisionEnabled(true, true)
function UDynamicMeshComponent:EnableComplexAsSimpleCollision() end

---Set new list of Materials for the Mesh. Dynamic Mesh Component does not have
---Slot Names, so the size of the Material Set should be the same as the number of
---different Material IDs on the mesh MaterialID attribute
---@param NewMaterialSet TArray_UMaterialInterface_
---@param bDeleteExtraSlots boolean @[opt] 
function UDynamicMeshComponent:ConfigureMaterialSet(NewMaterialSet, bDeleteExtraSlots) end

---
---@return boolean
function UDynamicMeshComponent:AllowsGeometrySelection() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UDynamicMeshComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UDynamicMeshComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UDynamicMeshComponent:AddAssetUserDataOfClass(InUserDataClass) end

