---A UInteractionMechanic implements a "user interaction". This is generally a subset of an InteractiveTool,
---for example an interaction to draw a polygon could be used in many tools, but requires handling input events
---and converting them to click points on a plane, handling various cases like closing a loop, undo/redo of points, etc.
---Ideally all these aspects should be able to be wrapped up in an UInteractionMechanic that multiple Tools can use.
---(This class is still a work in progress)
---@class UInteractionMechanic : UObject
local UInteractionMechanic = {}

