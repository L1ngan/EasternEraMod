---@class UInstancedSkinnedMeshComponent : USkinnedMeshComponent
---@field protected InstanceData TArray<FSkinnedMeshInstanceData> @Array of instances, bulk serialized.
---@field protected NumCustomDataFloats integer @Defines the number of floats that will be available per instance for custom data
---@field protected InstanceCustomData TArray<number> @Array of custom data for instances. This will contains NumCustomDataFloats*InstanceCount entries. The entries are represented sequantially, in instance order. Can be read in a material and manipulated through Blueprints.      Example: If NumCustomDataFloats is 1, then each entry will belong to an instance. Custom data 0 will belong to Instance 0. Custom data 1 will belong to Instance 1 etc.      Example: If NumCustomDataFloats is 2, then each pair of sequential entries belong to an instance. Custom data 0 and 1 will belong to Instance 0. Custom data 2 and 3 will belong to Instance 2 etc.
---@field protected AnimationMinScreenSize number @Screen space footprint (in primary view) cutoff which dictates the far distance the instance will play back animation. Using 0.0 (the default) falls back to a global threshold, a negative value disables the cutoff.
---@field protected InstanceMinDrawDistance integer @Distance from camera at which each instance begins to draw.
---@field protected InstanceStartCullDistance integer @Distance from camera at which each instance begins to fade out.
---@field protected InstanceEndCullDistance integer @Distance from camera at which each instance completely fades out.
---@field protected bInheritPerInstanceData boolean @If true, this component will avoid serializing its per instance data / those properties will also not be editable
---@field protected AnimBankItems TArray<FAnimBankItem>
---@field protected PrimitiveBoundsOverride FBox
---@field protected bIsInstanceDataGPUOnly boolean
---@field protected NumInstancesGPUOnly integer
local UInstancedSkinnedMeshComponent = {}

---Update number of custom data entries per instance. This applies to all instances and will reallocate the full custom data buffer and reset all values to 0
---@param InNumCustomDataFloats integer
function UInstancedSkinnedMeshComponent:SetNumCustomDataFloats(InNumCustomDataFloats) end

---Update custom data for specific instance
---@param InstanceId FPrimitiveInstanceId
---@param CustomDataIndex integer
---@param CustomDataValue number
---@return boolean
function UInstancedSkinnedMeshComponent:SetCustomDataValue(InstanceId, CustomDataIndex, CustomDataValue) end

---Remove the instances specified. Returns True on success.
---@param InstancesToRemove TArray_FPrimitiveInstanceId_
function UInstancedSkinnedMeshComponent:RemoveInstances(InstancesToRemove) end

---Remove the instance specified. Returns True on success.
---@param InstanceId FPrimitiveInstanceId
---@return boolean
function UInstancedSkinnedMeshComponent:RemoveInstance(InstanceId) end

---Optimize the instance data by performing sorting according to spatial hash on the _source_ data.
---Note that this reorders the instances and thus any indexing will change. By default resets the ID mapping to identity.
--- @@param bShouldRetainIdMap   If true, the id mapping is updated instead of reset to identity, this retains the validity of the IDs but adds some memory and storage cost (for the ID mapping).
---@param bShouldRetainIdMap boolean @[opt] 
function UInstancedSkinnedMeshComponent:OptimizeInstanceData(bShouldRetainIdMap) end

---Get the transform for the instance specified. Instance is returned in local space of this component unless bWorldSpace is set. Returns True on success.
---@param InstanceId FPrimitiveInstanceId
---@param OutInstanceTransform FTransform @[out] 
---@param bWorldSpace boolean @[opt] 
---@return boolean
function UInstancedSkinnedMeshComponent:GetInstanceTransform(InstanceId, OutInstanceTransform, bWorldSpace) end

---Clear all instances being rendered by this component.
function UInstancedSkinnedMeshComponent:ClearInstances() end

---Add multiple instances to this component. Transform is given in local space of this component unless bWorldSpace is set.
---@param Transforms TArray_FTransform_
---@param BankIndices TArray_integer_
---@param bShouldReturnIds boolean
---@param bWorldSpace boolean @[opt] 
---@return TArray_FPrimitiveInstanceId_
function UInstancedSkinnedMeshComponent:AddInstances(Transforms, BankIndices, bShouldReturnIds, bWorldSpace) end

---Add an instance to this component. Transform is given in local space of this component unless bWorldSpace is set.
---@param InstanceTransform FTransform
---@param BankIndex integer
---@param bWorldSpace boolean @[opt] 
---@return FPrimitiveInstanceId
function UInstancedSkinnedMeshComponent:AddInstance(InstanceTransform, BankIndex, bWorldSpace) end

---@param BankItem FAnimBankItem
---@return integer
function UInstancedSkinnedMeshComponent:AddAnimBankItem(BankItem) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UInstancedSkinnedMeshComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UInstancedSkinnedMeshComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UInstancedSkinnedMeshComponent:AddAssetUserDataOfClass(InUserDataClass) end

