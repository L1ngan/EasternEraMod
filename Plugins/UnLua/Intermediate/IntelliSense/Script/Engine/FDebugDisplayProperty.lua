---Debug property display functionality to interact with this, use "display", "displayall", "displayclear"
---@class FDebugDisplayProperty
---@field public Obj UObject @the object whose property to display. If this is a class, all objects of that class are drawn.
---@field public WithinClass TSubclassOf<UObject> @if Obj is a class and WithinClass is not nullptr, further limit the display to objects that have an Outer of WithinClass
local FDebugDisplayProperty = {}
