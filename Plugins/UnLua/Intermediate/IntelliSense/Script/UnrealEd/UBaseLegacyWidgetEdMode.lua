---This class is to aid transitioning from native FEdModes to UEdModes, in the case that the FEdMode used property widgets and/or transform widgets
---To use this class:
---  1. Subclass FLegacyEdModeWidgetHelper, and override the methods needed for your native FEdMode implementation
---  2. Transition your native FEdMode to a UObject, by inheriting from this class
---  3. Override CreateWidgetHelper function to return a SharedRef to the class you created in step 1.
---@class UBaseLegacyWidgetEdMode : UEdMode
local UBaseLegacyWidgetEdMode = {}

