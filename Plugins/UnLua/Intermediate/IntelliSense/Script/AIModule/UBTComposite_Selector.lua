---Selector composite node.
---Selector Nodes execute their children from left to right, and will stop executing its children when one of their children succeeds.
---If a Selector's child succeeds, the Selector succeeds. If all the Selector's children fail, the Selector fails.
---@class UBTComposite_Selector : UBTCompositeNode
local UBTComposite_Selector = {}

