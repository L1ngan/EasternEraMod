---Actor tracker class
---This class provides a tracking context for actors added and removed from the world. For an actor to be considered
---added to the world, it must have all its components registered. This class provides two ways of usage:
---- Polling mode: accessible through ForEachActorInWorld.
---- Subscriber mode: this mode is enabled through acquire/release semantics. When acquired, the actor tracker
---subscribes to the world's PostRegisterAllActorComponents and PreUnregisterAllActorComponentsRegistered events
---tracking all unique actors. In addition, metrics implementing IWorldMetricsActorTrackerSubscriber receive actor
---addition and removal notifications.
---@class UWorldMetricsActorTracker : UWorldMetricsExtension
local UWorldMetricsActorTracker = {}

