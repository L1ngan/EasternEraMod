---This is the base class for any animation graph nodes that generate or consume an animation pose in
---the animation blend graph.
---Any concrete implementations will be paired with a runtime graph node derived from FAnimNode_Base
---@class UAnimGraphNode_Base : UK2Node
---@field public ShowPinForProperties TArray<FOptionalPinFromProperty>
---@field public AlwaysDynamicProperties TSet<string> @Properties marked as always dynamic, so they can be set externally
---@field public BlueprintUsage EBlueprintUsage
---@field public InitialUpdateFunction FMemberReference @Function called before the node is updated for the first time
---@field public BecomeRelevantFunction FMemberReference @Function called when the node becomes relevant, meaning it goes from having no weight to any weight.
---@field public UpdateFunction FMemberReference @Function called when the node is updated
---@field private Binding UAnimGraphNodeBinding @Bindings for pins that this node exposes
---@field private Tag string @Optional reference tag name. If this is set then this node can be referenced from elsewhere in this animation blueprint using an anim node reference
local UAnimGraphNode_Base = {}

