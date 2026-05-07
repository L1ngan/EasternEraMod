---A component that handles rendering and collision for many instances of one or more UPaperSprite assets.
---@class UPaperGroupedSpriteComponent : UMeshComponent
---@field protected InstanceMaterials TArray<UMaterialInterface> @Array of materials used by the instances
---@field protected PerInstanceSpriteData TArray<FSpriteInstanceData> @Array of instances
local UPaperGroupedSpriteComponent = {}

---Update the transform for the instance specified. Instance is given in local space of this component unless bWorldSpace is set.  Returns True on success.
---@param InstanceIndex integer
---@param NewInstanceTransform FTransform
---@param bWorldSpace boolean @[opt] 
---@param bMarkRenderStateDirty boolean @[opt] 
---@param bTeleport boolean @[opt] 
---@return boolean
function UPaperGroupedSpriteComponent:UpdateInstanceTransform(InstanceIndex, NewInstanceTransform, bWorldSpace, bMarkRenderStateDirty, bTeleport) end

---Update the color for the instance specified. Returns True on success.
---@param InstanceIndex integer
---@param NewInstanceColor FLinearColor
---@param bMarkRenderStateDirty boolean @[opt] 
---@return boolean
function UPaperGroupedSpriteComponent:UpdateInstanceColor(InstanceIndex, NewInstanceColor, bMarkRenderStateDirty) end

---Sort all instances by their world space position along the specified axis
---@param WorldSpaceSortAxis FVector
function UPaperGroupedSpriteComponent:SortInstancesAlongAxis(WorldSpaceSortAxis) end

---Remove the instance specified. Returns True on success.
---@param InstanceIndex integer
---@return boolean
function UPaperGroupedSpriteComponent:RemoveInstance(InstanceIndex) end

---Get the transform for the instance specified. Instance is returned in local space of this component unless bWorldSpace is set.  Returns True on success.
---@param InstanceIndex integer
---@param OutInstanceTransform FTransform @[out] 
---@param bWorldSpace boolean @[opt] 
---@return boolean
function UPaperGroupedSpriteComponent:GetInstanceTransform(InstanceIndex, OutInstanceTransform, bWorldSpace) end

---Get the number of instances in this component
---@return integer
function UPaperGroupedSpriteComponent:GetInstanceCount() end

---Clear all instances being rendered by this component
function UPaperGroupedSpriteComponent:ClearInstances() end

---Add an instance to this component. Transform can be given either in the local space of this component or world space.
---@param Transform FTransform
---@param Sprite UPaperSprite
---@param bWorldSpace boolean @[opt] 
---@param Color FLinearColor @[opt] 
---@return integer
function UPaperGroupedSpriteComponent:AddInstance(Transform, Sprite, bWorldSpace, Color) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPaperGroupedSpriteComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UPaperGroupedSpriteComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPaperGroupedSpriteComponent:AddAssetUserDataOfClass(InUserDataClass) end

