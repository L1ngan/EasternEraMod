---Contains a group of levels of a particular ELevelCollectionType within a UWorld
---and the context required to properly tick/update those levels. This object is move-only.
---@class FLevelCollection
---@field private GameState AGameStateBase @The GameState associated with this collection. This may be different than the UWorld's GameState since the source collection and the duplicated collection will have their own instances.
---@field private NetDriver UNetDriver @The network driver associated with this collection. The source collection and the duplicated collection will have their own instances.
---@field private DemoNetDriver UDemoNetDriver @The demo network driver associated with this collection. The source collection and the duplicated collection will have their own instances.
---@field private PersistentLevel ULevel @The persistent level associated with this collection. The source collection and the duplicated collection will have their own instances.
---@field private Levels TSet<ULevel> @All the levels in this collection.
local FLevelCollection = {}
