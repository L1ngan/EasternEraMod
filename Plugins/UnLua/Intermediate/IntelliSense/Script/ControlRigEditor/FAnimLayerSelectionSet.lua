---Bound object/control rig and the properties/channels it is made of
---A layer will consist of a bunch of these
---@class FAnimLayerSelectionSet
---@field public BoundObject TWeakObjectPtr<UObject>
---@field public Names TMap<string, FAnimLayerPropertyAndChannels> @bound object is either a CR or a bound sequencer object
local FAnimLayerSelectionSet = {}
