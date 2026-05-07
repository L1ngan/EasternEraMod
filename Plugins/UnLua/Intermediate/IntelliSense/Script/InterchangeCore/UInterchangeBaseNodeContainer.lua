---The Interchange UInterchangeBaseNode graph is a format used to feed factories and writers when they import, reimport, and
---export an asset or scene.
---This container holds a flat list of all nodes that have been translated from the source data.
---Translators fill this container, and the import/export managers read it to execute the import/export process.
---@class UInterchangeBaseNodeContainer : UObject
---@field private Nodes TMap<string, UInterchangeBaseNode> @Flat List of the nodes. Since the nodes are variable size, we store a pointer.
local UInterchangeBaseNodeContainer = {}

---Set the ParentUid of the node.
---@param NodeUniqueID string
---@param NewParentNodeUid string
---@return boolean
function UInterchangeBaseNodeContainer:SetNodeParentUid(NodeUniqueID, NewParentNodeUid) end

---Set the desired child index of the node.
---@param NodeUniqueID string
---@param NewNodeDesiredChildIndex integer
---@return boolean
function UInterchangeBaseNodeContainer:SetNodeDesiredChildIndex(NodeUniqueID, NewNodeDesiredChildIndex) end

---Set a namespace to all node of the target class in this container. A valid node namespace is prefix to the unique ID in UInterchangeBaseNode::GetUniqueId().
---After adding the namespace this function will find any string attribute in all the node that reference the node unique ID and replace the attribute value with the new unique id.
---The last step is to remap the node container with the new Ids.
---        in a generic way.
---@param Namespace string
---@param TargetClass TSubclassOf_UObject_
function UInterchangeBaseNodeContainer:SetNamespace(Namespace, TargetClass) end

---Serialize the node container into the specified file.
---@param Filename string
function UInterchangeBaseNodeContainer:SaveToFile(Filename) end

---Reset the cache of children UIDs.
function UInterchangeBaseNodeContainer:ResetChildrenCache() end

---Empty the container.
function UInterchangeBaseNodeContainer:Reset() end

---@param NodeUniqueID string
---@param NewNode UInterchangeFactoryBaseNode
function UInterchangeBaseNodeContainer:ReplaceNode(NodeUniqueID, NewNode) end

---Removes node from Nodes map with the given NodeUniqueID.
---@param NodeUniqueID string
function UInterchangeBaseNodeContainer:RemoveNode(NodeUniqueID) end

---Serialize the node container from the specified file.
---@param Filename string
function UInterchangeBaseNodeContainer:LoadFromFile(Filename) end

---Return true if the node unique ID exists in the container.
---@param NodeUniqueID string
---@return boolean
function UInterchangeBaseNodeContainer:IsNodeUidValid(NodeUniqueID) end

---Return all nodes that do not have any parent.
---@param RootNodes TArray_string_ @[out] 
function UInterchangeBaseNodeContainer:GetRoots(RootNodes) end

---Return all nodes that are of the ClassNode type.
---@param ClassNode TSubclassOf_UObject_
---@param OutNodes TArray_string_ @[out] 
function UInterchangeBaseNodeContainer:GetNodes(ClassNode, OutNodes) end

---Get the UIDs of all the node's children.
---@param NodeUniqueID string
---@return TArray_string_
function UInterchangeBaseNodeContainer:GetNodeChildrenUids(NodeUniqueID) end

---Get the number of children the node has.
---@param NodeUniqueID string
---@return integer
function UInterchangeBaseNodeContainer:GetNodeChildrenCount(NodeUniqueID) end

---Get the nth const child of the node
---@param NodeUniqueID string
---@param ChildIndex integer
---@return UInterchangeBaseNode
function UInterchangeBaseNodeContainer:GetNodeChildren(NodeUniqueID, ChildIndex) end

---Get a node pointer. Once added to the container, nodes are considered const.
---@param NodeUniqueID string
---@return UInterchangeBaseNode
function UInterchangeBaseNodeContainer:GetNode(NodeUniqueID) end

---Checks if ParentNodeUID is an ancestor.
---@param NodeUniqueID string
---@param AncestorUID string
---@return boolean
function UInterchangeBaseNodeContainer:GetIsAncestor(NodeUniqueID, AncestorUID) end

---Get a factory node pointer.
---@param NodeUniqueID string
---@return UInterchangeFactoryBaseNode
function UInterchangeBaseNodeContainer:GetFactoryNode(NodeUniqueID) end

---Fill the cache of children UIDs to optimize the GetNodeChildrenUids call.
function UInterchangeBaseNodeContainer:ComputeChildrenCache() end

---Remove the node's ParentUid, making it into a top-level node
---@param NodeUniqueID string
---@return boolean
function UInterchangeBaseNodeContainer:ClearNodeParentUid(NodeUniqueID) end

---Add a node to the container. The node is added into a TMap.
---@param Node UInterchangeBaseNode
---@return string
function UInterchangeBaseNodeContainer:AddNode(Node) end

