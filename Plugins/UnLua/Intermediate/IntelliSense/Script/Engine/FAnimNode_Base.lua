---This is the base of all runtime animation nodes
---To create a new animation node:
---  Create a struct derived from FAnimNode_Base - this is your runtime node
---  Create a class derived from UAnimGraphNode_Base, containing an instance of your runtime node as a member - this is your visual/editor-only node
---@class FAnimNode_Base
---@field private InitialUpdateFunction FAnimNodeFunctionRef @Function called on initial update
---@field private BecomeRelevantFunction FAnimNodeFunctionRef @Function called on become relevant
---@field private UpdateFunction FAnimNodeFunctionRef @Function called on update
local FAnimNode_Base = {}
