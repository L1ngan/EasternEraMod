---USingleClickTool is perhaps the simplest possible interactive tool. It simply
---reacts to default primary button clicks for the active device (eg left-mouse clicks).
---The function ::IsHitByClick() determines what is clickable by this Tool. The default is
---to return true, which means the click will activate anywhere (the Tool itself has no
---notion of Actors, Components, etc). You can override this function to, for example,
---filter out clicks that don't hit a target object, etc.
---The function ::OnClicked() implements the action that will occur when a click happens.
---You must override this to implement any kind of useful behavior.
---@class USingleClickTool : UInteractiveTool
local USingleClickTool = {}

