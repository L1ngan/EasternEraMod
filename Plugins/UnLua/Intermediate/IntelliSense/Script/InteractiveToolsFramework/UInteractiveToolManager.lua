---UInteractiveToolManager allows users of the tools framework to create and operate Tool instances.
---For each Tool, a (string,ToolBuilder) pair is registered with the ToolManager.
---Tools can then be activated via the string identifier.
---Currently a single Tool can be active for each input device. So for mouse input a single
---Tool is available and effectively a lightweight mode. The mouse uses the "Left" tool slot.
---For VR controllers and touch input, a "Left" and "Right" tool can be active at the same time.
---Tools are not directly created. Use SelectActiveToolType(side,string) to set the active ToolBuilder
---on a given side, and then use ActivateTool() to create the new Tool instance.
---@class UInteractiveToolManager : UObject
---@field public ActiveLeftTool UInteractiveTool @Currently-active Left Tool, or null if no Tool is active
---@field public ActiveRightTool UInteractiveTool @Currently-active Right Tool, or null if no Tool is active
---@field protected ToolBuilders TMap<string, UInteractiveToolBuilder> @Current set of named ToolBuilders
local UInteractiveToolManager = {}

