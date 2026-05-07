---Allows you to expose an external slot for your user widget.  When others reuse your user control,
---they can put whatever they want in this named slot.
---@class UNamedSlot : UContentWidget
---@field public bExposeOnInstanceOnly boolean @Named slots exposed on the instance only follow a slightly different set of rules.  For example, they can contain some content that the user can replace after dropping it into their tree.  However, these slots can not be inherited to be filled in by a subclass.  So if you want this named slot to be extensible in a subclass of this widget, you should set or leave this value as false.
---@field private SlotGuid FGuid
local UNamedSlot = {}

