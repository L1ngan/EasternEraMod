---This struct is used to store and retrieve key-value attributes. The attributes are stored in a generic FAttributeStorage that serializes the values in a TArray64<uint8>.
---See UE::Interchange::EAttributeTypes to know the supported template types.
---This is an abstract class. This is the base class of the interchange node graph format; all classes in this format should derive from this class.
---@class UInterchangeBaseNode : UObject
---@field public UserInterfaceContext EInterchangeNodeUserInterfaceContext @Temporary property set by UI to have the context for ShouldHideAttribute. We use this because the property editor cannot add this custom context when it calls CustomizeDetails.
local UInterchangeBaseNode = {}

---Determine whether this node should be part of the import or export process.
---@param bIsEnabled boolean
---@return boolean
function UInterchangeBaseNode:SetEnabled(bIsEnabled) end

---Change the display label.
---@param DisplayName string
---@return boolean
function UInterchangeBaseNode:SetDisplayLabel(DisplayName) end

---Set the name for the imported asset this node represents. The asset factory will call GetAssetName().
---@param AssetName string
---@return boolean
function UInterchangeBaseNode:SetAssetName(AssetName) end

---Remove an asset node UID relating to this object.
---@param AssetUid string
---@return boolean
function UInterchangeBaseNode:RemoveTargetNodeUid(AssetUid) end

---Remove the specified attribute from this node. Returns false if it could not be removed. If the attribute does not exist, returns true.
---@param NodeAttributeKey string
---@return boolean
function UInterchangeBaseNode:RemoveAttribute(NodeAttributeKey) end

---If true, the node is imported or exported. If false, it is discarded.
---Returns false if the node was disabled. Returns true if the attribute is not there or if it was enabled.
---@return boolean
function UInterchangeBaseNode:IsEnabled() end

---Initialize the base data of the node.
---If the Node to initialize also will get a Parent, then the UInterchangeBaseNodeContainer's SetupNode is better suited.
---@param UniqueID string
---@param DisplayLabel string
---@param NodeContainerType EInterchangeNodeContainerType
function UInterchangeBaseNode:InitializeNode(UniqueID, DisplayLabel, NodeContainerType) end

---Get a Vector2 attribute from this node. Returns false if the attribute does not exist.
---@param NodeAttributeKey string
---@param OutValue FVector2f @[out] 
---@return boolean
function UInterchangeBaseNode:GetVector2Attribute(NodeAttributeKey, OutValue) end

---Return the unique ID passed in the constructor.
---@return string
function UInterchangeBaseNode:GetUniqueID() end

---Return the node type name of the class. This is used when reporting errors.
---@return string
function UInterchangeBaseNode:GetTypeName() end

---Get the target assets relating to this object.
---@param OutTargetAssets TArray_string_ @[out] 
function UInterchangeBaseNode:GetTargetNodeUids(OutTargetAssets) end

---Get the number of target assets relating to this object.
---@return integer
function UInterchangeBaseNode:GetTargetNodeCount() end

---Get a string attribute from this node. Returns false if the attribute does not exist.
---@param NodeAttributeKey string
---@param OutValue string @[out] 
---@return boolean
function UInterchangeBaseNode:GetStringAttribute(NodeAttributeKey, OutValue) end

---Return the parent unique ID. If the attribute does not exist, returns InvalidNodeUid().
---Use UInterchangeBaseNodeContainer::SetNodeParentUid function to create a parent hierarchy. This will ensure the container cache is always in sync
---It's suggested to use SetupNode (that will Iintialize, Add to container and setup the Parent hierarchy as well).
---@return string
function UInterchangeBaseNode:GetParentUid() end

---Return the node container type that defines the purpose of the node (factory node, translated scene node, or translated asset node).
---@return EInterchangeNodeContainerType
function UInterchangeBaseNode:GetNodeContainerType() end

---Namespace is a prefix added when calling GetUniqueId().
---If the attribute exist it will fill Namespace and return true.
---If the attribute do not exist, it will not touch OutNamespace and return false.
---@param Namespace string @[out] 
---@return boolean
function UInterchangeBaseNode:GetNamespace(Namespace) end

---Get an FLinearColor attribute from this node. Returns false if the attribute does not exist.
---@param NodeAttributeKey string
---@param OutValue FLinearColor @[out] 
---@return boolean
function UInterchangeBaseNode:GetLinearColorAttribute(NodeAttributeKey, OutValue) end

---Get a int32 attribute from this node. Returns false if the attribute does not exist.
---@param NodeAttributeKey string
---@param OutValue integer @[out] 
---@return boolean
function UInterchangeBaseNode:GetInt32Attribute(NodeAttributeKey, OutValue) end

---Icon name, used to retrieve the brush when we display the node in any UI.
---@return string
function UInterchangeBaseNode:GetIconName() end

---Get a GUID attribute from this node. Returns false if the attribute does not exist.
---@param NodeAttributeKey string
---@param OutValue FGuid @[out] 
---@return boolean
function UInterchangeBaseNode:GetGuidAttribute(NodeAttributeKey, OutValue) end

---Get a float attribute from this node. Returns false if the attribute does not exist.
---@param NodeAttributeKey string
---@param OutValue number @[out] 
---@return boolean
function UInterchangeBaseNode:GetFloatAttribute(NodeAttributeKey, OutValue) end

---Get a double attribute from this node. Returns false if the attribute does not exist.
---@param NodeAttributeKey string
---@param OutValue number @[out] 
---@return boolean
function UInterchangeBaseNode:GetDoubleAttribute(NodeAttributeKey, OutValue) end

---Return the display label.
---@return string
function UInterchangeBaseNode:GetDisplayLabel() end

---Return the desired child index. If the attribute do not exist it will return INDEX_NONE.
---The interchange node container will use this to re-order children if attribute are specified.
---Use UInterchangeBaseNodeContainer::SetNodeDesiredChildIndex function to set this node child index. This will ensure the container cache is always in sync
---@return integer
function UInterchangeBaseNode:GetDesiredChildIndex() end

---Get a Boolean attribute from this node. Returns false if the attribute does not exist.
---@param NodeAttributeKey string
---@param OutValue boolean @[out] 
---@return boolean
function UInterchangeBaseNode:GetBooleanAttribute(NodeAttributeKey, OutValue) end

---Optional. Any node that can import or export an asset should set the desired name for the asset.
---If the attribute was never set, returns GetDisplayLabel().
---@return string
function UInterchangeBaseNode:GetAssetName() end

---Add a Vector2 attribute to this node. Returns false if the attribute does not exist or if it cannot be added.
---@param NodeAttributeKey string
---@param Value FVector2f
---@return boolean
function UInterchangeBaseNode:AddVector2Attribute(NodeAttributeKey, Value) end

---Add an asset node UID relating to this object.
---@param AssetUid string
---@return boolean
function UInterchangeBaseNode:AddTargetNodeUid(AssetUid) end

---Add a string attribute to this node. Returns false if the attribute does not exist or if it cannot be added.
---@param NodeAttributeKey string
---@param Value string
---@return boolean
function UInterchangeBaseNode:AddStringAttribute(NodeAttributeKey, Value) end

---Add an FLinearColor attribute to this node. Returns false if the attribute does not exist or if it cannot be added.
---@param NodeAttributeKey string
---@param Value FLinearColor
---@return boolean
function UInterchangeBaseNode:AddLinearColorAttribute(NodeAttributeKey, Value) end

---Add a int32 attribute to this node. Returns false if the attribute does not exist or if it cannot be added.
---@param NodeAttributeKey string
---@param Value integer
---@return boolean
function UInterchangeBaseNode:AddInt32Attribute(NodeAttributeKey, Value) end

---Add a GUID attribute to this node. Returns false if the attribute does not exist or if it cannot be added.
---@param NodeAttributeKey string
---@param Value FGuid
---@return boolean
function UInterchangeBaseNode:AddGuidAttribute(NodeAttributeKey, Value) end

---Add a float attribute to this node. Returns false if the attribute does not exist or if it cannot be added.
---@param NodeAttributeKey string
---@param Value number
---@return boolean
function UInterchangeBaseNode:AddFloatAttribute(NodeAttributeKey, Value) end

---Add a double attribute to this node. Returns false if the attribute does not exist or if it cannot be added.
---@param NodeAttributeKey string
---@param Value number
---@return boolean
function UInterchangeBaseNode:AddDoubleAttribute(NodeAttributeKey, Value) end

---Add a Boolean attribute to this node. Returns false if the attribute does not exist or if it cannot be added.
---@param NodeAttributeKey string
---@param Value boolean
---@return boolean
function UInterchangeBaseNode:AddBooleanAttribute(NodeAttributeKey, Value) end

