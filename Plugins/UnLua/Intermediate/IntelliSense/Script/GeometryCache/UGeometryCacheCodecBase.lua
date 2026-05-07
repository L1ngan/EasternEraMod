---Interface for assets/objects that can own UserData *
---@class UGeometryCacheCodecBase : UObject
---@field protected TopologyRanges TArray<integer> @Frames at which the topology of the decoded frames changes sorted in increasing order this allows fast topology queries between arbitrary frames. each codec has to fill this
local UGeometryCacheCodecBase = {}

