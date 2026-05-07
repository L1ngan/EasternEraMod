---This struct is used to store and retrieve key-value attributes. The attributes are stored in a generic FAttributeStorage that serializes the values in a TArray64<uint8>.
---See UE::Interchange::EAttributeTypes to know the supported template types.
---This is an abstract class. This is the base class of the Interchange node graph format; all classes in this format should derive from this class.
---@class UInterchangeFactoryBaseNode : UInterchangeBaseNode
---@field protected AttributesAppliedThroughDelegatesKeySet TSet<string>
local UInterchangeFactoryBaseNode = {}

---Remove the skip node attribute. See ShouldSkipNodeImport for more documentation.
---@return boolean
function UInterchangeFactoryBaseNode:UnsetSkipNodeImport() end

---Disallow the creation of the Unreal object if it has been previously deleted in the editor.
---@return boolean
function UInterchangeFactoryBaseNode:UnsetForceNodeReimport() end

---Return true if this node should skip the factory import process, or false otherwise.
---Nodes can be in a situation where we have to skip the import process because we cannot import the associated asset for multiple reasons. For example:
---- An asset can already exist and represents a different type (UClass).
---- An asset can already exist and is being compiled.
---- An asset can already exist and is being imported by another concurrent import task (such as a user importing multiple files at the same time in the same content folder).
---@return boolean
function UInterchangeFactoryBaseNode:ShouldSkipNodeImport() end

---Return whether or not an object should be created even if it has been deleted in the editor.
---Return false by default.
---@return boolean
function UInterchangeFactoryBaseNode:ShouldForceNodeReimport() end

---Add the skip node attribute. Use this function to cancel the creation of the Unreal asset. See ShouldSkipNodeImport for more documentation.
---@return boolean
function UInterchangeFactoryBaseNode:SetSkipNodeImport() end

---Change the reimport strategy flags.
---@param ReimportStrategyFlags EReimportStrategyFlags
---@return boolean
function UInterchangeFactoryBaseNode:SetReimportStrategyFlags(ReimportStrategyFlags) end

---Allow the creation of the Unreal object even if it has been previously deleted in the editor.
---@return boolean
function UInterchangeFactoryBaseNode:SetForceNodeReimport() end

---Set the custom sub-path under PackageBasePath where the assets will be created.
---@param AttributeValue string
---@return boolean
function UInterchangeFactoryBaseNode:SetCustomSubPath(AttributeValue) end

---Set the custom ReferenceObject: the UObject this factory node has created.
---@param AttributeValue FSoftObjectPath
---@return boolean
function UInterchangeFactoryBaseNode:SetCustomReferenceObject(AttributeValue) end

---If this node represent a scene asset (actor), you can set a specific level in which we will create this scene asset.
---@param AttributeValue string
---@return boolean
function UInterchangeFactoryBaseNode:SetCustomLevelUid(AttributeValue) end

---Remove one dependency from this object.
---@param DependencyUid string
---@return boolean
function UInterchangeFactoryBaseNode:RemoveFactoryDependencyUid(DependencyUid) end

---Return if the import of the class is allowed at runtime.
---@return boolean
function UInterchangeFactoryBaseNode:IsRuntimeImportAllowed() end

---Return the reimport strategy flags.
---@return EReimportStrategyFlags
function UInterchangeFactoryBaseNode:GetReimportStrategyFlags() end

---Return the UClass of the object we represent, so we can find the factory/writer.
---@return TSubclassOf_UObject_
function UInterchangeFactoryBaseNode:GetObjectClass() end

---Retrieve one dependency for this object.
---@param Index integer
---@param OutDependency string @[out] 
function UInterchangeFactoryBaseNode:GetFactoryDependency(Index, OutDependency) end

---Retrieve the number of factory dependencies for this object.
---@return integer
function UInterchangeFactoryBaseNode:GetFactoryDependenciesCount() end

---Retrieve the dependencies for this object.
---@param OutDependencies TArray_string_ @[out] 
function UInterchangeFactoryBaseNode:GetFactoryDependencies(OutDependencies) end

---Return the custom sub-path under PackageBasePath where the assets will be created.
---@param AttributeValue string @[out] 
---@return boolean
function UInterchangeFactoryBaseNode:GetCustomSubPath(AttributeValue) end

---Return the custom ReferenceObject: the UObject this factory node has created.
---@param AttributeValue FSoftObjectPath @[out] 
---@return boolean
function UInterchangeFactoryBaseNode:GetCustomReferenceObject(AttributeValue) end

---If this node represent a scene asset (actor), return a specific level in which we will create this scene asset.
---@param AttributeValue string @[out] 
---@return boolean
function UInterchangeFactoryBaseNode:GetCustomLevelUid(AttributeValue) end

---Add one dependency to this object.
---@param DependencyUid string
---@return boolean
function UInterchangeFactoryBaseNode:AddFactoryDependencyUid(DependencyUid) end

