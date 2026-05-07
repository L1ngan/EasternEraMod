---* URectangleMarqueeInteraction is a simplified version of URectangleMarqueeMechanic that is not a UInteractionMechanic,
---* which requires a base Tool/ToolManager. This variant does not create it's own InputBehavior, but is still a
---* ClickDragBehaviorTarget.
---*
---* DrawHUD() must be called by the owning code.
---@class URectangleMarqueeInteraction : UObject
local URectangleMarqueeInteraction = {}

