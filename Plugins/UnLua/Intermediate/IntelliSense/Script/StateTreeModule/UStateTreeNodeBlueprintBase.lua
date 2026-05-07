---@class UStateTreeNodeBlueprintBase : UObject
---@field private CachedFrameStateTree UStateTree @Cached State Tree of owning execution frame.
---@field private Description string @Description of the node.
---@field private IconName string @Name of the icon in format:              StyleSetName | StyleName [ | SmallStyleName | StatusOverlayStyleName]              SmallStyleName and StatusOverlayStyleName are optional.              Example: "StateTreeEditorStyle|Node.Animation"
---@field private IconColor FColor @Color of the icon.
local UStateTreeNodeBlueprintBase = {}

---Sends event to the StateTree.
---@param Event FStateTreeEvent
function UStateTreeNodeBlueprintBase:SendEvent(Event) end

---Request state transition.
---@param TargetState FStateTreeStateLink
---@param Priority EStateTreeTransitionPriority @[opt] 
function UStateTreeNodeBlueprintBase:RequestTransition(TargetState, Priority) end

---Event to implement to get node description.
---@param Formatting EStateTreeNodeFormatting
---@return string
function UStateTreeNodeBlueprintBase:ReceiveGetDescription(Formatting) end

---Returns true if reference to selected property in State Tree is accessible.
---@param PropertyRef FStateTreeBlueprintPropertyRef
---@return boolean
function UStateTreeNodeBlueprintBase:IsPropertyRefValid(PropertyRef) end

---Returns a reference to selected property in State Tree.
---@param PropertyRef FStateTreeBlueprintPropertyRef
function UStateTreeNodeBlueprintBase:GetPropertyReference(PropertyRef) end

---
---@param PropertyName string
---@return string
function UStateTreeNodeBlueprintBase:GetPropertyDescriptionByPropertyName(PropertyName) end

