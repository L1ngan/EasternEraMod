---The Build Data is used to store transient / intermediate build information
---for the RigVM graph to improve the user experience.
---This object is never serialized.
---@class URigVMBuildData : UObject
---@field private GraphFunctionReferences TMap<FRigVMGraphFunctionIdentifier, FRigVMFunctionReferenceArray>
local URigVMBuildData = {}

---Splits a variant from its variant set (by assigning a new, unique guid
---@param InVariantRef FRigVMVariantRef
---@return FRigVMVariantRef
function URigVMBuildData:SplitVariantFromSet(InVariantRef) end

---Joins a variant with another variant's set
---@param InVariantRef FRigVMVariantRef
---@param InGuid FGuid
---@return FRigVMVariantRef
function URigVMBuildData:JoinVariantSet(InVariantRef, InGuid) end

---Returns the asset data given a variant reference
---@param InAssetData FAssetData
---@return FRigVMVariantRef
function URigVMBuildData:GetVariantRefForAsset(InAssetData) end

---Returns all known public function identifiers used in the project
---@param bOnlyPublic boolean @[opt] 
---@return TArray_FRigVMGraphFunctionIdentifier_
function URigVMBuildData:GetUsedFunctionIdentifiers(bOnlyPublic) end

---Returns the function identifier given a variant reference
---@param InVariantRef FRigVMVariantRef
---@return FRigVMGraphFunctionIdentifier
function URigVMBuildData:GetFunctionIdentifierForVariant(InVariantRef) end

---Returns the asset data given a variant reference
---@param InVariantRef FRigVMVariantRef
---@return FAssetData
function URigVMBuildData:GetAssetDataForVariant(InVariantRef) end

---Returns the asset data given an object path
---@param InObjectPath FSoftObjectPath
---@return FAssetData
function URigVMBuildData:GetAssetDataForPath(InObjectPath) end

---Returns all known public function identifiers used in the project
---@param bOnlyPublic boolean @[opt] 
---@return TArray_FRigVMGraphFunctionIdentifier_
function URigVMBuildData:GetAllFunctionIdentifiers(bOnlyPublic) end

---Returns the singleton build data
---@return URigVMBuildData
function URigVMBuildData.Get() end

---Will find the public function variant refs inside this asset, and private function variant refs if the asset is loaded
---@param InAssetData FAssetData
---@return TArray_FRigVMVariantRef_
function URigVMBuildData:GatherFunctionVariantRefsForAsset(InAssetData) end

---Will find all public function variant refs, and private function variant refs from loaded assets
---@return TArray_FRigVMVariantRef_
function URigVMBuildData:GatherAllFunctionVariantRefs() end

---Will find all asset variant refs
---@return TArray_FRigVMVariantRef_
function URigVMBuildData:GatherAllAssetVariantRefs() end

---Will find all the function variants matching the given variant guid
---@param InGuid FGuid
---@return TArray_FRigVMVariantRef_
function URigVMBuildData:FindFunctionVariantRefs(InGuid) end

---Will find all the asset variants matching the given variant guid
---@param InGuid FGuid
---@return TArray_FRigVMVariantRef_
function URigVMBuildData:FindAssetVariantRefs(InGuid) end

---Creates a new variant of a graph function within the same asset
---@param InFunctionIdentifier FRigVMGraphFunctionIdentifier
---@param InName string @[opt] 
---@return FRigVMVariantRef
function URigVMBuildData:CreateFunctionVariant(InFunctionIdentifier, InName) end

---Creates a new variant of an asset
---@param InAssetData FAssetData
---@param InName string @[opt] 
---@return FRigVMVariantRef
function URigVMBuildData:CreateAssetVariant(InAssetData, InName) end

