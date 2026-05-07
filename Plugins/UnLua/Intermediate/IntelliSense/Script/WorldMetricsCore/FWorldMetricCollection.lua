---World metric's collection
---A class representing a collection of world metrics. This class allows instantiating and running an arbitrary set of
---metrics together. The collection observes one instance of per metric class and depends on the World Metric's
---Subsystem to run the metrics. For this reason, the collection requires initialization. Users are responsible for
---ensuring both their lifetime and that of the World Metric's Subsystem in their world object.
---@class FWorldMetricCollection
---@field private Metrics TArray<UWorldMetricInterface> @List of metrics objects.
---@field private Subsystem TWeakObjectPtr<UWorldMetricsSubsystem> @World Metric's Subsystem provided by the outer object.
---@field private bIsEnabled boolean @Flag indicating whether the contained metrics are enabled and running in the World Metric's Subsystem.
local FWorldMetricCollection = {}
