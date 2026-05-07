---Implements the settings for garbage collection.
---@class UGarbageCollectionSettings : UDeveloperSettings
---@field protected TimeBetweenPurgingPendingKillObjects number @Time in seconds (game time) we should wait between purging object references to objects that are pending kill.
---@field protected FlushStreamingOnGC boolean @If enabled, streaming will be flushed each time garbage collection is triggered.
---@field protected AllowParallelGC boolean @If enabled, garbage collection will use multiple threads.
---@field protected IncrementalBeginDestroyEnabled boolean @If true, the engine will destroy objects incrementally using time limit each frame.
---@field protected CreateGCClusters boolean @If true, the engine will attempt to create clusters of objects for better garbage collection performance.
---@field protected AssetClusteringEnabled boolean @Whether to allow asset files to create actor clusters for GC.
---@field protected ActorClusteringEnabled boolean @Whether to allow levels to create actor clusters for GC.
---@field protected VerifyUObjectsAreNotFGCObjects boolean @If true, the engine will throw a warning when it detects a UObject-derived class which also derives from FGCObject or any of its members is derived from FGCObject.
---@field protected GarbageEliminationEnabled boolean @If true, objects marked as Garbage will be automatically nulled and destroyed by Garbage Collector.
---@field protected DumpObjectCountsToLogWhenMaxObjectLimitExceeded boolean @If true, the engine will dump UObject counts when maximum number of UObjects limit has been exceeded.
---@field protected MinGCClusterSize integer @Minimum GC cluster size.
---@field protected NumRetriesBeforeForcingGC integer @Maximum number of times GC can be skipped if worker threads are currently modifying UObject state. 0 = never force GC
---@field protected MaxObjectsNotConsideredByGC integer @Maximum Object Count Not Considered By GC. Works only in cooked builds.
---@field protected MaxObjectsInGame integer @Maximum number of UObjects that can exist in cooked game. Keep this as small as possible.
---@field protected MaxObjectsInEditor integer @Maximum number of UObjects that can exist in the editor game. Make sure this can hold enough objects for the editor and commadlets within reasonable limit.
local UGarbageCollectionSettings = {}

