---@class UGeometryCollectionCache : UObject
---@field private RecordedData FRecordedTransformTrack @The recorded data from the simulation
---@field private SupportedCollection UGeometryCollection @The collection that we recorded the data from
---@field private CompatibleCollectionState FGuid @Guid pulled from the collection when the recording was last saved
local UGeometryCollectionCache = {}

