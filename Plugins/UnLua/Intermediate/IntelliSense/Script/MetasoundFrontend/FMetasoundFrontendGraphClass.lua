---@class FMetasoundFrontendGraphClass : FMetasoundFrontendClass
---@field public Graph FMetasoundFrontendGraph
---@field private PagedGraphs TArray<FMetasoundFrontendGraph> @This property is EditAnywhere with a false EditCondition so child properties (ex. node configuration) have exposed property handles for details customization code, but they should not be editable elsewhere in the editor (ex. property matrix)
---@field public PresetOptions FMetasoundFrontendGraphClassPresetOptions
local FMetasoundFrontendGraphClass = {}
